int solenoidPin = 4; //This is the output pin on the Arduino we are using
const int trig = 2, echo = 3; 

long duration, Distanceincm, volume, height; 

void setup() {

Serial.begin(9600);

pinMode(solenoidPin, OUTPUT); //Sets the pin as an output

pinMode(trig, OUTPUT); //sensor

pinMode(echo, INPUT); //snesor 
}

void loop() {

//set up sensor signlas 
digitalWrite(trig, HIGH); 

delay(15); 

digitalWrite(trig, LOW); 

duration = pulseIn(echo, HIGH); 

Distanceincm = (duration/2) / 29.1; 

  
//height = 21 - Distanceincm;
  
//volume = ((height) * (9*9) * (PI));

if (Distanceincm < 5){

 digitalWrite(solenoidPin, HIGH); //Switch Solenoid ON
  delay(1000); 
  Serial.print("Distance: "); 
  Serial.println(Distanceincm);

  
  }
else {
 
  digitalWrite(solenoidPin, LOW); //Switch Solenoid OFF
//delay(2000); //Wait 1 Second
Serial.println("Nothing in range");

}

}