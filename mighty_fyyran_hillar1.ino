int sensor=2;
int motor=3;
void setup()
{
  Serial.begin(9600);
 pinMode(3, OUTPUT);
pinMode(2, INPUT);
}

void loop()
{
  int sensorValue = analogRead(2);
  int Speed = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(3, Speed);
  Serial.print("sensor: ");
  Serial.print(map(sensorValue, 0, 1023, 0, 125));
  Serial.print("°C, Speed: ");
  Serial.println(Speed);
}
