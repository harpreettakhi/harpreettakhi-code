<object id="Loan" progid="ACMEFinance.PersonalLoan" runat="server"></object>

<%
	Dim amount, period
	amount = Request.Form("amount")
	period = Request.Form("period")
	
	Sub OnSubmit()
		Dim emi
		On Error Resume Next
		emi = Loan.GetMonthlyInstallment(amount, period)
		If Err = 0 Then
			Response.Write("<b>E.M.I : </b>" & FormatNumber(emi, 2))
		Else
			Response.Write("<b>Error : </b>" & Err.Description)			
		End If
	End Sub
%>

<html>
  <head><title>ACME Financing</title></head>
  <body>
    <h1 align="center">ACME Financing</h1>
    <form method="post">
      <table align="center" border="0">
        <tr><td>Amount : </td><td><input name="amount" value="<%=amount%>"></td></tr>
        <tr><td>Period : </td><td><input name="period" value="<%=period%>"></td></tr>
        <tr align="center"><td colspan="2"><input type="submit" name="submit" value="Go!"></td></tr>
      </table>
    </form>
    <p align="center">
	<% If Request.Form("submit") = "Go!" Then OnSubmit %>
    </p>
  </body>
</html>








