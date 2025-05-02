
## 🧠 What Are Optimizers?

<mark style="background: #FFB8EBA6;">Optimizers determine **how the model learns** by updating weights based on gradients (errors) calculated from the loss function.</mark>  
They are critical for making the model converge efficiently and accurately during training.

---

## ⚙️ How Optimizers Work (In Simple Steps)

1. **Forward pass**: The model makes a prediction.
    
2. **Loss calculation**: The difference between the prediction and the true value is measured (using a loss function).
    
3. **Backward pass (Backpropagation)**: Compute gradients of the loss w.r.t. weights.
    
4. **Optimizer step**: Use gradients to update weights to reduce loss.

# 🧠 Deep Learning Optimizers

| Optimizer         | How It Works                                                                 | When to Use                                                                                 | Notes                                                  |
|------------------|------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------|--------------------------------------------------------|
| **SGD** (Stochastic Gradient Descent) | Calculates gradient of the loss and updates weights accordingly.                      | Large datasets, simple models, image recognition.                                          | Slow convergence but good generalization.              |
| **SGD with Momentum** | Adds a fraction of the previous update to the current one for acceleration.     | When training is slow or stuck in local minima.                                             | Speeds up convergence, useful for complex tasks.       |
| **RMSprop**       | Maintains a moving average of squared gradients to adapt learning rate.     | Noisy data, mini-batches, recurrent neural networks.                                        | Fast convergence.                                      |
| **Adam** (Adaptive Moment Estimation) | Combines Momentum and RMSprop; uses adaptive learning rates and momentum.             | General-purpose: NLP, CV, and most tasks.                                                  | Most widely used optimizer.                            |
| **Adagrad**       | Scales learning rate inversely with the sum of squares of past gradients.   | Sparse data, varied feature scales, NLP.                                                    | Learning rate can decay too quickly.                   |
| **Adadelta**      | Improvement of Adagrad with limited decay of learning rate.                 | When Adagrad slows down too much, e.g., NLP tasks.                                          | Prevents learning rate from vanishing.                 |
| **Nadam**         | Adam + Nesterov momentum for look-ahead gradient adjustment.                | Fast convergence and high accuracy, often in CV or language models.                         | Improved variant of Adam.                              |
