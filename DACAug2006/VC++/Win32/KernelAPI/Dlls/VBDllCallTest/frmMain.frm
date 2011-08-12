VERSION 5.00
Begin VB.Form frmMain 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Dll Call Test"
   ClientHeight    =   2550
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   3645
   KeyPreview      =   -1  'True
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   2550
   ScaleWidth      =   3645
   StartUpPosition =   2  'CenterScreen
   Begin VB.TextBox txtLCM 
      BackColor       =   &H80000000&
      Height          =   375
      Left            =   1800
      Locked          =   -1  'True
      TabIndex        =   7
      Top             =   1920
      Width           =   1575
   End
   Begin VB.TextBox txtGCD 
      BackColor       =   &H80000000&
      Height          =   375
      Left            =   1800
      Locked          =   -1  'True
      TabIndex        =   5
      Top             =   1320
      Width           =   1575
   End
   Begin VB.TextBox txtSecond 
      Height          =   375
      Left            =   1800
      TabIndex        =   3
      Top             =   720
      Width           =   1575
   End
   Begin VB.TextBox txtFirst 
      Height          =   375
      Left            =   1800
      TabIndex        =   1
      Top             =   120
      Width           =   1575
   End
   Begin VB.Label Label4 
      Caption         =   "L.C.M :"
      Height          =   255
      Left            =   240
      TabIndex        =   6
      Top             =   1980
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "G.C.D :"
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   1380
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Second Number :"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   780
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "First Number :"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   180
      Width           =   1215
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Declare Function GCD Lib "..\euclid.dll" Alias "GreatestDivisor" (ByVal first As Long, ByVal second As Long) As Long
Private Declare Function LeastMultiple Lib "..\euclid.dll" (ByVal first As Long, ByVal second As Long) As Long

Private Sub Form_KeyPress(KeyAscii As Integer)
    If KeyAscii = vbKeyReturn Then
        txtGCD.Text = GCD(txtFirst.Text, txtSecond.Text)
        txtLCM.Text = LeastMultiple(txtFirst.Text, txtSecond.Text)
    End If
End Sub

