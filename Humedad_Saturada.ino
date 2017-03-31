void setup() {
  
Serial.begin(9600);
pinMode (A0, INPUT);
}

void loop() {

int SensorValue = analogRead (A0);
Serial.print(SensorValue); Serial.print (" - ");

if (SensorValue <= 0)
{
  Serial.println("El Sensor esta Desconectado");
 }
if (SensorValue < 1000 & SensorValue >=700)
{
  Serial.println("El Suelo esta Saturado");
 }
if (SensorValue < 700 & SensorValue >=370)
{
  Serial.println("El Suelo esta Parcialemente Saturado");
 }
if (SensorValue < 370 & SensorValue >=1 )
  Serial.println("El Suelo esta Seco");
  delay (60000);
}


