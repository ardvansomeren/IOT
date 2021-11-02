#define sensorPin  A1

void setup() {
  //identify sketch
  Serial.print("avs1416 - serial_test_ino");
  //Serial.print(DATE);
  //Serial.print(TIME);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100 ;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  Serial.print(voltage); Serial.print(" volts  -  ");
  Serial.print(temperatureC); Serial.print(" degrees C  -  ");
  Serial.print(temperatureF); Serial.println(" degrees F");

  delay(3000);
}
