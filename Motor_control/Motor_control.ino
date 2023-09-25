int in4 = 4;
int in5 = 5;
int ou6 = 6;
int ou7 = 7;
int enb = 9;

void setup()
 {
  // put your setup code here, to run once:
  pinMode(in4, INPUT);
  pinMode(in5, INPUT);
  pinMode(ou6, OUTPUT);
  pinMode(ou7, OUTPUT);
  pinMode(enb, OUTPUT);

  digitalWrite(ou6, LOW);
  digitalWrite(ou7, LOW);
}

void loop()
 {
   // put your main code here, to run repeatedly:

   if (digitalRead(in4) == HIGH && digitalRead(in5) == LOW)
   { 
     digitalWrite(ou6, HIGH);
     digitalWrite(ou7, LOW);
     analogWrite(enb,128); 
   }

   else if (digitalRead(in4) == LOW && digitalRead(in5) == HIGH) 
   {
     digitalWrite(ou6, LOW);
     digitalWrite(ou7, HIGH);
     analogWrite(enb,128);
   }

   else if (digitalRead(in4) == LOW && digitalRead(in5) == LOW) 
   {
     
     digitalWrite(ou6, 0);
     digitalWrite(ou7, 0);
     analogWrite(enb,0);
   }
   else if (digitalRead(in4) == HIGH && digitalRead(in5) == HIGH) 
   {
     analogWrite(ou6, 0);
     analogWrite(ou7, 0);
     analogWrite(enb,0);
   }
}
