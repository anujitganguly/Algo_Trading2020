import yfinance as yf

stock = input("Enter Stock name with '.NS' extension: ")
data = yf.Ticker(stock).info
price = data['regularMarketPrice']
print("Price in INR :", price)