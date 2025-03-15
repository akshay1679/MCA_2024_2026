
<mark style="background: #FFB86CA6;">Machine Learning (ML)</mark> 

- is a subset of artificial intelligence (AI) 
 -  <mark style="background: #FFB8EBA6;"> enables computers to learn from data and make decisions  without being explicitly programmed</mark>
 - ML <mark style="background: #FFB8EBA6;">algorithms identify patterns and improve their performance over time</mark> as they process more data.

eg: Video recommendations in YouTube, Netflix, Image recognition, face prediction in Facebook


![[Pasted image 20250225195949.png]]

---

### Training phase / Learning phase


<mark style="background: #FFB86CA6;">Training phase</mark>:- process of creating a machine learning algorithm
1. creating ml ==algo==
2. teaches machine ==logic==
3. Provides a ==training set== to the machine

---
### Inference phase


<mark style="background: #FFB86CA6;">Inference phase </mark>-  Process of <mark style="background: #FFB8EBA6;">running live data points into a machine learning algorithm to calculate an output</mark> such as a single numerical score(prediction nadakunne part)


Process of using a machine learning algorithm to make a prediction.

![[Unit 1Machine Learning.webp]]



### Machine learning Cycle

1. Data ==collection== 
2. Data ==preparation== 
3. ==Choose== a model
4. ==Train== the model 
5. Evaluate/==test== the model 
6. Parameter ==tuning== 
7. Make ==predictions

<mark style="background: #ABF7F7A6;">C <br>
P <br>
M <br>
TTT <br>
P</mark>

### What is data and why?

1. Can be <mark style="background: #FFB8EBA6;">any unprocessed fact, value, text, sound or picture that is not being interpreted or analyzed</mark>

2. <mark style="background: #FFB8EBA6;">Data most important part of data analytics  ml and ai</mark>

3. <mark style="background: #FFB8EBA6;">Quality data </mark> is necessary for ML models to operate efficiently


### Data, Information and Knowledge 

• Information --> refined form of data, which is helpful to understand the meaning. 
• Knowledge --> relevant information that helps in drawing conclusions. 
• Data --> compiled in the meaningful context provides information


<mark style="background: #FF5582A6;">Data, Information, and Knowledge</mark>

<mark style="background: #FFB86CA6;">1. Data (Raw Facts)</mark>

- Unprocessed facts, numbers, symbols, or observations.
- <mark style="background: #FFB8EBA6;">It has no meaning until it is analyzed</mark>.
- Example: "25°C," "John," "Blue," "1023" (These are just values).


<mark style="background: #FFB86CA6;">2. Information (Processed Data) </mark>

- <mark style="background: #FFB8EBA6;">When data is organized and given meaning, it becomes information</mark>.
- It helps answer questions like "what," "who," "when," and "where."
- Example: "Today's temperature is 25°C" (Now, the data has meaning).


<mark style="background: #FFB86CA6;">3. Knowledge (Understanding & Insight)</mark>

- <mark style="background: #FFB8EBA6;">Knowledge is derived from information by analyzing patterns and making decisions</mark>.
- It answers "why" and "how" questions.
- Example: "Since it’s 25°C, wearing light clothes is a good choice."


<mark style="background: #ABF7F7A6;">data --> information -->  knoledge</mark>

Example in Machine Learning:

Data: A dataset containing customer purchases (raw numbers).
Information: "Customer A bought a smartphone for $500 on Monday."
Knowledge: "Customers usually buy smartphones in December, so we should offer discounts."



### Datasets in Machine learning

exceldraw

### 3 types of dataset

<mark style="background: #FFB86CA6;"> Training dataset :</mark> : dataset of examples used 
1. during the learning process and 
2. <u><mark style="background: #FFB8EBA6;">used to fit the parameters</mark></u> 

<mark style="background: #FFB86CA6;"> Validate dataset : </mark>
1. dataset of examples <mark style="background: #FFB8EBA6;">used to tune the hyper parameters</mark> (i.e. the architecture) of a classifier. 
2. <mark style="background: #FFB8EBA6;">used to check how well a machine learning model is performing while it's being trained.</mark>

<mark style="background: #FFB86CA6;"> Testing dataset :</mark>: 
1. dataset used to provide an unbiased evaluation of a final model fit on the training dataset
2. is a set of data <mark style="background: #FFB8EBA6;">used to check how well a trained machine learning model performs on new, unseen data</mark>.


train-test-validation split ratio is  specific to  use case

<mark style="background: #BBFABBA6;">where is validation dataset taken from</mark>

![[Unit 1Machine Learning 1.webp]]



### Supervised Learning


-  <mark style="background: #FFB8EBA6;">It is the ml task of learning a function that maps an input to output based on example input-output pairs </mark>
- **Supervised learning** is a type of machine learning where <mark style="background: #FFB8EBA6;">a model learns from labeled data. It means the model is trained using examples that already have the correct answers</mark>

![[Unit 1Machine Learning 1.webp]]
- to train the machine we use data which is  “<mark style="background: #FFB8EBA6;">labeled</mark>” 
-  Means some data is already tagged with correct answer 
-  It can be compared to learning which takes place in the presence of a supervisor or a teacher 
- <mark style="background: #FFB8EBA6;"> Basically learns from labeled trained data and helps to predict outcomes for unforeseen data</mark>

eg : floor dataset

-  First, you need to ==train the machine== on how to classify all different flowers -  You can train it like this: 

1. If there are thorns and the head has color Red then it will be labeled as Rose. 
2. If there aren’t thorns and the head has color White then it will be labeled as Daisy. 


Now, let’s say that after training the data, there is a new separate flower from the bunch and you need to ask the machine to identify it.

-  Since your machine has already learned things
-  The machine will classify the flower regarding the presence or absence of thorns and color and would label the flower name like Rose.  
-  This is how machines learn from training data and then use the knowledge to label data.

---
Supervised learning algorithm can be done in 2 ways:
### Classification vs Regression

-  **Classification** : 
-  Classification is the task of predicting a <mark style="background: #FFB8EBA6;">discrete class label</mark> 
-  In classification problem, data is labeled into 1 or more classes

**Regression**: 
-  Regression is the task of <mark style="background: #FFB8EBA6;">predicting a continuous quantity</mark> 
-  A regression problem requires the prediction of a quantity

### Classification 

-  <mark style="background: #FFB8EBA6;">Classification is the task of predicting a discrete class label</mark> 
-  In classification problem, <mark style="background: #FFB8EBA6;">data is labeled into 1 or more classes</mark>
-  Predicts the data into built in labels 

---

-  2 types of classification methods: <mark style="background: #BBFABBA6;">*binary and multi class*</mark>

-  <mark style="background: #FFB86CA6;">Binary classification</mark> : predicts data into *2 category*
-  Ex: Whether <mark style="background: #FFB8EBA6;">student is pass or fail</mark>, email is spam or not, given fruit is apple or not 

-  <mark style="background: #FFB86CA6;">Multi class classification</mark> : predicts the data to *more than 2 classes* 
-  Ex: ==Categorizing emails== to personal, official, spam


[[sem_2/Deep_learning/module1/Introduction/machine learning]]

---
### Regression   

 -  Regression is a subfield of supervised learning 
 -  <mark style="background: #FFB8EBA6;">a model learns to predict a **continuous value** (like price, temperature, or age) based on input data.</mark>
 -  Aims to model the relationship between a certain number of features and a continuous target variable 
eg:
 -  <mark style="background: #FFB8EBA6;">Predicting prices of a house</mark> given the features of house like size, price etc is one of the common examples of Regression 
 - <mark style="background: #FFB8EBA6;"> Predicting temperature</mark> of a region also comes under regression

![[Unit 1_Machine Learning 1.webp]]

[[Unit 1_Machine Learning.pdf#page=34&rect=65,49,770,477|Unit 1_Machine Learning, p.34]]

---


![[Unit 1Machine Learning 2.webp]]

[[Unit 1_Machine Learning.pdf#page=35&rect=67,56,785,482|Unit 1Machine Learning, .35]]

|**Pros** 🟢|**Cons** 🔴|
|---|---|
|✅ Learns from experience and improves over time.|❌ Risk of **overfitting** if training data lacks diversity.|
|✅ Optimizes performance based on past data.|❌ Requires a **large labeled dataset**, which can be expensive to obtain.|
|✅ Solves real-world problems like **spam detection, fraud detection, and medical diagnosis**.|❌ **Big data classification** is challenging and needs high computational resources.|
|✅ Can handle both **classification** (spam detection) and **regression** (price prediction) problems.|❌ **Training time is high**, especially for complex models.|


---
### Unsupervised Learning

- <mark style="background: #FFB8EBA6;">The model **finds patterns in data without labeled answers**. Unlike supervised learning, it doesn’t have predefined outputs—it just explores and organizes the data.
</mark>
-  model to work on its own to discover patterns and information that was previously undetected 
-  <mark style="background: #FFB8EBA6;">Here the task of the machine is to group the unsorted information according to similarities, patterns, and differences without any prior training of data</mark>. 


eg scenario:
-  Suppose it is given an image having both cats and dogs which have not seen ever.

-  This machine has no idea about the features of dogs and cats so we can't categorize it in cats and dogs. 
-  But it can categorize them according to their similarities, pattern and differences 
-  We can easily categorize the above picture into two parts. 
-  The first part may contain all pics having DOGS in it and the second part may contain all pics having CATS in it. 
-  Here you didn't learn anything before means no training data or examples.

---
### Clustering

#### **Clustering (Simple Explanation)**

Clustering is the <mark style="background: #FFB8EBA6;">task of **grouping similar data points** together</mark> so that:  
✅ <mark style="background: #FFB8EBA6;">**Objects in the same group (cluster) are more similar** to each other.</mark>  
❌ **Objects in different groups are dissimilar** from each other.

#### **Key Idea:**

<mark style="background: #FFB8EBA6;">It helps discover **hidden patterns** in data without predefined labels</mark>.

#### **Example:**

Imagine sorting **different types of flowers** 🌸🌻🌼 based on their petal shape, color, and size—**without knowing their names**. The algorithm automatically groups similar flowers together.

---
### Association 
#### **Association Rule Learning (Simple Explanation)**

Association Rule Learning is a **rule-based machine learning method** used to find **interesting relationships between variables** in large datasets.

#### **Key Idea:**

It helps uncover **patterns or rules** like:  
🔹 **"If X happens, then Y is likely to happen."**

#### **Example:**

- **Shopping Behavior:**  
    🥖 **If a customer buys bread and milk**, then they are likely to buy **cheese** too.  
    📱 **If a customer buys a mobile phone**, they might also buy a **phone case**.

---

![[Unit 1Machine Learning 4.webp]]

[[Unit 1_Machine Learning.pdf#page=46&rect=82,48,856,487|Unit 1Machine Learning, p.46]]

---
### Pros & Cons

### Applications : Unsupervised Learning

-  **Bioinformatics**: sequence analysis & genetic clustering 
-  **Data mining** : sequence & pattern mining 
-  **Medical imaging** : image segmentation

### Semi-supervised Learning

-  Semi-supervised machine learning is a <mark style="background: #FFB8EBA6;">combination of supervised and unsupervised machine learning methods</mark>. 
-  In semi-supervised learning, an algorithm learns from a ==dataset  includes both labeled and unlabeled data, ==usually mostly unlabeled. 
-  When you don’t have enough labeled data to produce an accurate model and you don’t have the ability or resources to get more data, you can use semi-supervised techniques to increase the size of your training data 
-  <mark style="background: #FFB8EBA6;">First the programmer will cluster similar data using an unsupervised learning algorithm and then use the existing labeled data to label the rest of the unlabeled data.</mark>

### What is semi-supervised clustering?

 - Cluster analysis is a <mark style="background: #FFB8EBA6;">method that seeks to partition a dataset into homogenous subgroups, meaning grouping similar data together with the data in each group being different from the other groups</mark> . 
 -  Clustering is conventionally done using ==unsupervised== methods. 
 -  Since the goal is to identify similarities and differences between data points, it doesn’t require any given information about the relationships within the data. 
 -  However, there are situations where some of the cluster labels, outcome variables, or information about relationships within the data are known. 
 -  This is where semi-supervised clustering comes in. 
 -  ==Semi supervised clustering uses some known cluster information in order to classify other unlabeled data, meaning it uses both labeled and unlabeled data==

## Pseudo Labeling

-  Pseudo Labeling is a simple and an efficient method to do semi-supervised learning. 
-  It can combine almost all neural network models and training methods (Pseudo-Label). 
-  Here is an example of the steps to follow if you want to learn from your unlabeled data too: 
-  Take the same model that you used with your training set and that gave you good results. 
-  Use it now with your unlabeled test set to predict the outputs ( or pseudo-labels). 
-  We don’t know if these predictions are correct, but we do now have quite accurate labels and that’s what we aim in this step. 
-  Concatenate the training labels with the test set pseudo labels. 
-  Concatenate the features of the training set with the features of the test set. 
-  Finally, train the model in the same way you did before with the training set. 
-  This method will make the error decreases and it will improve the model by better learning the general structure.


Pseudo-labeling is a great technique for leveraging unlabeled data to improve model performance. It essentially turns a supervised learning problem into a semi-supervised one by using the model’s own predictions on unlabeled data as additional training data.

A few key points to consider when applying pseudo-labeling:

1. **Confidence Thresholding**: Instead of using all pseudo-labels, consider selecting only high-confidence predictions to reduce noise.
2. **Iterative Refinement**: You can repeat the process multiple times, updating pseudo-labels with a progressively better model.
3. **Balance Between Real and Pseudo Data**: Weighting pseudo-labeled data appropriately prevents bias towards incorrect labels.
4. **Application in Various Domains**: It’s widely used in NLP, computer vision, and other deep learning applications.

### Pseudo Labeling 

-  But, how can I know the proportion of true labels and pseudo-labels in each batch? 
-  In other words, how much do I make it a mix of training vs pseudo? -  The general rule of thumb is to have 1/4–1/3 of your batches be pseudo-labeled.



![[Unit 1Machine Learning 5.webp]]

[[Unit 1_Machine Learning.pdf#page=54&rect=43,21,813,527|Unit 1Machine Learning, p.54]]