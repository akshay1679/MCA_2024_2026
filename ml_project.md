
**1. Topic:**

LSTM-Based Prediction and Recommendation System for Indian Penny Stocks

**2. Abstract:**

This Python script implements a system for analyzing and recommending Indian penny stocks listed on the NSE. It utilizes the `yfinance` library to fetch historical closing price data for a predefined list of stocks. For each stock identified as a penny stock (based on a price threshold), the script preprocesses the data by scaling and creating time-series sequences. It then builds and trains a unique Long Short-Term Memory (LSTM) neural network model using TensorFlow/Keras to learn patterns from the historical prices. Based on the trained model, the script predicts the stock's closing price for a short future period (e.g., 7 days) using an iterative prediction method. Finally, it calculates the potential Return on Investment (ROI) and potential profit based on the predicted future price compared to the current price, considering a user-defined investment budget. Stocks are ranked by predicted ROI, and recommendations are provided.

**3. Objectives:**

The primary objectives of this code are:

- To automate the process of fetching historical price data for a specified list of NSE-listed stocks.
- To filter stocks based on a predefined price criterion to focus on "penny stocks" (here, < ₹100).
- To prepare time-series data appropriately for input into an LSTM model (scaling and sequencing).
- To construct, train, and utilize individual LSTM models for _each_ selected penny stock to predict its future closing price.
- To forecast stock prices for a defined short-term horizon (e.g., 7 days).
- To calculate potential investment metrics: ROI, number of shares affordable within a budget, and potential profit based on the model's predictions.
- To rank the analyzed stocks based on their predicted ROI.
- To present actionable recommendations to the user, highlighting the stock with the highest predicted potential based on the model's output.

**4. Relevance for the code:**

This Topic, Abstract, and Objectives are directly relevant to the provided Python script because:

- **Topic:** It accurately captures the core technique (LSTM), the application domain (Prediction and Recommendation), and the target assets (Indian Penny Stocks) handled by the code's logic (using `.NS` tickers, price filtering, `evaluate_penny_stocks` function).
- **Abstract:** It summarizes the end-to-end workflow implemented in the script, mentioning key libraries (`yfinance`, `tensorflow.keras`, `sklearn`), the specific model type (LSTM), the data handling steps (`Workspace_data`, `prepare_data`, `MinMaxScaler`), the prediction mechanism (`predict_future_price`), and the final output generation (`evaluate_penny_stocks` loop calculating ROI, profit, and sorting recommendations).
- **Objectives:** They explicitly list the concrete tasks performed by the different functions and code blocks within the script. For instance, fetching data relates to `Workspace_data`, filtering relates to the price check in `evaluate_penny_stocks`, model building/training relates to `build_model` and `model.fit` calls within the loop, prediction relates to `predict_future_price`, and calculation/ranking/recommendation relate to the final part of the `evaluate_penny_stocks` function and the `if __name__ == "__main__":` block.