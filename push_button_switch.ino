int switchPin = 2;
int switchVal;

int redPin = 12;
int greenPin = 4;

int delayTime = 2;
int switchOld = 1;
int switchNew;
bool isOn = false;

void setLED(bool r, bool g, bool b) {
  digitalWrite(redPin, r);
  digitalWrite(greenPin, g);
  // digitalWrite(bluePin, b);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}



void loop() {
  // put your main code here, to run repeatedly:
  switchNew = digitalRead(switchPin);
  if(switchOld == 0 && switchNew == 1){
    isOn = !isOn;
  }
  setLED(isOn,LOW,LOW);
  switchOld = switchNew;
  delay(delayTime);
}
