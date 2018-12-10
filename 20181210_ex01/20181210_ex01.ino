#define RedLED 9
#define GreenLED  11
#define BlueLED 10

void setup() {
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  analogWrite(GreenLED,0)
  analogWrite(RedLED,0)

  for(int i = 0)
  
  analogWrite(BlueLED,0)

  
  digitalWrite(RedLED, HIGH);
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, LOW);
  delay(2000);
  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, HIGH);
  digitalWrite(BlueLED, LOW);
  delay(2000);
  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, HIGH);
  delay(2000);
  digitalWrite(RedLED, HIGH);
  digitalWrite(GreenLED, HIGH);
  digitalWrite(BlueLED, LOW);
  delay(2000);
  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, HIGH);
  digitalWrite(BlueLED, HIGH);
  delay(2000);
  digitalWrite(RedLED, HIGH);
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, HIGH);
  delay(2000);
}
