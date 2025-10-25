
unsigned int test1 = 0;

void setup() {
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  test1++;
  Serial.println(test1);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                      
}
