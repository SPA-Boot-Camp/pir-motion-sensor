int sensorPin = 8;

int ledPin = 9;
int pir;

void setup() {
  
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);         
}

void loop() {
 pir = digitalRead(sensorPin);            
 if(pir == 1)
 {
  
  Serial.println("Motion detected"); 
  digitalWrite(ledPin, HIGH);     
  delay(2000);                            
 }
 else
 {
 
  Serial.println("no motion");
  digitalWrite(ledPin, LOW);
  delay(2000);
 }

}
