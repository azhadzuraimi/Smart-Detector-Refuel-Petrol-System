int motor =3;

void setup() {
pinMode(motor, OUTPUT);
}

void loop() {
 

  for(int speedmotor = 0;speedmotor <= 255;speedmotor += 3){
  analogWrite(motor,speedmotor);
  delay(20);}
  
   analogWrite(motor,255);
   delay(300);
  for(int speedmotor = 255;speedmotor >= 0;speedmotor -= 3){
  analogWrite(motor,speedmotor);
  delay(20);}
}
