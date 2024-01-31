
const int trigPin = 3;
const int echoPin = 2;
const int trigPin2 = 4;
const int echoPin2 = 5;
// defines variables
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    pinMode(trigPin2, OUTPUT); // Sets the trigPin as an Output
 
  pinMode(echoPin2, INPUT); // Sets the echoPin as an Input
  pinMode(7, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  int ultra1=ultra(trigPin,echoPin);
  int ultra2 = ultra(trigPin2,echoPin2 );
  if(ultra1 >6 && ultra2>6)
  {
  digitalWrite(7,HIGH);
  
  }
  else
  {
     digitalWrite(7,LOW);
  }
}
int ultra(int trigpin,int echopin)
{
    // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  return  distance ;
}
