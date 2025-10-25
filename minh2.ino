#include <DHT.h>

#define DHTTYPE DHT22
#define DHTPIN 2
DHT dhtSensor(DHTPIN, DHTTYPE);
int mq2Analogpin = A0;
int buzzerPin = 8;
int gasThreshold = 500;
int tempThreshold = 30;
int humiThreshold = 85;


void setup() {
  Serial.begin(9600);
  dhtSensor.begin();
  pinMode(buzzerPin, OUTPUT);
  int gasValue = analogRead(mq2Analogpin);
}

void loop() {
  float temp = dhtSensor.readTemperature();
  float humi = dhtSensor.readHumidity();
  Serial.print("Nhiet do: ");
  Serial.println(temp);
  Serial.print("Do am: ");
  Serial.println(humi);
  if (temp > tempThreshold || humi > humiThreshold) {
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
  delay(2000);

  if (gasValue > gasThreshold) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  Serial.print("Gas value: ");
  Serial.println(gasValue);

  delay(2000);
  
}

