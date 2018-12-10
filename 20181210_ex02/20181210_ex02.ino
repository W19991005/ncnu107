#define RedLED 9
#define GreenLED  11
#define BlueLED 10

void setup() {

}

void loop() {
  analogWrite(GreenLED, 0);
  analogWrite(BlueLED, 0);
  for(int i = 0 ; i <256;i++)
  {
    analogWrite(RedLED, i);
    delay(50) ;
  }

  analogWrite(RedLED, 0);
  analogWrite(BlueLED, 0);
  for(int i = 0 ; i <256;i++)
  {
    analogWrite(GreenLED, i);
    delay(50) ;
  }

  analogWrite(RedLED, 0);
  analogWrite(GreenLED, 0);
  for(int i = 0 ; i <256;i++)
  {
    analogWrite(BlueLED, i);
    delay(50) ;
  }

  analogWrite(BlueLED, 0);
  for(int i = 0 ; i <256;i++)
  {
    analogWrite(GreenLED, i);
    analogWrite(RedLED, i);
    delay(50) ;
  }

  analogWrite(RedLED, 0);
  for(int i = 0 ; i <256;i++)
  {
    analogWrite(BlueLED, i);
    analogWrite(GreenLED, i);
    delay(50) ;
  }

  analogWrite(GreenLED, 0);
  for(int i = 0 ; i <256;i++)
  {
    analogWrite(RedLED, i);
    analogWrite(BlueLED, i);
    delay(50) ;
  }
 /*
  delay(2000);                       // wait for a second
  analogWrite(RedLED, 0);   // turn the LED on (HIGH is the voltage level)
  analogWrite(GreenLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  analogWrite(BlueLED, 0);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  analogWrite(RedLED, 0);   // turn the LED on (HIGH is the voltage level)
  analogWrite(GreenLED, 0);   // turn the LED on (HIGH is the voltage level)
  analogWrite(BlueLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  analogWrite(RedLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  analogWrite(GreenLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  analogWrite(BlueLED, 0);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  analogWrite(RedLED, 0);   // turn the LED on (HIGH is the voltage level)
  analogWrite(GreenLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  analogWrite(BlueLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  analogWrite(RedLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  analogWrite(GreenLED, 0);   // turn the LED on (HIGH is the voltage level)
  analogWrite(BlueLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);     
  */
  // wait for a second
//  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
 // delay(1000);                       // wait for a second
}
