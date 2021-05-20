int interruptPin1 = 2;
int interruptPin2 = 3;
float timesample1=0;
int counter=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(interruptPin1, INPUT_PULLUP);
  pinMode(interruptPin2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin2), ISR_FUNC, RISING) ;
  //attachInterrupt(digitalPinToInterrupt(interruptPin1), ISR_FUNC2, FAILING) ;

}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println("speed :");

  if(timesample1==0)
    { Serial.println("0");}

  Serial.println((2*3.14*0.15)/timesample1);
  
  delay(300);
}
void ISR_FUNC() {
  /*flag1=1;
  if(flag2==1)
  {
    flag1=0;
    flag2=0;
    counter++;
    }
    */
  if (digitalRead(interruptPin1))
  {
    counter++;
  }
  else
  {
    counter--;
  }
  if(counter == 250)
  {
     timesample1= (millis()-timesample1) / 1000 ;
     counter=0;
    }
  }
//void ISR_FUNC2() {
  /*flag2=1;
  if(flag1==1)
  {
    flag1=0;
    flag2=0;
    counter--;
    }


    
  250 -> 2 *pi *r
  speedd = distance * time
    
*/


//}
