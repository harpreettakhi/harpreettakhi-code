Dim objTrader

Randomize Time
Set objTrader = CreateObject("ACMETrading.Trader")
objTrader.Buy WScript.Arguments(0), 40 * Rnd + 10 
objTrader.Sell WScript.Arguments(0) / 2, 40 * Rnd + 10 
WScript.Echo "Stock = " & objTrader & " and Investment = " & FormatNumber(objTrader.GetInvestment, 2)
Set objTrader = Nothing


