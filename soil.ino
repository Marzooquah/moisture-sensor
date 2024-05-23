//c++ code soil moisture
int sensorPin = A2;
int t = 500;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(sensorPin,INPUT); 
}


void loop()
{
  int soilValue = analogRead(sensorPin);
  
  if(soilValue<200) 
   {
     display(1);
   }
   else if ((soilValue > 200) and (soilValue < 800))
   {
     display(6);
   }
   else if (soilValue > 800) 
   {
     display(9);
   }    

 delay(500);

}
void display(int number) 
  {  
   	switch(number)
    {
     case 0:
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        delay(t);
        break;
      case 1:
        digitalWrite(0, LOW);
  		  digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        delay(t);
      	break;
      case 2:
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        delay(t);
        break;
      case 3:
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        delay(t); 	
        break;
      case 4:
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        delay(t);
        break;
      case 5:
      	digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        delay(t); 	
        break;
      case 6:
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW); 
        delay(t);
        break;
      case 7:
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        delay(t); 
        break;
      case 8:
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        delay(t);
        break;
      case 9:
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        delay(t);  
        break;
      case 10:
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        delay(t);
        break;
      default :
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        delay(t);
        break; 
        }
 }   