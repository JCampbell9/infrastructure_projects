int driverPUL = 7;
int driverDIR = 6;

int pd = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(driverPUL, OUTPUT);
  pinMode(driverDIR, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(driverDIR, HIGH);
  digitalWrite(driverPUL, HIGH);
  delayMicroseconds(pd);
  digitalWrite(driverPUL,LOW);
  delayMicroseconds(pd);

}
