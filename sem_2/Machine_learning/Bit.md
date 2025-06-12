

### Model Sel (10 Marks)
process of identi  most suitable algorithm and model archi for a specific task or dataset. It involves comparing multiple modl, evaluating their perf, and selecting the one that best balances Accu and generalization.


---

Key Steps in Model Sel:

1. prblm Formulation:
Define the type of prblm and the expected output.


2. Candi Model Sel:
Choose a set of modl like Decision Trees, SVM etc., appropriate for the task.


3. perf Evaluation:
Use metrics such as Accu, F1-Score, Precision, Recall, MSE, AUC-ROC based on the task.


4. train and Validation:
Train modl on a train set and evaluate using a validation set or cross-validation.


5. Model Comparison:
Compare modl based on perf, complexity, and resource usage.


6. Hyperparameter Tuning:
Optimize model settings using techni like Grid Search, Random Search, or Bayesian Optimization.


7. Final Model Sel:
Choose the best-performing model to deploy on new, unseen data.




---

techni Used:

Train-Test Split , Cross-Validation , Random Search & Bayesian Optimization ,Model Averaging & Ensemble Methods

---

Ensemble techni (Brief):

Bagging: Reduces variance using bootstrapped datasets and majority voting (e.g., Random Forest).

Boosting: Improves Accu by train modl sequentially to correct previous errors.


---

## Evaluation (5 Marks)

assessing the perf of a ml model using appropriate metrics and validation methods. 
helps determine how well the model generalizes to new, unseen data.


---

Common Evaluation Metrics:

==Accu== – Proportion of correct predictions.

==Precision & Recall== – Useful for imbalanced datasets.

==F1-Score== – Harmonic mean of precision and recall.

==Confu Matrix== – Summarizes prediction results.

==ROC Curve & AUC== – Measures the trade-off between true positive and false positive rates.

==Mean Squared Error (MSE)== – For regres tasks.



---

Validation Methods:

==Holdout Validation== – Split into train and test sets (e.g., 80/20).

==K-Fold Cross-Validation== – Data split into k parts for more stable perf.

==Stratified K-Fold== – Maintains class proportions across folds.

==Leave-One-Out (LOOCV)== – Uses one data point as the test set each time.

==Bootstrap Sampling== – Resampling with replacement to estimate model reliability.



---

## Ensemble Methods and Key Types (According to PPT)

What are Ensemble Methods?

 ml techni that combine the predictions of multiple modl to improve Accu, robustness, and overall perf. idea is  a grp of weak modl, when combi properly, can outperform a single strong model.

They are widely used in clasi and regres . Ensemble methods help to reduce bias and variance, which are two main sources of prediction error.


---

Types of Errors Addressed:

Bias: Error from incorrect assumptions.

Variance: Error from sensitivity to small fluctuations in the train set.

Irreducible Error: Noise inherent in the data.



---

Key Types of Ensemble Methods:

1. ==Bagging (Bootstrap Aggregating):==

Trains multiple modl on random samples with replacement.

modl are trained independently.

Final output: Average (for regres) or majority vote (for clasi).

Example: Random Forest.


2. ==Boosting==:

Trains modl sequentially, each correcting the errors of the previous one.

Focuses more on misclassified data points.

Examples: AdaBoost, Gradient Boosting, XGBoost, LightGBM.


3. ==Stacking (Stacked Generalization):==

Uses predictions from multiple base learners as input to a meta-learner.

Base learners can be different modl.

Meta-learner gives the final prediction.


4. ==Voting:==

Combines predictions from different modl.

Hard Voting: Majority class.

Soft Voting: Average of class probabilities.

Works best when base modl are diverse.



---


## Support Vector Machine (SVM)

 SVM is a supervised learning algo used for bothnbothndd regres prblm. However, it is mainly used for clasi tasks. The primary objective of the clasi and regres prblm. However, it is mainly used for clasi tasks. The primary objective of the SVM algorithm is to find the best decision boundary (hyperplane) that separates data points into different classes in an n-dimensional space.

Key Concepts:

Hyperplane: A decision boundary that divides the data into classes.

Support Vectors: The data points that are closest to the hyperplane. These points influence the position and orientation of the hyperplane, and the SVM is named after them.


Example: Suppose we want to classify an animal that looks like both a cat and a dog. If we train the SVM with many images of cats and dogs, the model will form a decision boundary using the most distinguishing examples (support vectors) and classify the new image accurately.

Applications: Face detection, image clasi, text categorization, etc.


---

Types of SVM

1. Linear SVM:

Used for linearly separable data.

The data can be separated into two classes using a single straight line (or hyperplane in higher dimensions).

It is called a Linear SVM classifier.



2. Non-Linear SVM:

Used for non-linearly separable data.

The data cannot be separated with a straight line.

It uses kernel tricks to transform the data into a higher dimension where a linear separator is possible.

It is called a Non-Linear SVM classifier.


---


## Regularization (5 Marks Answer):

Regularization is a technique used in ml to prevent overfitting by adding a penalty term to the loss function. Overfitting occurs when a model learns the train data too well and performs poorly on unseen data. Regularization controls the complexity of the model by discouraging extreme parameter values (large coefficients).

There are two main types of regularization:

1. Ridge regres (L2 Regularization): Adds the sum of squares of coefficients to the loss function. It reduces the magnitude of coefficients but does not set them to zero.


2. Lasso regres (L1 Regularization): Adds the sum of absolute values of coefficients. It can reduce some coefficients to exactly zero, helping with feature Sel.



Benefit: Regularization improves the model’s generalization ability, making it perform better on new, unseen data.

---
## Validation in ml (5 Marks Answer):

Validation is the process of evaluating a ml model’s perf on unseen data before final deployment. It helps ensure that the model is not just memorizing train data but can generalize well to new inputs.

Importance of Validation:

1. Prevents Overfitting – Ensures the model learns patterns, not just noise from train data.


2. Hyperparameter Tuning – Helps choose the best model settings (like learning rate or depth).


3. Improves Generalization – Ensures the model performs well on new, unseen data.



Common Validation techni:

Holdout Validation: Split data into train, validation, and test sets.

k-Fold Cross-Validation: Data is divided into k parts; each part is used for validation once while others are used for train.

Stratified k-Fold: Ensures equal class distribution in all folds (useful for clasi prblm).

Leave-One-Out (LOO): Each data point is tested once using the rest for train (used for small datasets).

Time Series Validation: Used for time-based data, maintaining the sequence of events.


Validation helps in selecting the most accurate and reliable model for real-world applications.

---

## Concept Representation in ml (5 Marks Answer):

Concept representation in ml refers to how knowledge, patterns, and relationships within data are structured and learned by modl. It plays a key role in determining how well a model can generalize to new, unseen data.

Types of Concept Representation:

1. Feature-Based Representation:

Data is represented as feature vectors, where each dimension corresponds to a specific attribute.

Used in classical modl like SVM, Decision Trees, and Neural Networks.

Example: [Red, Round, 150g, Sweetness=8/10] for an apple.



2. Distributed Representation:

Represents concepts as dense vectors in a high-dimensional space.

Common in deep learning modl (e.g., Word2Vec, BERT, ResNet).

Captures semantic meaning and relationships between inputs.



3. Symbolic Representation:

Uses rules and logic to define concepts.

Example: IF color = red AND shape = round THEN label = apple.

Used in expert systems and knowledge graphs.



4. Probabilistic Representation:

Represents uncertainty using probabilities.

Example: P(Disease | Symptoms) in a medical diagnosis model.




Challenges:

Feature Sel

High-dimensional data

Interpretability

Concept drift (changing patterns over time)


In summary, concept representation determines how data is transformed into a format that the ml model can understand and learn from effectively.

---

## clasi Error in ml (According to PPT):

clasi error refers to the incorrect predictions made by a clasi model when it assigns the wrong class label to a data instance. It is a key measure for evaluating model perf.

Types of clasi Errors:

1. False Positive (Type I Error):

Model predicts the positive class when it is actually negative.

Example: Predicting a person has a disease when they are healthy.



2. False Negative (Type II Error):

Model predicts the negative class when it is actually positive.

Example: Predicting a spam email as not spam.



3. True Positive (TP):

Correctly predicted positive class.



4. True Negative (TN):

Correctly predicted negative class.




Important Metrics Related to clasi Errors:

Accu = (TP + TN) / Total Predictions

Precision = TP / (TP + FP)

Recall (Sensitivity) = TP / (TP + FN)

F1 Score = Harmonic mean of Precision and Recall

Misclasi Rate = (FP + FN) / Total Predictions


Tools Used:

Confu Matrix: A table used to summarize prediction results and calculate these metrics.


These metrics help identify how well a model is performing and where it might be making mistakes.

---

