
The document is about **Machine Learning (ML)** and covers two key topics: **Validation in ML** and **Dimensionality Reduction**. Here's a simplified explanation:

---

### **<mark style="background: #BBFABBA6;">Validation in Machine Learning</mark>**

check if a  <mark style="background: #FFB8EBA6;">model performs well on unseen data</mark>. 
helps in<mark style="background: #FFB8EBA6;"> model generelisation</mark> to new input and <mark style="background: #FFB8EBA6;">avoid overfitting or underfitting</mark>.

#### **Types of Validation Techniques**

1. **Holdout Validation** – Split data into training (70%), validation(15%), and test sets(15%).
2. **k-Fold Cross-Validation** – Divide data into k parts, train on (k-1) parts, and test on the remaining.
![[Unit 1.2 Machine learning.webp]]

[[Unit 1.2 Machine learning.pdf#page=5&rect=67,61,429,190|Unit 1.2 Machine learning, p.5]]
1. **Stratified k-Fold Cross-Validation** – Ensures balanced class distribution in each fold.
![[Unit 1.2 Machine learning 1.webp]]

[[Unit 1.2 Machine learning.pdf#page=7&rect=50,13,909,416|Unit 1.2 Machine learning, p.7]]

1. **Leave-One-Out Cross-Validation (LOO-CV)** – Each data point is tested one by one; very slow for big datasets.
2. **Time Series Validation** – Used for time-based data (e.g., stock prices), training on past data only.
![[Unit 1.2 Machine learning 2.webp]]

[[Unit 1.2 Machine learning.pdf#page=10&rect=81,133,488,287|Unit 1.2 Machine learning, p.10]]
Common Issues:

- **Data Leakage** – Using future/test data during training.
- **Imbalanced Data** – Some categories may have more samples than others.
- **Improper Splitting** – The validation set must represent real-world data.

---

### **Dimensionality Reduction**

This reduces the number of features in a dataset while keeping important information. It improves **speed, reduces overfitting, and helps with visualization**.

#### **Methods**

1. **Feature Selection** – Choosing the best features.
    
    - _Filter Methods_: Rank features based on correlation, chi-square test, etc.
    - _Wrapper Methods_: Use algorithms like Recursive Feature Elimination (RFE).
    - _Embedded Methods_: Built-in feature selection (Lasso Regression, Decision Trees).
2. **Feature Extraction** – Creating new features from existing data.
    
    - **Principal Component Analysis (PCA)** – Converts data into new, uncorrelated components.
    - **Linear Discriminant Analysis (LDA)** – Like PCA but focuses on class separation.
    - **t-SNE** – Helps visualize data in 2D/3D.
    - **Autoencoders** – Neural networks that compress and reconstruct data.

#### **Data Compression in ML**

- **Lossless Compression** – No information loss (e.g., Huffman coding, LZW).
- **Lossy Compression** – Removes less important details (e.g., JPEG for images, MP3 for audio).

---

### **Key Takeaways**

- Validation prevents overfitting and helps tune ML models.
- Dimensionality reduction speeds up processing and removes redundant data.
- PCA is a popular technique for reducing dimensions while retaining information.
- Autoencoders use neural networks for feature compression.

Would you like a summary of a specific section in more detail?


---

Leave-One-Out Cross-Validation (LOO-



---

## <mark style="background: #FF5582A6;">Principal Component Analysis (PCA)</mark>



### 👩‍🔬 The Setup:

Imagine we have data on 5 people:

|Person|Height (cm)|Weight (kg)|
|---|---|---|
|A|160|55|
|B|165|60|
|C|170|65|
|D|175|70|
|E|180|75|

---

### 🤔 What's the Problem?

- Height and weight are **related** — as height increases, weight usually increases too.
    
- If we try to analyze this data, we’re kind of looking at the same information twice.
    
- Can we **combine them** into a **single value** that still tells us about the person?
    

---

### 🔄 Enter PCA:

1. **Plot the data** on a graph with height on one axis and weight on the other.  
    You'll see the points form a **diagonal line** — taller people tend to weigh more.
    
2. **PCA finds a new line** (a principal component) that runs along this diagonal direction.
    
3. This new line becomes our **new X-axis** (PC1). It captures the most variation — how people differ in overall body size.
    
4. Each person now gets a **single score** on this new line, combining height and weight.
    

---

### 🎯 Why This Helps:

- Instead of using both height and weight in analysis, we can use **just PC1**.
    
- It simplifies the data without losing much meaning.
    
- And it removes the overlap (correlation) between height and weight.
    

---

### 🧪 Result:

|Person|PC1 Score (simplified)|
|---|---|
|A|Low (short + light)|
|B|Medium-low|
|C|Medium|
|D|Medium-high|
|E|High (tall + heavy)|

Now you can use this **PC1 score** in your analysis — it’s a smart combination of height and weight.

---
---

### 🧠 What is PCA?

PCA is a way to **simplify data** by turning it into a smaller set of new variables that still contain most of the important information.

---

### 📦 Imagine This:

You have a messy box of colored pencils lying in all directions. PCA helps you:

1. **Rotate the box** to find the direction where the pencils spread out the most.
    
2. **Draw a new straight line (axis)** in that direction — this is your **first principal component**.
    
3. Now, you can describe each pencil using **just how far it is along that line**, instead of using its original X and Y positions.
    

---

### 🔍 Why Do This?

- It helps to **reduce the number of variables** in your data.
    
- Makes it easier to **see patterns** or use in **machine learning**.
    
- It removes overlap between variables (like if height and weight are kind of telling the same story).
    

---

### ⚙️ How PCA Works (Simple Steps)

1. **Standardize the data** – Make sure everything is on the same scale.
    
2. **Find the relationships** between your variables (called a covariance matrix).
    
3. **Figure out the best directions** to describe the data (these are eigenvectors).
    
4. **Pick the top directions** that explain most of the differences in the data (based on eigenvalues).
    
5. **Rotate the data** to line up with those directions.
    

---

### 📉 Example:

Imagine you have data on people’s height and weight:

- Height and weight are usually related.
    
- PCA finds a new "direction" that combines height and weight.
    
- You can now describe each person with **just one number** (instead of two) — their position on this new line.
    

---

### 💡 In Short:

> PCA finds the best new "angle" to look at your data so you can **see the big picture** with fewer variables.

---
# <mark style="background: #FF5582A6;">study all the graphs
</mark>
