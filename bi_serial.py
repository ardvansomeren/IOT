import serial

#Farenheid blue < 60; white 60 - 70; red >70
#Celcius blue <20 ; white 20 - 25; red > 25

if __name__ == '__main__':
    ser = serial.Serial('/dev/ttyACM0',9600, timeout=1)
    ser.flush()
    print("initiate")
    
    while True:
        if ser.in_waiting > 0:
        #if "true" == "true":
            line = ser.readline().decode('utf-8').rstrip()
            print(line)
            if float(line) <= 26:
                ser.write(b"blue\n")
                print("blue")
                print(ser.write(b"blue\n"))
            elif float(line) > 26 and float(line) <= 28:
                ser.write(b"white\n")
                print("white")
                print(ser.write(b"white\n"))
            elif float(line) > 28:
                ser.write(b"red\n")
                print("red")
                print(ser.write(b"red\n"))
            else:
                ser.write(b"all\n")