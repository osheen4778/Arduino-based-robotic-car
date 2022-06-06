void setup()
{
   pinMode(3, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(4, OUTPUT);  
}

void loop() 
{
   forward(); 
   delay(700);
   reverse();
   delay(700);
   left();
   delay(500);
   right();
   delay(500);   
}

void forward()
{
   digitalWrite(3,HIGH);
   digitalWrite(2,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW); 
}

void reverse()
{ 
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
}

void left()
{ 
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
}

void right()
{ 
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}
