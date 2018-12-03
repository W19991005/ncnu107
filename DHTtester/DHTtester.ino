#include "DHT.h"

#define DHTPIN 4

#define DHTTYPE DHT11

#define BUTTON_PIN 2
#define LED_PIN 13
#define BUTTON_PIN2 3
#define LED_PIN2 12


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");

  dht.begin();

  pinMode(BUTTON_PIN,INPUT_PULLUP);
  pinMode(BUTTON_PIN2,INPUT_PULLUP);

  pinMode(LED_PIN,OUTPUT);
  pinMode(LED_PIN2,OUTPUT);
  
}

void loop() {
  
  delay(2000);

  float h = dht.readHumidity();
  
  float t = dht.readTemperature();
  
  float f = dht.readTemperature(true);

  
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  
  float hif = dht.computeHeatIndex(f, h);
  
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.print(" *C ");
  Serial.print(hif);
  Serial.println(" *F");

  if(t<=28){
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
  }

  if(t>28){
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }
  
}
