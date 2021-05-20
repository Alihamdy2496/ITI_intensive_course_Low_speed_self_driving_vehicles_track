import os

# first check that the device is connected 
# this line here does a quick check that an arduino is connected
# os.system("ls /dev | grep ttyACM > file.txt")
# i won't use this line since i don't have an arduino , i'll just fill this file with the given data 
filesize = os.path.getsize("file.txt")
if filesize == 0:
    print("no arduino kit is connected")
else:
    #an arduino is connected
    print("plz wait the devices files is being generated:")
    #os.system("udevadm info -e > file.txt")
    #i won't use this line since i don't have an arduino i'll just copy the given files to file.txt
    file=open("file.txt","r")
    for line in file:
        if "ttyACM" in line and "DEVPATH=" in line:
    # we can use the physical connection as identification , 
    # which is this directory name “1-1:1.0” It is unique for the physical connection, 
    # but it changes if you plug the device to another port.
    ########## one solution could be Force consistent device naming on Linux #########
    # for now assume that arduino uno has usb port 1-1:1.0 and arduino mega 1-3:1.0        
            if (line.split(sep="/")[6]=="1-1:1.0"):
                print("arduino UNO is connected through the usb port 1-1:1.0")
            if (line.split(sep="/")[6]=="1-3:1.0"):
                print("arduino MEGA is connected through the usb port 1-3:1.0")

