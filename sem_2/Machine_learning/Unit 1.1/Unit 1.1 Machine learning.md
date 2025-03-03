## Life cycle of Machine Learning

### 1. Collect the Data

- Depending upon the type of model, find proprietary data, accessing public data or a mixture of both 

- Data is a fundamental part of machine learning, the ==quality== and ==quantity== of your data can have direct consequences for model performance.

![[Pasted image 20250226130909.png]]

Data collection 

Gather Data 
• Different sources such as db, txt files, pic, sound files, or web scraping may be used for data collection 
• make sure that the gathering the right data from the right source.

Integrate Data 

• This next step is to integrate the data that you’ve gathered with your workflow and, ultimately, your machine learning model. 

• ==This may mean importing the data into your proprietary database== or using APIs to set up an automated feed of data from third-party sources.

### 2.Preparing the Data



• Pre-processing of data is a key step in the process of machine learning. It involves deleting duplicate data, fixing errors, managing missing data either by eliminating or filling it in, and adjusting and formatting the data. 
• There are four steps


**Data Exploration** 
• This is also where you’ll identify the approach that you’ll take during the next two steps to make sure that you have everything ready for the algorithm. 

**Data Pre-Processing** 

• Pre-processing involves cleaning up any formatting that might be in place and stripping out blank entries and other anomalous elements within the data. 
• We’re talking about actions that you can carry out across the whole dataset to make it ready for further processing rather than focusing on any individual entries. 

**Data Wrangling** 
• Data wrangling requires you to manually go through the data that you have and to update any of them that need updating for your company to be able to process it. 
• This is also where you’ll carry out any changes to the data that are needed to make it readable and easy to process for the model that you build. 

**Analyse Data** 
• By now, your data should be in pretty good shape, so the next step is for you to take a closer look at the data that you have and analyze it to determine how you’re going to go about processing it and building your model.

### 3.Choose the Model

• The next step is to select a machine learning model; once data is prepared then we apply it to ML Models like Linear regression, decision trees, and Neural Networks that may be selected to implement. 
• The selection of the model generally depends on what kind of data you're dealing with and your problem. 
• The size and type of data, complexity, and computational resources should be taken into account when choosing a model to apply


### 4.Train the Model

• The next step is to train it with the data that has been prepared after you have chosen a model. 

• Training is about connecting the data to the model and enabling it to adjust its parameters to predict output more accurately. 

• Overfitting and underfitting must be avoided during the training.

### Overfitting and underfitting

**Overfitting** 

• Overfitting happens when a model is too complex and learns not just the actual patterns in the training data, but also the noise (random mistakes or details that don’t matter). 
• model does great on the training data but performs poorly on new, unseen data because it's too specific to the training data. 
• Example: Imagine you're trying to predict house prices based on features like size and number of rooms. If you use a very complex model (like a deep decision tree), it might fit the training data perfectly, even capturing random noise. But it won't do well on new data because it’s "too attached" to the original data. 

**Underfitting** 

• Underfitting happens when a model is too simple and can't capture important patterns in the data. 
• The model doesn't perform well on either the training data or new data because it's not learning enough from the data. 
• Example: If you use a simple linear model to predict house prices based only on the number of rooms, it might not capture other important factors (like location or size), and so it doesn't work well.

### 5.Model Parameter Tuning


• what changes you need to make to your model to fine-tune it and ensure that it does a better job of taking you toward your goals. 

• You can repeat steps five and six over and over again, one after the other, until you’re ready to move on to the seventh and final step.

### 6.Model Evaluation and Testing

• It is important to assess the model's performance before deployment as soon as a model has been trained. 

• This means that the model has to be tested on new data that was not seen during training.

### 7.Prediction and Evaluation

• This is done by adding new data to the model and using its output for decision-making or other analysis 

• deployment of this model involves its integration into a production environment where it is capable of processing real-world data and providing timely information.

## Features of ML

	