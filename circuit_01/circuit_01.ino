int ledPin = 13;

void setup() {
  setupLed();
}

void loop() {
  turnOnLed();
  wait(5);
  turnOffLed();
  wait(1);
}

void setupLed(){
  pinMode(ledPin, OUTPUT);
}

void turnOnLed(){
  digitalWrite(ledPin, HIGH);
}

void turnOffLed(){
  digitalWrite(ledPin, LOW);
}

void wait(int seconds){
  delay(seconds * 1000);
}
