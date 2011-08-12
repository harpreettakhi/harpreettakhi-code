Attribute VB_Name = "VBCOMClientModule"
Sub Main()
    Dim objMC As FilgraphManager
    Dim objME As IMediaEvent
    Dim lEvCode As Long
    
    If Command = "" Then
        MsgBox "Usage : " & App.Title & " media-file"
        Exit Sub
    End If
    
    Set objMC = New FilgraphManager
    On Error GoTo ErrHandler
    objMC.RenderFile Command
    objMC.Run
    Set objME = objMC
    objME.WaitForCompletion -1, lEvCode
    Exit Sub
ErrHandler:
    MsgBox "Cannot load " & Command, vbExclamation
End Sub











