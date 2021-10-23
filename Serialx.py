import serial

serialArduino = serial.Serial("COM4", 9600)

def enviar(x):
    x = str(x)
    serialArduino.write(x.encode('ascii'))