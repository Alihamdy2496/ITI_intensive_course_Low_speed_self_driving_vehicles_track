import numpy as np

def Q_1():
    x=input("plz enter your birthday:")
    if(not x.isdigit()):      
        print("plz enter a valid birthday:")
    else:
        print("you are {} years old".format(2021-int(x)))

def Q_2():
    x=input("plz enter any number :")
    if(not x.isdigit()):      
        print("plz enter a valid number:")
    else:
        print("the sum of natural numbers 1 to {} = {}".format(int(x),sum(range(1,int(x)+1))))
        print("the average of natural numbers 1 to {} = {}".format(int(x),np.mean(range(1,int(x)+1))))

def Q_3():
    x=input("plz enter pyramid height :")
    if(not x.isdigit()):      
        print("plz enter a valid number:")
    else:
        for i in range(0,int(x)):
            for k in range((1+(int(x)-i)*2)//2,0,-1):
                print(' ',end='')
            for j in range(0,1+i*2):
                print('*',end='')
            print('')

def Q_4():
    x=input("enter 'q' for exit. \nEnter any number :")
    if(x=='q'):
        print("you are out")
        return
    elif(not x.isdigit()):      
        print("plz enter a valid number or 'q' to exit ")
    else:
        if int(x)%2==0:
            print("{} is even".format(x))
        else:
            print("{} is odd".format(x))

def Q_5():
    x=input("enter 'q' for exit. \nEnter any string to remove all vowels from it:")
    if(x=='q'):
        print("you are out")
        return
    if(x.isdigit()):      
        print("plz enter a string ")
    else:
        x=x.replace('a',''); x=x.replace('A','')
        x=x.replace('e',''); x=x.replace('E','')
        x=x.replace('i',''); x=x.replace('I','')
        x=x.replace('o',''); x=x.replace('O','')
        x=x.replace('u',''); x=x.replace('U','')

        print("new string after successfully removed all the vowels:{}".format(x))

def Q_6():
    x=input("enter the list:")
    b=x.split(" ")
    c='\n'.join(b)
    print(c)
    file_object  = open("test.txt", "w") 
    file_object.write(c) 
    file_object.close()


def Q_7():
    x=input("enter the list:")
    b=x.split(" ")
    num=[]
    for i in b:
        if(not i.isdigit()):
            print("plz enter valid numbers")
            return
        num.append(int(i))

    print("the sum :",sum(num))


def Q_8():
    x=input("enter the list:")
    b=x.split(" ")
    num=[]
    for i in b:
        if(not i.isdigit()):
            print("plz enter valid numbers")
            return
        if(int(i)%2==0):
            num.append(int(i))
    print("the even numbers :",num)


class Q_9:
    def __init__(self):
        self.str=""
    def get_String (self):
        self.str=input("enter a string: ")
    def print_String(self):
        print(self.str.upper())


class Q_10:
    def __init__(self):
        x=input("plz enter the distance in Km :")
        if(not x.isdigit()):      
            print("plz enter a valid number:")
            return
        y=input("plz enter the Time in H :")
        if(not y.isdigit()):      
            print("plz enter a valid number:")
            return
        self.distance=int(x)
        self.Time=int(y)

    def get_velocity(self):
        print("the velocity in Km/H= ",self.distance/self.Time)



def Q_14():
    inp= input("Enter a number:")
    if(inp != "done"):
        max=int(inp)
        min=int(inp)
    while inp != "done":
        try:
            inp=input("Enter a number:")
            if(int(inp)>max):
                max=int(inp)
            if(int(inp)<min):
                min=int(inp)
        except ValueError:
            if(inp !="done"):
                print("plz enter a valid number")
    print("Maximum is ",max)
    print("Minimum is ",min)

def Q_15():
    x=input("Enter file name :")
    file_object  = open(x,"r") 
    listt=[]
    for line in file_object:
        listt.append(line[:-1].upper())
    file_object.close()
    print("\n".join(listt))


def Q_16():
    file_object  = open("mbox-short.txt","r") 
    listt=[]
    for line in file_object:
        if(line[0:5]=='From '):
            if(line.split(' ')[1][-1]=='\n'):
                listt.append(line.split(' ')[1][0:-1])
            else:
                listt.append(line.split(' ')[1])
    file_object.close()
    print("\n".join(listt))
    print("the count = ",len(listt))
    
