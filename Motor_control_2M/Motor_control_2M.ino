
int ou0_right = A0;
int ou1_right = A1;
int enb_right = 5;

int ou2_left = A2;
int ou3_left = A3;
int enb_left = 6;
int sensor = 9;


void setup()
 {
   pinMode(ou0_right, OUTPUT);
   pinMode(ou1_right, OUTPUT);
   pinMode(enb_right, OUTPUT);
   
   pinMode(ou2_left, OUTPUT);
   pinMode(ou3_left, OUTPUT);
   pinMode(enb_left, OUTPUT);

   pinMode(sensor, INPUT);
}

void loop()
 {        
   if (digitalRead(sensor) == HIGH)
   {
     digitalWrite(ou0_right, HIGH);
     digitalWrite(ou1_right, LOW);
     analogWrite(enb_right, 255);

     digitalWrite(ou2_left, LOW);
     digitalWrite(ou3_left, HIGH);
     analogWrite(enb_left, 255);
   }
   else
   {
     digitalWrite(ou0_right, LOW);
     digitalWrite(ou1_right, LOW);
     analogWrite(enb_right, 0);

     digitalWrite(ou2_left, LOW);
     digitalWrite(ou3_left, LOW);
     analogWrite(enb_left, 0);

   }
}

    

