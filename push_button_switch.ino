int switchPin = 2;
int redPin = 12;
int delayTime = 2;
int switchOld = 1;
int switchNew;
bool isOn = false;

void setLED(bool r, bool g, bool b) {
  digitalWrite(redPin, r);
}

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  switchNew = digitalRead(switchPin);
  if(switchOld == 0 && switchNew == 1){
    isOn = !isOn;
  }
  setLED(isOn,LOW,LOW);
  switchOld = switchNew;
  delay(delayTime);
}
