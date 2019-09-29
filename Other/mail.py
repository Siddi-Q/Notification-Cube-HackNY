import time
import imaplib
import serial

##ORG_EMAIL   = "@gmail.com"
##FROM_EMAIL  = "test50201" + ORG_EMAIL
##FROM_PWD    = "TestTest123!"
##SMTP_SERVER = "imap.gmail.com"
##SMTP_PORT   = 993



def getUsername():
    return input("Username: ")

def getPassword():
    return input("Password: ")

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
            time.sleep(3)
        else:
            print("A new email has arrived!")
            sendSignal()
            latest_email_id = mail_ids[-1]
            time.sleep(3)

def sendSignal():
    arduino.write(b'1')

ORG_EMAIL   = "@gmail.com"
USERNAME    = getUsername()
FROM_EMAIL  = USERNAME + ORG_EMAIL
PASSWORD    = getPassword()
FROM_PWD    = PASSWORD
SMTP_SERVER = "imap.gmail.com"
SMTP_PORT   = 993

arduino = serial.Serial('COM3', 9600)
readMail()
