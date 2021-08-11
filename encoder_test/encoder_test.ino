int encoder_pin = 3;

int steps = 0;

void setup() {
  Serial.begin(9600);

  pinMode(encoder_pin, INPUT);
//  pinMode(encoder_pin, INPUT_PULLUP);

//  attachInterrupt(encoder_pin, step_counter, DROP);
//  attachInterrupt(digitalPinToInterrupt(encoder_pin), step_counter, FALLING);
  attachInterrupt(digitalPinToInterrupt(encoder_pin), step_counter, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(digitalRead(encoder_pin));
  Serial.println(steps);
  delay(.01);
}
//
//void get_angle():{
//  
//}

void step_counter() {
  steps++;
}
