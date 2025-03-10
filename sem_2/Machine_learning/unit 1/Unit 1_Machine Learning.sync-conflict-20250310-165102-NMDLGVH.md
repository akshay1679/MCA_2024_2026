
<mark style="background: #FFB86CA6;">Machine Learning (ML)</mark> is a subset of artificial intelligence (AI) that<mark style="background: #FFB8EBA6;"> enables computers to learn from data and make decisions or predictions without being explicitly programmed</mark>. ML algorithms identify patterns and improve their performance over time as they process more data.
eg: Video recommendations in YouTube, Netflix, Image recognition, face prediction in Facebook


![[Pasted image 20250225195949.png]]

### Training phase / Learning phase

1. creates ml algo
2. teaches machine logic
3. Provides a ==training set== to the machine

Inference phase -  Process of running live data points into a machine learning algorithm to calculate an output such as a single numerical score
### Inference phase

Process of using a machine learning algorithm to make a prediction.

![[Unit 1Machine Learning.webp]]

[[Unit 1_Machine Learning.pdf#page=9&rect=90,174,890,298|Unit 1Machine Learning, p.9]]

### Machine learning Cycle

1. Data ==collection== 
2. Data ==preparation== 
3. ==Choose== a model
4. ==Train== the model 
5. Evaluate/==test== the model 
6. Parameter ==tuning== 
7. Make ==predictions

### What is data and why?

1. Can be any ==unprocessed fact, value, text, sound or picture== that is not being interpreted or analyzed

2. <mark style="background: #FFB8EBA6;">Most important part of data analytics</mark>, ml and ai

3. ==Quality data== is necessary for ML models to operate efficiently


### Datasets in Machine learning

exceldraw

### 3 types of dataset

<mark style="background: #FFB86CA6;">**Training dataset**</mark> : dataset of examples used during the learning process and used ==to fit the parameters==

<mark style="background: #FFB86CA6;">**Validate dataset**: </mark>dataset of examples *==used to tune the hyper parameters==*  (i.e. the architecture) of a classifier. 

<mark style="background: #FFB86CA6;">**Testing dataset** </mark>: dataset used to provide an unbiased evaluation of a final model fit on the training dataset


train-test-validation split ratio is  specific to  use case

![[Unit 1Machine Learning 1.webp]]

[[Unit 1_Machine Learning.pdf#page=18&rect=68,24,855,480|Unit 1Machine Learning, p.18]]

### Supervised Learning


-  <mark style="background: #FFB8EBA6;">It is the ml task of learning a function that maps an input to output based on example input-output pairs </mark>
![[Unit 1Machine Learning 1.webp]]-  to train the machine we use data which is  “<mark style="background: #FFB8EBA6;">labeled</mark>” 
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

### Classification vs Regression

-  **Classification** : 
==-  Classification is the task of predicting a discrete class label ==
-  In classification problem, data is labeled into 1 or more classes

**Regression**: 
==-  Regression is the task of predicting a continuous quantity ==
-  A regression problem requires the prediction of a quantity

### Classification 

-  <mark style="background: #FFB8EBA6;">Classification is the task of predicting a discrete class label</mark> 
-  In classification problem, <mark style="background: #FFB8EBA6;">data is labeled into 1 or more classes</mark>
-  Predicts the data into built in labels 
-  2 types of classification methods: <mark style="background: #BBFABBA6;">*binary and multi class*</mark>
-  Binary classification : predicts data into *2 category*
-  Ex: Whether student is pass or fail, email is spam or not, given fruit is apple or not 
-  Multi class classification : predicts the data to *more than 2 classes* 
-  Ex: ==Categorizing emails== to personal, official, spam


[[sem_2/Deep_learning/module1/Introduction/machine learning]]
 
### Regression   
 -  Regression is a subfield of supervised learning 
 -  Aims to model the relationship between a certain number of features and a continuous target variable 
eg:
 -  Predicting prices of a house given the features of house like size, price etc is one of the common examples of Regression 
 -  Predicting temperature of a region also comes under regression

![[Unit 1Machine Learning 2.webp]]

[[Unit 1_Machine Learning.pdf#page=35&rect=67,56,785,482|Unit 1Machine Learning, p.35]]

### Unsupervised Learning

-  ==Unsupervised learning is a type of machine learning that looks for previously undetected patterns in a data set with no pre-existing labels and with a minimum of human supervision ==
-  model to work on its own to discover patterns and information that was previously undetected 
-  Here the task of the machine is to group the unsorted information according to ==similarities, patterns, and differences without any prior training of data==. 


eg scenario:
-  Suppose it is given an image having both cats and dogs which have not seen ever.

-  This machine has no idea about the features of dogs and cats so we can't categorize it in cats and dogs. 
-  But it can categorize them according to their similarities, pattern and differences 
-  We can easily categorize the above picture into two parts. 
-  The first part may contain all pics having DOGS in it and the second part may contain all pics having CATS in it. 
-  Here you didn't learn anything before means no training data or examples.


### Clustering

- Clustering: is the ==task of dividing the population or data points into a number of groups==  such that data points in the same groups are more similar to other data points in the same group and dissimilar to the data points in other groups. 
-  It is basically a collection of objects on the basis of similarity and dissimilarity between them.

### Association 
- **Association rule learning** is a ==rule-based machine learning method for discovering interesting relations between variables in large databases. ==
- It is intended to identify strong rules discovered in databases using some measures of interestingness 
- Ex: if a customer buys the bread and milk then he will buy the cheese. If a customer buys a mobile phone then he will buy a back case also.

![[Unit 1Machine Learning 4.webp]]

[[Unit 1_Machine Learning.pdf#page=46&rect=82,48,856,487|Unit 1Machine Learning, p.46]]


### Pros & Cons

### Applications : Unsupervised Learning

-  **Bioinformatics**: sequence analysis & genetic clustering 
-  **Data mining** : sequence & pattern mining 
-  **Medical imaging** : image segmentation

### Semi-supervised Learning

-  Semi-supervised machine learning is a combination of supervised and unsupervised machine learning methods. 
-  In semi-supervised learning, an algorithm learns from a ==dataset  includes both labeled and unlabeled data, ==usually mostly unlabeled. 
-  When you don’t have enough labeled data to produce an accurate model and you don’t have the ability or resources to get more data, you can use semi-supervised techniques to increase the size of your training data 
-  ==First the programmer will cluster similar data using an unsupervised learning algorithm and then use the existing labeled data to label the rest of the unlabeled data.==

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