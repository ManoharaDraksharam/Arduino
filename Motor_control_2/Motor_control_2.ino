#define enb 9
#define ou7 7
#define ou6 6
#define button 4

int rotDirection = 0;
int pressed = false;

void setup()
 {
   // put your setup code here, to run once:
   pinMode(ou7, OUTPUT);
   pinMode(ou6, OUTPUT);
   pinMode(enb, OUTPUT);
   pinMode(button, INPUT);
   digitalWrite(ou6, LOW);
   digitalWrite(ou7, LOW);
}

void loop()
 { 
   // put your main code here, to run repeatedly:

   if (digitalRead(button) == true)
   {
     pressed =!pressed;   
   }

   while (digitalRead(button)== true);
   delay(20);

   if (pressed == true & rotDirection == 0) 
   {
     digitalWrite(ou6, HIGH);
     digitalWrite(ou7, LOW);
     analogWrite(enb, 128);
     rotDirection = 1;
     delay(20);
   }

   if (pressed == false & rotDirection == 1) 
   {
     digitalWrite(ou6, LOW);
     digitalWrite(ou7, HIGH);
     analogWrite(enb, 128);
     rotDirection = 0;
     delay(20);
   }
}
