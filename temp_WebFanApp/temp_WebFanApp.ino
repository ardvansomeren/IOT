String command;

// AVS1416 -11/15/21 - Arduino - RaspberryPi webbased FanSwitch

#define sensorPin A1
#define fan 8 //blue
#define white 9
#define red 10

void setup() {
  Serial.begin(9600);
  
  pinMode(fan, OUTPUT);
  digitalWrite(fan, HIGH);
  
  //LED test
  pinMode(white, OUTPUT);
  pinMode(red, OUTPUT);
  
  digitalWrite(white, HIGH);
  digitalWrite(red, HIGH);
  
  delay(2000);
  
  //RESET all LEDs LOW
  
  digitalWrite(fan, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100 ;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  
  //Serial.print(digitalRead(fan));
  //Serial.print(" - ");
  Serial.println(temperatureF);
  
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim();
    if (command.equals("on")) {
      digitalWrite(fan, HIGH);
    }
    else if (command.equals("off")) {
      digitalWrite(fan, LOW);
    }
    else {
      digitalWrite(fan, HIGH);
      delay(500);
      digitalWrite(fan, LOW);
    }

  }
  delay(3000);
}
