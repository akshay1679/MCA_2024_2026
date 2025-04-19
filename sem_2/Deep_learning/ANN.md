ML model that tries to mimic complex fun of human brain

• **Input Layer:** The input layer consists of one or more input neurons, which receive input signals . 

• **Weights:** Each input neuron is associated with a weight, which ==represents the strength of the connection between the input neuron and the output neuron==. 

• **Bias:** A bias term is added to the input layer ==to provide the perceptron with additional flexibility in modeling complex patterns in the input data. ==

• **Activation Function:** The activation function determines the output of the neuron based on the weighted sum of the inputs and the bias term. Common activation functions used include the step function, sigmoid function, and ReLU function.

1. The neuron computes the weighted sum (z) of the inputs (x)

2. The weighted sum (z) is then passed through an activation function. This introduces non-linearity into the network, enabling it to learn complex patterns.

- The output of the activation function becomes the neuron’s output, which can be passed to neurons in the next layer
- Training Algorithm: During training, the ==weights and biases are adjusted to minimize the error== between the predicted output and the true output for a given set of training examples.

## <u>How do artificial neural networks learn?</u>

ANNs learn through a process called ==training==, where the network ==adjusts its weights and biases to minimize the error== between predicted and actual outputs.

This involves two phases: 
1. Forward propagation  
2. Backpropagation

## <u>Forward Propagation</u>

1. First step of training
2. Each hidden layer accepts the input data, processes it as per the activation function and passes to the successive layer
3. **Pre-activation**  computes the weighted sum of inputs  ie ==the linear transformation of weights w.r.t to inputs==
4. **Activation**: Weighted sum of inputs  passed to the activation function

## <u>How does the computer know there is error?</u>

Use ==cost/ loss/ error function/  objective function ==to find the difference between actual o/p and predicted o/p. 
• An example of cost function is ==Mean Square Error== (MSE)

![[Pasted image 20250217072855.png]]

• Common tasks have “standard” loss functions: 

| mean squared error        | regression                 |
| ------------------------- | -------------------------- |
| binary cross-entropy      | two-class classification   |
| categorical cross-entropy | multi-class classification |
## <u>What Caused the Error?</u>

The predicted values are dependent upon 3 things
1. Inputs to the output layer i.e the hidden activation of the second layer
2. Weights between the second hidden layer and the output
3. Activation function present at the output layer

==wrong weights caused the error==

backpropagation, which uses ==gradient descent== to update weights


## <u>Backpropagation</u>

 Backpropagation  is the method of fine-tuning the weights of a neural network based on the error obtained in the previous epoch (i.e., iteration).
 The aim is to find optimal weights (parameters) corresponding to lowest error.It works iteratively, minimizing the cost function by adjusting weights and biases.In each epoch, the model adapts these parameters, reducing loss by following the error gradient. Backpropagation often utilizes optimization algorithms like gradient descent** or **stochastic gradient descent**.
![[ANN.webp]]

## <u>How to know the optimal weights with minimum error?</u>

Optimization algorithm is used to find the weights that minimize the cost function. • Minimizing the cost function means getting to the minimum point of the cost function, corresponding to lowest cost/loss

![[ANN 1.webp]]



Example of cost function: Mean squared error , Cross-entropy loss (log loss)

 The key calculation involves calculating the gradients for each weight and bias in the network.




