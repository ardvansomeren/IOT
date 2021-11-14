String command;
String LED;

#define blueLed 8
#define whiteLed 9
#define redLed 10

void chkLedSts() {
  Serial.println("Check status of the LEDs");
  Serial.println();
  
  Serial.print("blueLed pin: ");
  Serial.print(blueLed);
  Serial.print(", pin status: ");
  Serial.println(digitalRead(blueLed));
  
  Serial.print("whiteLed pin: ");
  Serial.print(whiteLed);
  Serial.print(", pin status: ");
  Serial.println(digitalRead(whiteLed));
  
  Serial.print("redLed pin: ");
  Serial.print(redLed);
  Serial.print(", pin status: ");
  Serial.println(digitalRead(redLed)); 

  Serial.println();  
}

void setup() {
  
  Serial.begin(9600);
  Serial.println("AVS1416 - 14/11/21 - write_serial");
  
  pinMode(blueLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  
  delay(2000);
  
  chkLedSts();

  delay(2000);

  Serial.println("Type Command (white, blue, red, all, off)");
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim();
    
    LED = command + "Led";
    Serial.print(LED);
    Serial.print(", command: ");
    Serial.println(command);
    Serial.println("");
    
    if (command.equals("blue")) {
      digitalWrite(whiteLed, LOW);
      digitalWrite(blueLed, HIGH);
      digitalWrite(redLed, LOW);
    }
    
    else if (command.equals("white")) {
      digitalWrite(whiteLed, HIGH);
      digitalWrite(blueLed, LOW);
      digitalWrite(redLed, LOW);
    }

    else if (command.equals("red")) {
      digitalWrite(whiteLed, LOW);
      digitalWrite(blueLed, LOW);
      digitalWrite(redLed, HIGH);
    }
    
    else if (command.equals("all")) {
      digitalWrite(whiteLed, HIGH);
      digitalWrite(blueLed, HIGH);
      digitalWrite(redLed, HIGH);
    }
    else if (command.equals("off")) {
      digitalWrite(whiteLed, LOW);
      digitalWrite(blueLed, LOW);
      digitalWrite(redLed, LOW);
    }
    else {
      Serial.println("bad command");
    }
    
      Serial.print("Command: ");
      Serial.println(command);
      Serial.println("");
      chkLedSts();      
      
    
  }
}
