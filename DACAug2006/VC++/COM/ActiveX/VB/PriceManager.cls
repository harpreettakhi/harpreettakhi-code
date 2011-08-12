VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "PriceManager"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Public Function GetUnitPrice(ByVal product As Long) As Double
    GetUnitPrice = 2700 * Rnd + 300
End Function

Public Function GetBulkDiscount(ByVal quantity As Long) As Single
    GetBulkDiscount = IIf(quantity < 10, 0, 5)
End Function

Private Sub Class_Initialize()
    Randomize Time
End Sub
