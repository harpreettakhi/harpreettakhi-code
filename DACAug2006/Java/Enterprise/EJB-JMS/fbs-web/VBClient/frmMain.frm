VERSION 5.00
Begin VB.Form frmMain 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Investment Client"
   ClientHeight    =   1560
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   3765
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   1560
   ScaleWidth      =   3765
   StartUpPosition =   2  'CenterScreen
   Begin VB.TextBox txtInvest 
      Alignment       =   1  'Right Justify
      BackColor       =   &H80000000&
      Height          =   285
      Left            =   1800
      Locked          =   -1  'True
      TabIndex        =   3
      Top             =   840
      Width           =   1695
   End
   Begin VB.ComboBox cboCompany 
      Height          =   315
      Left            =   1800
      Style           =   2  'Dropdown List
      TabIndex        =   1
      Top             =   240
      Width           =   1695
   End
   Begin VB.Label Label2 
      Caption         =   "Investment :"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   855
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Company ID :"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   270
      Width           =   1215
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private objService As SoapClient30

Private Sub cboCompany_Click()
    Dim inv As Double
    inv = objService.getInvestmentIn(cboCompany.Text)
    txtInvest.Text = Format(inv, "0.00")
End Sub

Private Sub Form_Load()
    Dim companies() As String, i As Integer
    Set objService = New SoapClient30
    objService.MSSoapInit "http://localhost:8000/fbs/services/InvestmentService?wsdl"
    companies = objService.listCompanies
    For i = 0 To UBound(companies)
        cboCompany.AddItem companies(i)
    Next
End Sub
