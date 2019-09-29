import time
import imaplib
import serial

from flask import Flask, render_template, request, url_for

app = Flask(__name__)
arduino = serial.Serial('COM3', 9600)

@app.route('/')
def render_homePage():
    return render_template('home.html')

@app.route('/', methods=['POST'])
def my_form_post():
    username = request.form['username']
    password = request.form['password']
    readMail(username, password)
    return render_template('home.html')

def readMail(username, password):
    ORG_EMAIL   = "@gmail.com"
    FROM_EMAIL = username + ORG_EMAIL
    FROM_PWD = password
    SMTP_SERVER = "imap.gmail.com"
    SMTP_PORT   = 993
    
    mail = imaplib.IMAP4_SSL(SMTP_SERVER)
    mail.login(FROM_EMAIL, FROM_PWD)
    mail.select('inbox')
    typ, data = mail.search(None, 'ALL')
    mail_ids = data[0]
    id_list = mail_ids.split()
    latest_email_id = mail_ids[-1]
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

if(__name__ == '__main__'):
    flask_app.run(debug=True)
