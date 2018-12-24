#define led1 9
#define led2 10
#define led3 11
#define led4 12
#define led5 13

void setup() {
  pinMode(led1,OUTPUT) ;
  pinMode(led2,OUTPUT) ;
  pinMode(led3,OUTPUT) ;
  pinMode(led4,OUTPUT) ;
  pinMode(led5,OUTPUT) ;

  digitalWrite(led1,LOW) ;
  digitalWrite(led2,LOW) ;
  digitalWrite(led3,LOW) ;
  digitalWrite(led4,LOW) ;
  digitalWrite(led5,LOW) ;
  
}

void loop() {
  digitalWrite(led1,HIGH) ;
  delay(500) ;
  digitalWrite(led1,LOW) ;
  delay(500) ;
  
  digitalWrite(led2,HIGH) ;
  delay(500) ;
  digitalWrite(led2,LOW) ;
  delay(500) ;
  
  digitalWrite(led3,HIGH) ;
  delay(500) ;
  digitalWrite(led3,LOW) ;
  delay(500) ;
  
  digitalWrite(led4,HIGH) ;
  delay(500) ;
  digitalWrite(led4,LOW) ;
  delay(500) ;
  
  digitalWrite(led5,HIGH) ;
  delay(500) ;
  digitalWrite(led5,LOW) ;
  delay(500) ;
  
}
