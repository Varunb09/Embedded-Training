import smtplib
import sys
from email.MIMEMultipart import MIMEMultipart
from email.MIMEText import MIMEText
from email.MIMEImage import MIMEImage

fromaddr = "cranesiotstudent@gmail.com"
toaddr = "varunbhatnagar115@gmail.com"

msg = MIMEMultipart()
msg['From'] = fromaddr
msg['To'] = toaddr
msg['bcc'] = "varunb067@gmail.com"
msg['Subject'] = "Python email from cranes iot student"

body = "Hello, how are you?"
msg.attach(MIMEText(body, 'plain'))
#fp = open("/home/pi/Documents/varun_raspberry_python/gpio.png","rb")

ct = len(sys.argv)
if(ct>1):
	num = 1
	while (num<ct):
		with open(sys.argv[num],'rb') as fp :
			img = MIMEImage(fp.read())
			msg.attach(img)
		num = num+1


server = smtplib.SMTP('smtp.gmail.com',587)
server.ehlo_or_helo_if_needed()
server.starttls()
server.ehlo_or_helo_if_needed()
#eid = ("varunbhatnagar115@gmail.com","varunb067@gmail.com")
server.login("cranesiotstudent@gmail.com","iotGatePass")
text = msg.as_string()
server.sendmail(fromaddr, toaddr, text)
