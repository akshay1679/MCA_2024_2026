<mark style="background: #FFB8EBA6;">collection --> preparation --> model --> train --> tune --> test --> preciction</mark>

# C  -> gi

# P

# M
# T

# T
# T
# P




## Life cycle of Machine Learning

### 1. Collect the Data

- Depending upon the type of model, find proprietary data, accessing public data or a mixture of both 

- Data is a fundamental part of machine learning, <mark style="background: #FFB8EBA6;">the quality and quantity of your data can have direct consequences for model performance</mark>.

![[Pasted image 20250226130909.png]]

---
### **Steps in Data Collection**

1. **Gather Data**
    
    - <mark style="background: #FFB8EBA6;">Find the right data from diff sources</mark> like databases, text files, images, audio files, or even web scraping.
    - <mark style="background: #FFB8EBA6;">Make sure we are collecting relevant and accurate data </mark> for your model.
    
2. **Integrate Data**
    
    - Once we have the data, <mark style="background: #FFB8EBA6;">we need to bring it into our system or workflow</mark>.
    - This could means <mark style="background: #FFB8EBA6;">storing it in a database or</mark> setting up an automated system to collect new data regularly using <mark style="background: #FFB8EBA6;">APIs</mark>.

<mark style="background: #FFB8EBA6;">This step ensures that you have the right information in the right format before you start training your machine learning model</mark>.

---
### **Step 2: Pre-processing the Data**

Once you have collected the data, the next step is to clean and organize it so your machine learning model can understand it. This process is called **data pre-processing** and involves four main steps:

### **1. Data Exploration**

- This is like <mark style="background: #FFB8EBA6;">taking a first look at your data to understand what’s inside</mark>.
- You check if :
	 1. anything is <mark style="background: #FFB8EBA6;">missing</mark>, 
	 2. there are <mark style="background: #FFB8EBA6;">errors</mark>, 
	 3. <mark style="background: #FFB8EBA6;">right format </mark>.
	 
- <mark style="background: #FFB8EBA6;"> It helps you decide how to clean and prepare the data for your model.</mark>

### **2. Data Pre-Processing** (data cleaning)

- <mark style="background: #FFB8EBA6;">clean the data</mark> by removing unnecessary details like 
	 1. blank spaces, 
	 2. duplicate entries, or 
	 3. formatting issues.
	
- <mark style="background: #FFB8EBA6;"> The goal is to make the data consistent and easy to use.</mark>

### **3. Data Wrangling**(manually correct errors)

- This step is about fixing specific problems in the dataset.
- You <mark style="background: #FFB8EBA6;">manually correct errors, update missing values, and structure the data so that your machine learning model can process it properly</mark>.

### **4. Analyze Data**

- <mark style="background: #FFB8EBA6;">analyze data to understand patterns, relationships, and important features.</mark>
- This helps you decide how to train your machine learning model effectively.

In simple terms, pre-processing is like preparing ingredients before cooking. You clean, cut, and organize everything so that the final dish (your machine learning model) turns out great!

---
### **Step 3: Choose the Model**

Now that your data is clean and ready, the next step is to pick the right **machine learning model** to analyze it.

### **How to Choose a Model?**

- Different models work best for different types of problems.
- For example, <mark style="background: #FFB8EBA6;">if you're predicting prices based on past data, **Linear Regression** </mark> might work well.
- If you're <mark style="background: #FFB8EBA6;">classifying</mark> emails as <mark style="background: #FFB8EBA6;">spam or not spam, **Decision Trees** </mark>could be a good choice.
- If you're working with complex patterns like image recognition, **Neural Networks** might be the best option.

### **Factors to Consider:**

1. <mark style="background: #FFB8EBA6;">**Type of Data**</mark> – Structured (tables, spreadsheets) or unstructured (images, text, audio).
2. <mark style="background: #FFB8EBA6;"> **Problem Type**</mark> – Prediction, classification, clustering, etc.
3. <mark style="background: #FFB8EBA6;">**Complexity** </mark>– Some models are simple and fast, while others need more processing power.
4.  – If you have limited computing power, you might choose a lightweight model instead of a deep learning model.

In simple terms, choosing a model is like picking the right tool for a job—just like using a hammer for nails and a screwdriver for screws! 🛠️

---
### 4.Train the Model

• The next step is to train it with the data that has been prepared after you have chosen a model. 

• <mark style="background: #FFB8EBA6;">Training is about connecting the data to the model and enabling it to adjust its parameters to predict output more accurately</mark>. 

• <mark style="background: #FFB8EBA6;">Overfitting and underfitting must be avoided during the training</mark>.

### Overfitting and underfitting

**Overfitting** 

• <mark style="background: #FFB8EBA6;">Overfitting happens when a model is too complex and learns not just the actual patterns in the training data, but also the noise</mark> (random mistakes or details that don’t matter). 
• model does great on the training data but performs poorly on new, unseen data because it's too specific to the training data. 

• Example: Imagine you're trying to predict house prices based on features like size and number of rooms. If you use a very complex model (like a deep decision tree), it might fit the training data perfectly, even capturing random noise. But it won't do well on new data because it’s "too attached" to the original data. 

**Underfitting** 

• <mark style="background: #FFB8EBA6;">Underfitting happens when a model is too simple and can't capture important patterns in the data.</mark> 
• <mark style="background: #FFB8EBA6;">The model doesn't perform well on either the training data or new data because it's not learning enough from the data</mark>. 

• Example: If you use a simple linear model to predict house prices based only on the number of rooms, it might not capture other important factors (like location or size), and so it doesn't work well.

---
### 5.Model Parameter Tuning


• <mark style="background: #FFB8EBA6;">what changes you need to make to your model to fine-tune it and ensure that it does a better job of taking you toward your goals</mark>. 

• You can repeat steps five and six over and over again, one after the other, until you’re ready to move on to the seventh and final step.

### 6.Model Evaluation and Testing

• It is important to assess the model's performance before deployment as soon as a model has been trained. 

• <mark style="background: #FFB8EBA6;">This means that the model has to be tested on new data that was not seen during training</mark>.

### 7.Prediction and Evaluation

• <mark style="background: #FFB8EBA6;">This is done by adding new data to the model and using its output for decision-making or other analysis</mark> 

• deployment of this model involves its integration into a production environment where it is capable of processing real-world data and providing timely information.

## Features of ML

It looks like you've listed key features, relevance, and challenges of machine learning. Here’s a refined version with better organization and clarity:

---

### **Features of Machine Learning**

1. **<mark style="background: #FFB8EBA6;">Pattern Detection</mark>:** Uses data to detect patterns in a given dataset.
2. **<mark style="background: #FFB8EBA6;">Learning from Data:</mark>** Improves automatically by learning from past data.
3. **<mark style="background: #FFB8EBA6;">Data-Driven Approach</mark>:** Operates based on data rather than explicit programming.
4. **Similarity to Data Mining:** <mark style="background: #FFB8EBA6;">Deals with large amounts of data</mark> to extract insights.

### **Relevance of Machine Learning**

1. **Data Growth:** The rapid increase in data production necessitates automated analysis.
2. **Complex Problem Solving:** Helps tackle problems that are difficult for humans.
3. **Decision Making:** Aids various sectors, including finance, healthcare, and marketing.
4. **Pattern Recognition:** Finds hidden patterns and extracts useful insights from data.

### **Challenges of Machine Learning**

1. **Data Quality Issues:**
    - <mark style="background: #FFB8EBA6;">ncomplete, noisy, or unbalanced</mark> data affects model performance.
2. **Overfitting & Underfitting:**
    - <mark style="background: #FFB8EBA6;">Overfitting</mark>: Model memorizes training data, failing on new data.
    - <mark style="background: #FFB8EBA6;">Underfitting</mark>: Model is too simple to capture meaningful patterns.
3. **Interpretability:**
    - <mark style="background: #FFB8EBA6;">Some models (e.g., deep learning) act as "black boxes," </mark>making decisions hard to explain. ie: it's hard to understand how they make decisions.
4. **<mark style="background: #FFB8EBA6;">Bias & Fairness:</mark>**
    - Models can inherit biases from training data, leading to unfair outcomes.

---
# Relevance of Tools in Machine Learning (ML)

### **Data Collection & Preprocessing**

#### **Why They Matter?**

- ==Poor data quality leads to inaccurate predictions==, impacting model accuracy.
- ==Cleaning, transforming, and labeling data can be time-consuming==.
- Efficient preprocessing ==reduces model training time.==
- Big data tools help handle large-scale ML tasks.

#### **Tools:**

- **==Pandas== & ==NumPy==** – Data manipulation and preprocessing.
- **==Dask== & Spark** – Processing large-scale datasets in parallel.
- **==OpenCV==** – Image and video data preprocessing.
- **==Hadoop== & Google BigQuery** – Distributed data storage and query processing.

### 2. Exploratory Data Analysis (EDA) & Visualization

### **Why It's Important?**

- Helps<mark style="background: #FFB8EBA6;"> understand patterns, correlations, and data distribution</mark>.
- <mark style="background: #FFB8EBA6;">Identifies missing values and outliers</mark>.

### **Relevant Tools:**

- **==Matplotlib== & Seaborn** – Data visualization.
- **Plotly & Bokeh** – Interactive visualizations.
- ==**Pandas Profiling**== – Automated data exploration reports.

### 3. **Model Development & Training**

#### **Why It's Important?**

- Choosing the right model and training efficiently is crucial for performance.
- Hyperparameter tuning improves accuracy.

#### **Relevant Tools:**

- **Scikit-learn** – Traditional ML models (SVM, Random Forest, etc.).
- **TensorFlow & PyTorch** – Deep learning frameworks for neural networks.
- **XGBoost & LightGBM** – Gradient boosting algorithms for structured data.
- **Optuna & Hyperopt** – Automated hyperparameter tuning.


### 4. **Model Evaluation & Validation**

#### **Why It's Important?**

- Ensures the model generalizes well to new data.
- Prevents overfitting and underfitting.

#### **Relevant Tools:**

- **Scikit-learn Metrics** – Accuracy, precision, recall, F1-score.
- **MLflow** – Model tracking and logging.
- **Cross-validation tools (Stratified K-Fold, LOOCV, etc.)** – Improve reliability.


### 5. **Model Deployment & Serving**

#### **Why It's Important?**

- A model must be efficiently deployed to real-world applications.
- Deployment tools enable integration with APIs and mobile/web applications.

#### **Relevant Tools:**

- **Flask & FastAPI** – Lightweight API development for model serving.
- **TensorFlow Serving & TorchServe** – Scalable deep learning model deployment.
- **Docker & Kubernetes** – Containerization and orchestration.
- **AWS SageMaker, Google AI Platform, Azure ML** – Cloud-based deployment.

### 6. **Model Monitoring & Maintenance**

#### **Why It's Important?**

- Model performance can degrade due to data drift or changing patterns.
- Continuous monitoring helps detect anomalies.

#### **Relevant Tools:**

- **Prometheus & Grafana** – Real-time model monitoring.
- **Evidently AI** – Detects model drift and performance changes.
- **Kubeflow & MLflow** – Model tracking and lifecycle management.

### 7. **AutoML (Automated Machine Learning)**

#### **Why It's Important?**

- Speeds up ML model development by automating feature selection, tuning, and training.
- Helps non-experts build ML models.

#### **Relevant Tools:**

- **Google AutoML & AutoKeras** – Deep learning automation.
- **H2O.ai & TPOT** – Automated ML pipeline creation.
---
## <mark style="background: #BBFABBA6;">## Concept Representation in Machine Learning</mark>

Diamentionality reduction -> normalisation 


Below are key aspects of concept representation in ML:
1. Feature based Representation 
2. Distributed Representation 
3. Symbolic Representation 
4. Probabilistic Representation


### <mark style="background: #FF5582A6;">1.Feature-Based Representation (Vector Space Representation)</mark>


Data is represented <mark style="background: #FFB8EBA6;">as feature vectors</mark>, <mark style="background: #FFB8EBA6;">where each dimension corresponds to a specific attribute.</mark>
eg:  For a fruit classification problem, a feature vector for an apple could be: 

![[Unit 1.1 Machine learning 4.webp]]

[[Unit 1.1 Machine learning.pdf#page=29&rect=118,81,756,155|Unit 1.1 Machine learning, p.29]]

![[Unit 1.1 Machine learning 5.webp]]

[[Unit 1.1 Machine learning.pdf#page=30&rect=64,99,875,474|Unit 1.1 Machine learning, p.30]]

![[Unit 1.1 Machine learning 6.webp]]

[[Unit 1.1 Machine learning.pdf#page=31&rect=40,64,875,502|Unit 1.1 Machine learning, p.31]]

### <mark style="background: #FF5582A6;">2.Distributed Representation (Embeddings)</mark>

 Each concept is represented as a ==continuous vector in a high-dimensional space==.
used in ==NLP== and ==img recognition==.

![[Unit 1.1 Machine learning 7.webp]]

[[Unit 1.1 Machine learning.pdf#page=33&rect=36,25,920,519|Unit 1.1 Machine learning, p.33]]

### <mark style="background: #FF5582A6;">3. Symbolic Representation (Logic-Based & Rule-Based Systems)</mark>

•Concepts are defined ==using rules and symbolic logic==. 
•Used in Expert Systems and Knowledge Graphs. 

Example: IF color = red AND shape = round THEN classify as apple.

### <mark style="background: #FF5582A6;">4.Probabilistic Representation</mark>

• Represents uncertainty in concepts using probabilities. 
• Used in models like Bayesian Networks and Gaussian Mixture Models. Example: 
• Probability of a patient having a disease given certain symptoms: 

P(Disease∣Symptoms)=P(Symptoms∣Disease)P(Disease)/P(Symptoms)



---

### **<mark style="background: #FF5582A6;">Challenges in Concept Representation</mark>**

1. **Feature Selection**  
    Choosing the right features is critical for the performance of any model. Irrelevant or redundant features can reduce accuracy and increase computational complexity.
    
2. **Dimensionality Reduction**  
    High-dimensional data can lead to overfitting and inefficiencies. Proper dimensionality reduction techniques (like PCA or autoencoders) are necessary to maintain performance without losing valuable information.
    
3. **Explainability**  
    Deep learning-based representations are often considered "black boxes" and can be difficult to interpret, making it hard to understand how decisions are made.
    
4. **Concept Drift**  
    Over time, the underlying data distribution may change (concept drift), causing the learned representations to become outdated and less effective.
    


---------------------------------------------
----------------------------------

# Classification Errors in Machine Learning

 metrics like 
1. [ ] Accuracy 
2. [ ] Confusion Matrix 
3. [ ] Precision 
4. [ ] Recall or Sensitivity 
5. [ ] F -Score / F 1 Measure 
6. [ ] AUC(Area Under the Curve)-ROC

---
## **Types of Classification Outcomes**

#### **A. False Positive (FP) – Type I Error**

- The model **incorrectly predicts the positive class**, while the **actual class is negative**.
    
- **Example:** A medical test incorrectly diagnoses a healthy person as having a disease.
    

#### **B. False Negative (FN) – Type II Error**

- The model **incorrectly predicts the negative class**, while the **actual class is positive**.
    
- **Example:** A spam filter fails to detect a spam email, allowing it into the inbox.
    

#### **C. True Positive (TP) – Correct Prediction**

- The model **correctly predicts** a **positive instance**.
    
- **Example:** A COVID test correctly identifies an infected person.
    

#### **D. True Negative (TN) – Correct Prediction**

- The model **correctly predicts** a **negative instance**.
    
- **Example:** A fraud detection system correctly identifies a legitimate transaction.
    

---

## <mark style="background: #FF5582A6;">Accuracy</mark>

![[Unit 1.1 Machine learning.webp]]

[[Unit 1.1 Machine learning.pdf#page=40&rect=80,181,855,272|Unit 1.1 Machine learning, p.40]]

The number of correct predictions to the total number of predictions.

## <mark style="background: #FF5582A6;">Confusion Matrix</mark>

tabular representation of prediction outcomes of any binary classifier, which is used to d<mark style="background: #FFB8EBA6;">escribe the performance of the classification model on a set of test data when true values are known</mark>.+

![[Unit 1.1 Machine learning 1.webp]]

[[Unit 1.1 Machine learning.pdf#page=42&rect=184,60,689,489|Unit 1.1 Machine learning, p.42]]

describe with example

## <mark style="background: #FF5582A6;">Precision (Positive Predictive Value)</mark>

proportion of positive prediction that was actually correct.

<mark style="background: #FFB8EBA6;">Precision=TP/TP+FP</mark>

 High precision means fewer false positives.

## <mark style="background: #FF5582A6;">Recall (Sensitivity, True Positive Rate)</mark>

High recall means fewer false negatives.
 actual positive that was identified incorrectly

<mark style="background: #FFB8EBA6;">recall = TP/TP+FN</mark>

## <mark style="background: #FF5582A6;">F-Scores</mark>

![[Unit 1.1 Machine learning 2.webp]]

[[Unit 1.1 Machine learning.pdf#page=47&rect=218,104,714,203|Unit 1.1 Machine learning, p.47]]


## <mark style="background: #FF5582A6;">AUC-ROC</mark>



## <mark style="background: #FF5582A6;">ROC</mark>

![[Unit 1.1 Machine learning 3.webp]]

[[Unit 1.1 Machine learning.pdf#page=49&rect=295,85,546,173|Unit 1.1 Machine learning, p.49]]