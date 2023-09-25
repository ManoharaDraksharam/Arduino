/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
int buttonPin =2;

  int LED_1 =4;
  int LED_2 =6;
  int LED_3 =8;

  int buttonState =0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  
  Serial.begin(9600);

  pinMode(buttonPin, INPUT);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
 // int sensorValue = analogRead(A0);

  buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
  if (buttonState == 1)
   {
      digitalWrite(LED_1, HIGH);
      digitalWrite(LED_2,   LOW);
  }
  

   else if (buttonState == 0)
    { 
      digitalWrite(LED_2, HIGH);
       digitalWrite(LED_1, LOW);
    }

  /*  
  else {digitalWrite(LED_2, LOW);}

  if (buttonState == 0 || buttonState == 1) { digitalWrite(LED_3, HIGH);}*/
  

 /* if (sensorValue<100) { digitalWrite(LED_1, HIGH);}
  else {digitalWrite(LED_1, LOW);}

  if (sensorValue > 100 && sensorValue < 600) { digitalWrite(LED_2, HIGH);}
  else {digitalWrite(LED_2, LOW);}

  if (sensorValue > 600) { digitalWrite(LED_3, HIGH);}
  else {digitalWrite(LED_3, LOW);}*/


  // print out the value you read:
  // Serial.println(sensorValue);
  
  delay(100);  // delay in between reads for stability
}
