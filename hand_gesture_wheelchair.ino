const int xpin = A0;
const int ypin = A1;
//const int zpin = A2;

void setup()

{
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);

Serial.begin(9600);
 
}

void loop()

{
 
int x = analogRead(xpin);
int y = analogRead(ypin);
delay(1000);
float x_g = (x - 512) / 102.3;
float y_g = (y - 512) / 102.3;
Serial.println(x);
Serial.print("\t");
Serial.println(y);
Serial.print("\t");
Serial.print("\n");
if(y>=324){
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  analogWrite(3, 255);
  analogWrite(9, 255);
}
else if(y<=320){
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  analogWrite(3, 255);
  analogWrite(9, 255);
}
else if(x<=333){
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  analogWrite(3, 255);
  analogWrite(9, 255);
}
else if(x>=335){
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  analogWrite(3, 255);
  analogWrite(9, 255);
}
else{
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  analogWrite(3, 150);
  analogWrite(9, 150);
}


}
