int soundSensor = A0;
int vibrationMotor = 11;
int threshold = 300;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(soundSensor, INPUT);

  pinMode(vibrationMotor, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(soundSensor)>=threshold){
    analogWrite(vibrationMotor, 100);
    delay(200);
    analogWrite(vibrationMotor, 0);
  }
  else
    delay(1);

}
