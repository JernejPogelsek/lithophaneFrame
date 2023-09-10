int in1 = 7;
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);  

  pinMode(in1, OUTPUT);
  digitalWrite(in1, HIGH);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);

if(distance < 10)
{
  digitalWrite(in1, LOW);
  delay(8000);
  digitalWrite(in1, HIGH);
}
}
