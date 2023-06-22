#define PI 3.1415926535897932384626433832795
const int trig = 2, echo = 3; 

long duration, Distanceincm, volume, height; 

void setup() { 

  Serial.begin(9600);

  pinMode(trig, OUTPUT); 

  pinMode(echo, INPUT); 

  pinMode(11, OUTPUT); 

  pinMode(10, OUTPUT); 

  pinMode(9, OUTPUT); 

  pinMode(8, OUTPUT); 

  digitalWrite(8, HIGH); 

} 

  

void loop(){ 

  digitalWrite(trig, HIGH); 

  delay(15); 

  digitalWrite(trig, LOW); 

  duration = pulseIn(echo, HIGH); 

  Distanceincm = (duration/2) / 29.1; 
  
  height = 21 - Distanceincm;
  
  volume = ((height) * (9*9) * (PI));

 
 
 

  if (Distanceincm < 20) { 

    digitalWrite(11, HIGH); 
    Serial.print("Distance: "); 
    Serial.println(volume);

  } 

  else { 

    digitalWrite(11, LOW);  
    Serial.print("Distance: ");
    Serial.println(volume);

  } 

  if (Distanceincm < 15) {  

    digitalWrite(10, HIGH); 
    Serial.print("Distance: "); 
    Serial.println(volume);

  } 

  else { 

    digitalWrite(10, LOW); 
    Serial.print("Distance: "); 
    Serial.println(volume);

  }               

  if (Distanceincm < 5) { 

    digitalWrite(9, HIGH);   
     Serial.print("Distance: "); 
    Serial.println(volume);

  } 

  else { 

    digitalWrite(9, LOW);  
    Serial.print("Distance: ");
    Serial.println(volume);

  } 

} 

