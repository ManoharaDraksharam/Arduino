int button_front = 5;
int button_left = 4;
int button_reverse = 3;
int button_right =2;
int ou0_right = 0;
int ou1_right = 1;
int ou6_left = 6;
int ou7_left = 7;
int enb_right = 10;
int enb_left = 9;
int button_sensor = 11;

void setup()
 {
   // put your setup code here, to run once:
   pinMode(ou0_right, OUTPUT);
   pinMode(ou1_right, OUTPUT);
   pinMode(ou6_left, OUTPUT);
   pinMode(ou7_left, OUTPUT);
   pinMode(enb_right, OUTPUT);
   pinMode(enb_left, OUTPUT);

   pinMode(button_front, INPUT);
   pinMode(button_left, INPUT);
   pinMode(button_reverse, INPUT);
   pinMode(button_right, INPUT);
   pinMode(button_sensor, INPUT);
   

   digitalWrite(ou0_right,LOW);
   digitalWrite(ou1_right,LOW);
   digitalWrite(ou6_left, LOW);
   digitalWrite(ou7_left, LOW);
}

void loop()
 {     
   if (digitalRead(button_front) == HIGH && digitalRead(button_reverse) == LOW && digitalRead(button_left) == LOW && digitalRead(button_right) == LOW) 
   {
     if (digitalRead(button_sensor) == LOW)
     {
       digitalWrite(ou0_right, LOW);
       digitalWrite(ou1_right, HIGH);
       analogWrite(enb_right, 128);

       digitalWrite(ou6_left, LOW);
       digitalWrite(ou7_left, HIGH);
       analogWrite(enb_left, 128);

       delay(2);
     }
     else 
     {
       digitalWrite(ou0_right, LOW);
       digitalWrite(ou1_right, LOW);
       analogWrite(enb_right, 0);

       digitalWrite(ou6_left, LOW);
       digitalWrite(ou7_left, LOW);
       analogWrite(enb_left, 0);
     }
   }
   else if (digitalRead(button_front) == LOW && digitalRead(button_reverse) == HIGH && digitalRead(button_left) == LOW && digitalRead(button_right) == LOW) 
   {    
      if (digitalRead(button_sensor) == LOW)
      {
        digitalWrite(ou0_right, HIGH);
        digitalWrite(ou1_right, LOW);
        analogWrite(enb_right, 128);

        digitalWrite(ou6_left, HIGH);
        digitalWrite(ou7_left, LOW);
        analogWrite(enb_left, 128);

        delay(2);
     }
     else 
     {
       digitalWrite(ou0_right, LOW);
       digitalWrite(ou1_right, LOW);
       analogWrite(enb_right, 0);

       digitalWrite(ou6_left, LOW);
       digitalWrite(ou7_left, LOW);
       analogWrite(enb_left, 0);
     }
   }
   else if (digitalRead(button_front) == LOW && digitalRead(button_reverse) == LOW && digitalRead(button_left) == HIGH && digitalRead(button_right) == LOW) 
   {
      if (digitalRead(button_sensor) == LOW)
      {
        digitalWrite(ou0_right, LOW);
        digitalWrite(ou1_right, HIGH);
        analogWrite(enb_right, 128);

        digitalWrite(ou6_left, HIGH);
        digitalWrite(ou7_left, LOW);
        analogWrite(enb_left, 32);

        delay(2);
     }
     else 
     {
        digitalWrite(ou0_right, LOW);
        digitalWrite(ou1_right, LOW);
        analogWrite(enb_right, 0);

        digitalWrite(ou6_left, LOW);
        digitalWrite(ou7_left, LOW);
        analogWrite(enb_left, 0);
     }
   }
   else if (digitalRead(button_front) == LOW && digitalRead(button_reverse) == LOW && digitalRead(button_left) == LOW && digitalRead(button_right) == HIGH) 
   {
      if (digitalRead(button_sensor) == LOW)
      {
        digitalWrite(ou0_right, HIGH);
        digitalWrite(ou1_right, LOW);
        analogWrite(enb_right, 32);

        digitalWrite(ou6_left, LOW);
        digitalWrite(ou7_left, HIGH);
        analogWrite(enb_left, 128);

        delay(2);
     }
     else 
     {
        digitalWrite(ou0_right, LOW);
        digitalWrite(ou1_right, LOW);
        analogWrite(enb_right, 0);

        digitalWrite(ou6_left, LOW);
        digitalWrite(ou7_left, LOW);
        analogWrite(enb_left, 0);
     }
   }
   else if (digitalRead(button_front) == LOW  && digitalRead(button_reverse) == LOW && digitalRead(button_left) == LOW && digitalRead(button_right) == LOW)
   {  
     if (digitalRead(button_sensor) == LOW)
      { 
       digitalWrite(ou0_right, LOW);
       digitalWrite(ou1_right, HIGH);
       analogWrite(enb_right, 64);

       digitalWrite(ou6_left, LOW);
       digitalWrite(ou7_left, HIGH);
       analogWrite(enb_left, 64);

       delay(2);
     }
     else 
     {
       digitalWrite(ou0_right, LOW);
       digitalWrite(ou1_right, LOW);
       analogWrite(enb_right, 0);

       digitalWrite(ou6_left, LOW);
       digitalWrite(ou7_left, LOW);
       analogWrite(enb_left, 0);
     }
   } 
 }
