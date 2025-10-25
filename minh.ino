
#include <DHT.H>

#define DHTTYPE DHT22
#define DHTPIN 2

DHT dhtSensor(DHTTYPE, DHTPIN);

void setup() {
  Serial.begin(9600);
  dhtSensor.begin();
}

void loop() {
  float temp = dhtSensor.readTemperature();
  float humi = dhtSensor.readHumidity();
  Serial.print("Nhiet do; ");
  Serial.println(tempt);
  Serial.print("Do am: ");
  Serial.println(humi);
  delay(2000);
}

