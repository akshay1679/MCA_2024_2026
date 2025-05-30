
```python
import tensorflow as tf
from tensorflow.keras.datasets import mnist
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout, Flatten, Conv2D, MaxPooling2D
from tensorflow.keras.utils import to_categorical
import matplotlib.pyplot as plt
```
[[Dense]]
[[Dropout]]
[[Flatten]]
[[Conv2D]]
[[MaxPooling2D]]
[[to_categorical]]


---

## Loading data

```python
(x_train, y_train), (x_test, y_test) = mnist.load_data()
```


1. **`mnist.load_data()`**: This function is part of the `tensorflow.keras.datasets` module and is used to load the MNIST dataset. It automatically downloads the dataset if it's not already present on your system.

2. **`(x_train, y_train), (x_test, y_test)`**: The `mnist.load_data()` function returns two tuples:
    
    - `(x_train, y_train)`: This tuple contains the training data.
        - `x_train`: Represents the <mark style="background: #FFB8EBA6;">images of the handwritten digits used for training</mark> the model.
        - `y_train`: Represents the <mark style="background: #FFB8EBA6;">corresponding labels</mark> (the actual digit represented by each image) for the training images.
    - `(x_test, y_test)`: This tuple contains the testing data.
        - `x_test`: Represents the images used for testing the model's performance after training.
        - `y_test`: Represents the corresponding labels for the testing images.

---
## Reshaping


```python
# reshaping data for CNN input
img_rows, img_cols = 28, 28
x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)
x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)
# print(x_test)
```

[[Why Reshape]]

1. **`img_rows, img_cols = 28, 28`**: This line defines two variables, `img_rows` and `img_cols`, and assigns them the value 28. These variables represent the height and width of the images in the MNIST dataset, which are 28x28 pixels.
    
2. **`x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)`**: This line reshapes the training data (`x_train`). Let's break it down further:
    
    - `x_train.reshape(...)`: This is the function used to change the shape of the `x_train` array.
    - `x_train.shape[0]`: This refers to the original number of images in the training dataset. The new shape will preserve this number.
    - `img_rows, img_cols`: These are the previously defined height and width of the images (28, 28).
    - `1`: This represents the number of color channels in the images. MNIST images are grayscale, meaning they have only one channel. If the images were RGB, this value would be 3.
3. **`x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)`**: This line does the same reshaping operation for the test data (`x_test`), ensuring it has the same format as the training data.

---
## Normalize

```python
# Normalize pixel values to be between 0 and 1
x_train = x_train / 255.0
x_test = x_test / 255.0
```
### Normalizing Pixel Values

This code snippet is a crucial step in preparing image data for use in a neural network. It **normalizes** the pixel values of the images in the training and testing datasets.


- **`x_train = x_train / 255.0`**: This line takes all the pixel values in the `x_train` dataset and divides each of them by 255.0.
- **`x_test = x_test / 255.0`**: This line does the same operation for the `x_test` dataset.


---

```python
# convert class vectors to binary class matrices

num_classes = 10
y_train = to_categorical(y_train, num_classes)
y_test = to_categorical(y_test, num_classes)
print(y_train)
```

## Converting Class Vectors to Binary Class Matrices

This section of the code focuses on preparing the target variables (`y_train` and `y_test`) for use in a machine learning model, specifically for multi-class classification.

Here's a breakdown:

1. **`num_classes = 10`**:  
    This line defines a variable `num_classes` and sets it to 10. This represents the number of distinct classes or categories in the dataset. In this case, it's likely referring to the 10 digits (0-9) in the MNIST dataset.

library_add

content_copy

```
num_classes = 10
```



2. **`y_train = to_categorical(y_train, num_classes)` and `y_test = to_categorical(y_test, num_classes)`**: These lines utilize the `to_categorical` function from Keras. This function converts the class labels (which are originally integers representing the digits) into a binary class matrix format.

Let's elaborate:

- `y_train` and `y_test` initially hold integer values representing the class labels (e.g., a label of 5 indicates the digit '5').
    
- `to_categorical` transforms these integer labels into a one-hot encoded format. In one-hot encoding, each class label is represented as a binary vector. The vector has a length equal to the number of classes (10 in this case). All elements of the vector are 0 except for the element corresponding to the class index, which is set to 1.
    

library_add

content_copy

```
y_train = to_categorical(y_train, num_classes)y_test = to_categorical(y_test, num_classes)
```



3. **`print(y_train)`**: This line prints the transformed `y_train` to display its new format, which is a binary class matrix.

library_add

content_copy

```
print(y_train)
```



**In summary,** this code snippet prepares the target variables for a machine learning model by converting the class labels from integers to a binary class matrix representation using one-hot encoding. This is a common practice in multi-class classification problems, as it makes the data more suitable for training and evaluation.

---

```python
# Create CNN model

model = Sequential()

model.add(Conv2D(32,kernel_size=(3,3),activation='relu', input_shape=(28,28,1)))

model.add(MaxPooling2D(pool_size=(2,2)))

model.add(Flatten())

model.add(Dense(128,activation='relu'))

model.add(Dense(num_classes, activation='softmax'))
```

1. **`model = Sequential()`**: This line initializes a `Sequential` model. A `Sequential` model is a linear stack of layers, where you can add layers one after another.
    
2. **`model.add(Conv2D(32, kernel_size=(3,3), activation='relu', input_shape=(28,28,1)))`**: This line adds the first layer to the model, which is a 2D convolutional layer (`Conv2D`).
    
    - `32`: Specifies the number of filters (or kernels) in the layer. Each filter learns to detect different features in the input image.
    - `kernel_size=(3,3)`: Defines the size of the convolutional kernel (a 3x3 grid).
    - `activation='relu'` : Applies the Rectified Linear Unit (ReLU) activation function to the output of the convolution. ReLU introduces non-linearity, which is crucial for learning complex patterns.
    - `input_shape=(28,28,1)`: Specifies the shape of the input data. In this case, it's a 28x28 grayscale image (1 channel). This argument is only needed for the first layer.
3. **`model.add(MaxPooling2D(pool_size=(2,2)))`**: This line adds a Max Pooling layer (`MaxPooling2D`).
    
    - `pool_size=(2,2)`: Defines the size of the pooling window (a 2x2 grid). Max pooling reduces the spatial dimensions of the feature maps by taking the maximum value within each pooling window. This helps to downsample the data and make the model more robust to small variations in the input.
4. **`model.add(Flatten())`**: This line adds a `Flatten` layer. The `Flatten` layer converts the multi-dimensional feature maps into a single, long vector. This is necessary to connect the convolutional layers to the fully connected layers that follow.
    
5. **`model.add(Dense(128, activation='relu'))`**: This line adds a fully connected (Dense) layer with 128 neurons.
    
    - `128`: Specifies the number of neurons in the layer.
    - `activation='relu'`: Applies the ReLU activation function.
6. **`model.add(Dense(num_classes, activation='softmax'))`**: This line adds the final output layer, which is also a fully connected layer.
    
    - `num_classes`: This variable (defined earlier in the code) represents the number of classes in the classification problem (which is 10 for the MNIST dataset, representing digits 0-9).
    - `activation='softmax'` : Applies the softmax activation function. Softmax converts the raw output of the network into probabilities for each class, allowing the model to predict the most likely class for a given input.

In summary, this code defines a CNN model for image classification. The model consists of convolutional layers for feature extraction, pooling layers for downsampling, a flattening layer for transitioning to fully connected layers, and finally, dense layers for classification. The `relu` activation function is used for introducing non-linearity, and the `softmax` activation function is used in the output layer to generate probabilities for each class. This architecture is commonly used for image recognition tasks, and in this case, it's being used to classify handwritten digits from the MNIST dataset.


---

```python
# Compile the model

model.compile(loss='categorical_crossentropy', optimizer='adam', metrics=['accuracy'])
```

This line is responsible for configuring the learning process of the Convolutional Neural Network (CNN) model we've built. It essentially sets up how the model will be trained. Here's a detailed explanation:

## `model.compile(...)`

This is a function call that configures the model for training. It takes several arguments that define the training process. Let's discuss the key arguments used here:

### `loss='categorical_crossentropy'`

- **`loss`**: This argument specifies the **loss function** that the model will use during training. The loss function measures the difference between the model's predictions and the actual target values.
- **`categorical_crossentropy`**: This is a specific type of loss function commonly used for multi-class classification problems, like the MNIST digit classification task in this code. It's suitable because we have 10 different digit classes (0-9) to predict.

### `optimizer='adam'`

- **`optimizer`**: This argument determines the **optimization algorithm** that will be used to update the model's weights during training. The optimizer aims to minimize the loss function.
- **`adam`**: Adam (Adaptive Moment Estimation) is a popular optimization algorithm known for its efficiency and effectiveness in various deep learning tasks. It adapts the learning rate for each parameter during training.

### `metrics=['accuracy']`

- **`metrics`**: This argument specifies the **evaluation metrics** used to monitor the model's performance during and after training.
- **`accuracy`**: This is a common metric that measures the percentage of correctly classified examples. It's a good indicator of overall model performance in classification tasks.

**In summary**, this line of code sets up the training process for our CNN model by defining:

1. How the model's error will be measured (`loss`).
2. How the model's weights will be updated (`optimizer`).
3. How the model's performance will be evaluated (`metrics`).

This compilation step is essential before starting the actual training of the model using `model.fit()`.