import time
import imaplib
import email

ORG_EMAIL   = "@gmail.com"
FROM_EMAIL  = "test50201" + ORG_EMAIL
FROM_PWD    = "TestTest123!"
SMTP_SERVER = "imap.gmail.com"
SMTP_PORT   = 993

def readMail():
    mail = imaplib.IMAP4_SSL(SMTP_SERVER)
    mail.login(FROM_EMAIL, FROM_PWD)
    latest_email_id = ''
    while True:
        mail.select('inbox')
        typ, data = mail.search(None, 'ALL')
        mail_ids = data[0]
        id_list = mail_ids.split()
        if(mail_ids[-1] == latest_email_id):
            print("No New Email")
            time.sleep(10)
        else:
            print("A new email has arrived!")
            latest_email_id = mail_ids[-1]
            time.sleep(10)

readMail()
