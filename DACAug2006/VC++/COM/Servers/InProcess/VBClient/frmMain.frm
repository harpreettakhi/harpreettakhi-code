VERSION 5.00
Begin VB.Form frmMain 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Trader Client"
   ClientHeight    =   3435
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   3585
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   3435
   ScaleWidth      =   3585
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnSell 
      Caption         =   "Sell"
      Height          =   375
      Left            =   2400
      TabIndex        =   9
      Top             =   2760
      Width           =   855
   End
   Begin VB.CommandButton btnBuy 
      Caption         =   "Buy"
      Height          =   375
      Left            =   240
      TabIndex        =   8
      Top             =   2760
      Width           =   855
   End
   Begin VB.TextBox txtBalance 
      BackColor       =   &H80000000&
      Height          =   405
      Left            =   1800
      Locked          =   -1  'True
      TabIndex        =   7
      Top             =   2040
      Width           =   1455
   End
   Begin VB.TextBox txtStock 
      BackColor       =   &H80000000&
      Height          =   405
      Left            =   1800
      Locked          =   -1  'True
      TabIndex        =   5
      Top             =   1440
      Width           =   1455
   End
   Begin VB.TextBox txtRate 
      Height          =   405
      Left            =   1800
      TabIndex        =   3
      Top             =   840
      Width           =   1455
   End
   Begin VB.TextBox txtQty 
      Height          =   405
      Left            =   1800
      TabIndex        =   1
      Top             =   240
      Width           =   1455
   End
   Begin VB.Label Label4 
      Caption         =   "Balance :"
      Height          =   255
      Left            =   240
      TabIndex        =   6
      Top             =   2115
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Stock :"
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   1515
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Rate :"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   915
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Quantity :"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   315
      Width           =   1215
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private objInv As Trader

Private Sub btnBuy_Click()
    On Error GoTo ErrHandler
    objInv.Buy txtQty.Text, txtRate.Text
    ShowDetails
    Exit Sub
ErrHandler:
    If Err.Number = TRADER_E_OUTOFSTOCK Then
        MsgBox "Out of stock", vbExclamation
    ElseIf Err.Number = TRADER_E_INSUFFICIENTFUNDS Then
        MsgBox "Insufficient funds", vbExclamation
    Else
        MsgBox Err.Description, vbCritical
    End If
End Sub

Private Sub btnSell_Click()
    On Error GoTo ErrHandler
    objInv.Sell txtQty.Text, txtRate.Text
    ShowDetails
    Exit Sub
ErrHandler:
    If Err.Number = TRADER_E_OUTOFSTOCK Then
        MsgBox "Out of stock", vbExclamation
    ElseIf Err.Number = TRADER_E_INSUFFICIENTFUNDS Then
        MsgBox "Insufficient funds", vbExclamation
    Else
        MsgBox Err.Description, vbCritical
    End If

End Sub

Private Sub Form_Load()
    Set objInv = New Trader
    ShowDetails
End Sub

Private Sub ShowDetails()
    Dim objAcc As IAccount
    Set objAcc = objInv
    txtStock.Text = objInv.GetStock
    txtBalance.Text = objAcc.GetBalance
End Sub
