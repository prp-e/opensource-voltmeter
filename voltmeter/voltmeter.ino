void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  Serial.println("Welcome to your new realm of electroincs!"); 
  for(int i = 0; i < 15; i++){
    Serial.print("="); 
    delay(50); 
    }
  delay(1000); 

}

void loop() {
  // put your main code here, to run repeatedly:

  int input_voltage = analogRead(A0); 
  float voltage = (input_voltage * 5.0)/1024.0; 

  voltage *= 100; 

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" Volts");

  delay(150);

}
