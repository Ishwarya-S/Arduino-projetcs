#define IRledPin 2
#define ledPin 8
void IR38Write() {
  for(int i = 0; i <= 384; i++) {
    digitalWrite(IRledPin, HIGH);
    delayMicroseconds(8);
    digitalWrite(IRledPin, LOW);
    delayMicroseconds(8);
  }
}
void setup(){
  pinMode(IRledPin, OUTPUT);
  digitalWrite(IRledPin, LOW);
  pinMode(ledpin, OUTPUT);
  digitalWrite(ledPin, LOW);
}
void loop(){
  IR38Write();
  if (digitalRead(IRsensorPin)==LOW){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
