#define LDR A0 
#define LED 3 
#define Threshold 50 

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  int LDR_Values = analogRead(LDR);
  Serial.println(LDR_Values); //monitor readings

  if (LDR_Values < Threshold){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }


}
