import serial
import time
import numpy as np
import datetime as dt
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# Create figure for plotting
fig = plt.figure()
ax = fig.add_subplot(1, 1, 1)
xs = []
ys = []
serialcomm = serial.Serial('/dev/ttyACM2','9600')
serialcomm.timeout = 1

# This function is called periodically from FuncAnimation
def animate(i, xs, ys):

    #Read temperature (Celsius) from TMP102
    #temp_c = round(tmp102.read_temp(), 2)
    # Add x and y to lists
    serialcomm = serial.Serial('/dev/ttyACM2','9600')
    serialcomm.timeout = 1
    xs.append(dt.datetime.now().strftime('%H:%M:%S.%f'))

    distance=serialcomm.readline().decode('ascii').split(sep=',')
	
    ys.append(int(distance[0]))

    # Limit x and y lists to 20 items
    xs = xs[-20:]
    ys = ys[-20:]

    # Draw x and y lists
    ax.clear()
    ax.plot(xs, ys)

    # Format plot
    plt.xticks(rotation=45, ha='right')
    plt.subplots_adjust(bottom=0.30)
    plt.title('ultrasonic distance')
    plt.ylabel('distance cm')



ani = animation.FuncAnimation(fig, animate, fargs=(xs,ys), interval=1000)
plt.show()

serialcomm.close()









