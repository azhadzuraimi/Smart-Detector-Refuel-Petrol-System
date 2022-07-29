int potPin = 2; // select the input pin for the potentiometer
int ledPin = 11; // select the pin for the LED
float val = 0; // variable to store the value coming from the sensor

void setup() {
pinMode(ledPin, OUTPUT); // declare the ledPin as an OUTPUT
 Serial.begin(9600);//read potentiometer
}

void loop() {
val = analogRead(potPin);
val =val/1023; //percentage maximum is 0-1
int light= val*255; 
Serial.println(light);
analogWrite(ledPin, light); // turn the ledPin on
delay(5); // stop the program for some time
}
