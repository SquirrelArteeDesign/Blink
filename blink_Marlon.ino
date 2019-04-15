void setup() {
  // Definindo pino 13
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  // Fazendo pino acender e apagar
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
}
