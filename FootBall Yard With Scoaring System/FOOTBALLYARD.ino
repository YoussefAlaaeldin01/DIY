#define led1 4
#define led2 5
#define led3 6
#define led4 7

const int trigPin = 3;
const int echoPin = 2;
const int trigPin2 = 11;
const int echoPin2 = 12;

// defines variables
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(trigPin2, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin2, INPUT); // Sets the echoPin as an Input
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  
 int u1=ultra1(trigPin,echoPin);

 int u2 = ultra2(trigPin2,echoPin2 );

  if(u1 <8)
  {
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
 
  }
  else
  {
      digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
  }
 /* if(ultra2 <15)
  {
    digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   Serial.println("ultra2");
  }*/
  
}
int ultra1(int trigpin,int echopin)
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
  Serial.print("Distance1: ");
  Serial.println(distance);
  return  distance ;
  
}

int ultra2(int trigpin2,int echopin2)
{
    // Clears the trigPin
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin2, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance2: ");
  Serial.println(distance);
  return  distance ;
  
}
