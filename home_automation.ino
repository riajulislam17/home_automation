int ledB = 9; 
int ledG = 11; 
int relayCH1 = 5;
int relayCH2 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(ledB,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(relayCH1,OUTPUT);
  pinMode(relayCH2,OUTPUT);
  
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
}

void loop() {
  while (!Serial.available());
  byte value = Serial.read();

  switch (value) {
    case 'a':
      digitalWrite(relayCH2, HIGH);
      Serial.println("Blue LED is high");
      break;

    case 'b':
      digitalWrite(relayCH2, LOW);
      Serial.println("Blue LED is low");
      break;

    case 'c':
      digitalWrite(relayCH1, HIGH);
      Serial.println("Green LED is high");
      break;

    case 'd':
      digitalWrite(relayCH1, LOW);
      Serial.println("Green LED is low");
      break;
  }
}
