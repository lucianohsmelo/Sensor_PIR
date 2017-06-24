#define pir 2
int readSensor;
void setup() {
  Serial.begin(9600);
  pinMode(pir,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  readSensor = digitalRead(pir);
  digitalWrite(13,readSensor);
  Serial.println(readSensor);
  delay(100);
}
