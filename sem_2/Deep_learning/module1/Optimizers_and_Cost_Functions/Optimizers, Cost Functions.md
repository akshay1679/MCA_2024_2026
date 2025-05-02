
• Cost functions (or loss functions) in deep learning measure the error between the model's predictions and the actual target values. 
• The choice of cost function depends on the task (classification, regression, etc.).

#  1. Mean Squared Error (MSE)


![[04 Optimizers and Cost functions1.webp]]


• How it works: Measures the <mark style="background: #FFB8EBA6;">average of the squares of the errors </mark>between predicted (y^i) and actual values (Yi). 

• When to use: Best suited for <mark style="background: #FFB8EBA6;">regression tasks </mark>where the output is continuous, like predicting house prices or stock prices. <mark style="background: #FFF3A3A6;">MSE penalizes larger errors more, leading to smoother predictions.</mark>


---

### 🎯 What happens when we **square errors**?

When we compute the error between the prediction (y^\hat{y}) and the actual value (yy), we could simply look at:

Error=y−y^\text{Error} = y - \hat{y}

But **if we square this error**:

Squared Error=(y−y^)2\text{Squared Error} = (y - \hat{y})^2

==The squaring **magnifies** bigger errors **much more** than smaller ones.  
**It’s not a linear growth — it's exponential**.==

In simple terms:

|Error|Squared Error|
|---|---|
|1|1|
|2|4|
|3|9|
|4|16|
|5|25|

Notice how:

- An error of 2 leads to a penalty of 4.
    
- An error of 5 leads to a penalty of 25 — **not just 5 times bigger, but 25 times bigger!**
    

Thus, **larger errors "hurt" the MSE much more**.

---

### 🔥 **Key Point:** Squaring creates a **quadratic** relationship, not a linear one

If the error doubles, the penalty increases **4 times**, not 2 times.

Mathematically:

- If Error = xx
    
- Then Squared Error = x2x^2
    

Example:

- If Error = 2, Squared Error = 22=42^2 = 4
    
- If Error = 4, Squared Error = 42=164^2 = 16
    
- Notice: 1616 is **4 times bigger** than 44 even though the error only **doubled**.
    

👉 **Thus, bigger mistakes have exponentially bigger consequences**.

---

### Why do we WANT to punish larger errors more?

In many real-world applications:

- **Small mistakes are acceptable** (predicting a house price off by $1,000 is fine).
    
- **Big mistakes are disastrous** (predicting a house price off by $100,000 is a huge problem).
    

By squaring the errors, we **force the model** to care **much more** about avoiding large mistakes.

---

### Visual Understanding

Imagine a graph:

- X-axis = Error (from −5-5 to 55)
    
- Y-axis = Squared Error
    

The graph of y=x2y = x^2 looks like a **U-shape**.  
As error moves away from 0 (positive or negative), the Squared Error **rises sharply**.

At Error = 1 → Squared Error = 1  
At Error = 2 → Squared Error = 4  
At Error = 3 → Squared Error = 9  
At Error = 4 → Squared Error = 16  
At Error = 5 → Squared Error = 25

🔵 **Meaning**:

<mark style="background: #FFB8EBA6;">- A small mistake near 0 is barely penalized.</mark>
    
<mark style="background: #FFB8EBA6;">- A bigger mistake away from 0 is punished severely.</mark>
    

---

### Quick Analogy

Think of it like this:

> "<mark style="background: #FFB8EBA6;">If someone comes late to work by 2 minutes, it's not a big deal. But if they come late by 2 hours, it's a big problem</mark>.
> 
> In the workplace, you punish bigger delays more severely.  
> Squaring errors in MSE works the same way."

---

### Summary

|Concept|Detail|
|---|---|
|Squaring errors|Makes all errors positive|
|Growth|Quadratic (error × error)|
|Effect|Big errors have much bigger impact than small errors|
|Why|To focus the model on avoiding large mistakes|


---

### When should you use MSE?

- When you're working on a<mark style="background: #FFB8EBA6;"> **regression** task </mark>(predicting a continuous number).
    
- When you want <mark style="background: #FFB8EBA6;">**larger errors** to be penalized more heavily</mark> (good when you care more about big mistakes).
    
- Example tasks:
    
    - Predicting house prices
        
    - Forecasting stock market values
        
    - Estimating temperatures


---

#  2. Mean Absolute Error (MAE)

![[04 Optimizers and Cost functions1 1.webp]]

[[04 Optimizers and Cost functions1.pdf#page=3&rect=127,421,374,466|04 Optimizers and Cost functions1, p.3]]

 • How it works: Calculates the <mark style="background: #FFB8EBA6;">average of the absolute differences between</mark> the predicted and actual values. 
 • When to use: Also used for <mark style="background: #FFB8EBA6;">regression, especially when outliers are present</mark>. MAE treats all errors equally, so it’s more robust to outliers than MSE.

# 🚀 When should you use MAE?

- When you're solving a **regression problem**.
    
- When you **don't want to heavily punish outliers**.
    
- When you want each prediction error to **contribute equally** to the total loss.
    

**Examples**:

- Estimating delivery times.
    
- Predicting customer demand.
    
- Any regression task where **outliers exist** and you **don’t want your model to overreact to them**.

# ⚠️ MAE vs MSE

| Feature                   | MAE                          | MSE                 |
| ------------------------- | ---------------------------- | ------------------- |
| Punishment for big errors | Linear                       | Quadratic (squared) |
| Sensitive to Outliers     | Less sensitive               | Very sensitive      |
| Units                     | Same as output               | Squared units       |
| Smoother optimization     | No (not differentiable at 0) | Yes (smooth curve)  |


---

# 📘 Binary Cross-Entropy (Log Loss) 
---

#### 🔍 **What is Binary Cross-Entropy?**

Binary Cross-Entropy (also known as **Log Loss**) is a **loss function** used for <mark style="background: #FFB8EBA6;">**binary classification</mark> problems** — tasks where the output can only be one of two classes, typically labeled `0` or `1`.

<mark style="background: #FFB8EBA6;">It measures how well your predicted probability  (𝑦̂, a number between 0 and 1) matches the actual class label (𝑦 ∈ {0,1}).</mark>

---

#### 🧠 **Why Use Probabilities?**

In binary classification, models (like logistic regression or neural networks) usually **output probabilities** instead of hard class labels. For example:

- A model might predict 𝑦̂ = 0.9 for spam (class 1), indicating high confidence.
    
- Or 𝑦̂ = 0.1 for not spam (class 0), indicating low confidence.
    

We use **Binary Cross-Entropy** to penalize the model when it predicts probabilities that are far from the true labels.

---

### 📐 Formula

![[04 Optimizers and Cost functions1 2.webp]]


---

### ✅ When to Use

Use **Binary Cross-Entropy** for problems like:

<mark style="background: #FFB8EBA6;">- Spam vs. not spam</mark>
    
- Fraudulent vs. genuine transactions
    
- Disease present vs. not present
    
- Clicked vs. not clicked (in recommendation systems)
    

---

# ⚠️ Important Notes  ????

- **Probabilities, not logits**: The input `𝑦̂` must be a probability (between 0 and 1). If your model outputs logits, use a **sigmoid activation** before applying BCE.
    
- **Sensitive to confidence**: Predicting 𝑦̂ = 0.01 for a true class 1 is punished more than predicting 𝑦̂ = 0.4 — even though both are wrong.
    
- **Non-linear penalty**: The further the prediction is from the true value, the exponentially higher the penalty.
    

---

Sure! Let’s break down **Categorical Cross-Entropy** in detail, focusing on how it works, when to use it, and why it's effective.

---

#  What Is Categorical Cross-Entropy?

Categorical Cross-Entropy is a **loss function** used in <mark style="background: #FFB8EBA6;">**multi-class classification** </mark>problems where:

- There are **more than two classes**.
    
- **Only one class is correct** per example.
    
- The labels are **one-hot encoded** (e.g., if there are 3 classes and the true class is 2, the label is `[0, 1, 0]`).
    [[OneHotEncoder]]


---

## 🔹 Example

Suppose you're classifying images of animals: **Cat, Dog, Bird**.

- True label: Dog → y=[0,1,0]y = [0, 1, 0]
    
- Predicted probabilities: y^=[0.2,0.7,0.1]\hat{y} = [0.2, 0.7, 0.1]
    

Then the loss is:

L=−(0⋅log⁡(0.2)+1⋅log⁡(0.7)+0⋅log⁡(0.1))=−log⁡(0.7)≈0.357\mathcal{L} = - (0 \cdot \log(0.2) + 1 \cdot \log(0.7) + 0 \cdot \log(0.1)) = -\log(0.7) \approx 0.357

So if the model is confident (e.g., predicts 0.9 for the correct class), the loss is low. If it's wrong/confused, the loss is high.

---

## 🔹 When to Use It

✅ Use **Categorical Cross-Entropy** when:

- You have **more than two classes**.
    
- Each input **belongs to exactly one class**.
    
<mark style="background: #FFB8EBA6;">- Your output layer uses a **softmax activation function**.</mark>
    
<mark style="background: #FFB8EBA6;">- Labels are in **one-hot format**.</mark>
    

📍Common use cases:

- **Image classification** (e.g., identifying digits, animals)
    
- **Text classification** (e.g., sentiment: positive/neutral/negative)
    
- **Object recognition**, **language modeling**, etc.
    

---

## 🔹 How It Works (Step-by-Step)

1. **Model Prediction**: Your neural network outputs a vector of raw scores (logits) for each class.
    
2. **Softmax Layer**: Converts logits into a probability distribution across classes.
    
3. **One-Hot Encoding**: The actual label is represented as a vector where only the correct class has a `1`.
    
4. **Loss Calculation**: Cross-entropy compares the predicted distribution with the true label and calculates the loss based on how far off the prediction is.
    
5. **Backpropagation**: The loss is used to compute gradients and update model weights.
    

---

## 🔹 Why It Works

- **Penalizes wrong predictions** more strongly when the model is **confident but wrong**.
    
- Encourages the model to assign **high probability to the correct class**.
    
- Works well with **softmax** because the math aligns nicely during gradient computation.
    

---

# Sparse Categorical Cross-Entropy 

• How it works: Similar to categorical cross-entropy, but instead of one-hot encoding the true labels, the true labels are integers representing the class index. 

• When to use: When your target labels are integers instead of one-hot encoded vectors. Useful for multi-class classification problems with a large number of classes, as it saves memory and computation.

---

# Kullback-Leibler Divergence (KL Divergence)

• How it works: Measures how one probability distribution P diverges from a second distribution Q. 

• When to use: Often used in <mark style="background: #FFB8EBA6;">unsupervised learning,</mark> particularly in models like variational autoencoders (VAE) and when comparing distributions, e.g., reinforcement learning where you compare the policy of the agent.

---

# Hinge Loss 

• How it works: Used for "maximum-margin" classification like support vector machines (SVMs). Penalizes incorrect classifications and correct classifications that are not confidently correct. 

• When to use: Best for binary classification tasks where margin maximization is important, often used in tasks requiring SVMs or in deep learning applications with SVM-like behavior.


---

