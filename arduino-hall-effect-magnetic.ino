// Hall Effect Magnetic

const int sensorPin = 12;
const int ledPin = 13;

int sensorState = 0;

void setup() {
  
  Serial.begin(9600);
  Serial.println("teste");
  
  pinMode(ledPin, OUTPUT);      
  pinMode(sensorPin, INPUT);     
}

void loop(){
  sensorState = digitalRead(sensorPin);
  
  delay(1000);

  if (sensorState == LOW) {        
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("on");
  } 
  else {
    digitalWrite(ledPin, LOW);  // Turn off LED
     Serial.println("off");
  }
}
