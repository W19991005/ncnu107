#define blueLed 13
#define redLed 12

void setup() {
  // put your setup code here, to run once:
    pinMode(blueLed,OUTPUT) ;
    pinMode(redLed,OUTPUT) ;
    digitalWrite(blueLed,LOW) ;
    digitalWrite(redLed,LOW) ;
    
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(blueLed,HIGH) ;
    digitalWrite(redLed,HIGH) ;
    delay(500) ;
    digitalWrite(blueLed,LOW) ;
    digitalWrite(redLed,LOW) ;
    delay(500) ;
    digitalWrite(blueLed,HIGH) ;
    digitalWrite(redLed,HIGH) ;
    delay(500) ;
    digitalWrite(blueLed,LOW) ;
    digitalWrite(redLed,LOW) ;
    delay(1000) ;
    digitalWrite(redLed,HIGH) ;
    delay(1000) ;
    digitalWrite(redLed,LOW) ;
    delay(1000) ;
    digitalWrite(blueLed,HIGH) ;
    delay(1000) ;
    digitalWrite(blueLed,LOW) ;
    delay(1000) ;
}
