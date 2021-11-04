int i = 0;
void setup() {
  Serial.begin(115200);
}
void loop() {
  if (i < 360) {
    Serial.print(sin(radians(i)));
    Serial.print(',');
    Serial.println(cos(radians(i)));
    i++;
    delay(5);
  }
  else {
    i = 0;
  }
}
