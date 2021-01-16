int trig = 9;     
int echo = 10;
int duration;
int distance;
     
void setup() { 
 pinMode(trig, OUTPUT); 
 pinMode(echo, INPUT); 
 Serial.begin(9600); 
} 

void loop() { 

 digitalWrite(trig, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trig, HIGH); 
 delayMicroseconds(10); 
 digitalWrite(trig, LOW); 

duration = pulseIn(echo, HIGH); 


distance = (duration*.0343)/2; 

 Serial.print("Distance: "); 
 Serial.println(distance); 
 delay(100); 
} 
