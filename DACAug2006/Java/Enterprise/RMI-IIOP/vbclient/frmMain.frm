VERSION 5.00
Begin VB.Form frmMain 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "PriceClient"
   ClientHeight    =   3360
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   3585
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   3360
   ScaleWidth      =   3585
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnFind 
      Appearance      =   0  'Flat
      Caption         =   "Find"
      Default         =   -1  'True
      Height          =   495
      Left            =   1320
      TabIndex        =   8
      Top             =   2640
      Width           =   975
   End
   Begin VB.TextBox txtDiscount 
      BackColor       =   &H80000000&
      Height          =   375
      Left            =   1680
      Locked          =   -1  'True
      TabIndex        =   7
      Top             =   1920
      Width           =   1575
   End
   Begin VB.TextBox txtPrice 
      BackColor       =   &H80000000&
      Height          =   375
      Left            =   1680
      Locked          =   -1  'True
      TabIndex        =   5
      Top             =   1320
      Width           =   1575
   End
   Begin VB.TextBox txtQuantity 
      Height          =   375
      Left            =   1680
      TabIndex        =   3
      Top             =   720
      Width           =   1575
   End
   Begin VB.TextBox txtProduct 
      Height          =   375
      Left            =   1680
      TabIndex        =   1
      Top             =   180
      Width           =   1575
   End
   Begin VB.Label Label4 
      Caption         =   "Bulk Discount :"
      Height          =   255
      Left            =   240
      TabIndex        =   6
      Top             =   1980
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Unit Price :"
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   1380
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Quantity :"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   780
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Product :"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   1215
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private objORB As VBOrb.cOrbImpl
Private objPM As c_PriceManager

Private Sub btnFind_Click()
    txtPrice.Text = objPM.getUnitPrice(txtProduct.Text)
    txtDiscount.Text = objPM.getBulkDiscount(txtQuantity.Text)
End Sub

Private Sub Form_Load()
    Set objORB = VBOrb.init
    Set objPM = m_PriceManager.narrow(objORB.stringToObject("corbaname::prithvi:900#shop"))
End Sub
