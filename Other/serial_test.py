import serial
import time

arduino = serial.Serial('COM3', 9600)
time.sleep(2)

##print(arduino.readline())
print("Enter 1 for ON, 0 for OFF")

while(True):
    var = input()
    print("You entered:" + var)
    
    if(var == '1'):
        arduino.write(b'1')
        print("on")
        time.sleep(2)

    if(var == '0'):
        arduino.write(b'0')
        print("off")
        time.sleep(2)

##
##arduino = serial.Serial('COM3', 9600)
##
##def led_on():
##        arduino.write(b'1')
##
##def led_off():
##    arduino.write(b'0')
##
##led_on()

