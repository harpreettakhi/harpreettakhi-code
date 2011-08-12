<%@ page import="java.util.*,javax.mail.*,javax.mail.internet.*"%>
<%!
	public void sendMail(String from, String recipient, String subject, String text) throws Exception{
		Properties props = new Properties();
		props.put("mail.smtp.host", "localhost");
		Session ses = Session.getDefaultInstance(props, null);
		Message msg = new MimeMessage(ses);
		msg.setFrom(new InternetAddress(from));
		msg.addRecipient(Message.RecipientType.TO, new InternetAddress(recipient));
		msg.setSubject(subject);
		msg.setText(text);
		Transport.send(msg);
	}
%>