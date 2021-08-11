#include <SPI.h>

volatile boolean received;
//volatile byte Slavereceived,Slavesend;
volatile byte pos;
//volatile byte Slavereceived;
volatile short Slavereceived = 0;
byte Send;
byte Send2;
char buf [16];
void setup()
{
 Serial.begin(115200);
 pinMode(MISO, OUTPUT); 

 SPCR |= _BV(SPE);
 received = false;
 SPI.attachInterrupt();
 
}

void loop()
{
//  if(received)                            //Logic to SET LED ON OR OFF depending upon the value recerived from master
//   {
////    Serial.println(buf);
////    received = false;
//     
//   }
}



ISR (SPI_STC_vect)
{
  Slavereceived = SPDR;
  Serial.println(Slavereceived);
//  Send = Slavereceived + 1;
  Send = highByte(300);
  Send2 = lowByte(300);
//  Slavereceived 
  if (Slavereceived == 0xff)
  {
    SPDR = Send2;
    Serial.println(Send2);
  }
  else if (Slavereceived == 0)
  {
    SPDR = 0;
  }
  else if (Slavereceived == 109)
  {
   SPDR = Send;
   Serial.println(Send);
  }
  else
  {
    Serial.println("error        ");
    
  }
//  Slavereceived = 0;
//  Send = 0;
  
//  if (pos < sizeof buf)
//  {
//    buf[pos++] = Slavereceived; 
//  }
//  else
//  {
//   received = true; 
//  }
} 

//bool pin_output[11];
//
//
//void setup() 
//{
//  // by default all pins are inputs
//  for (int i=0; i<11; i++) 
//  {
//    pin_output[i] = false;  
//  }
//  // Set the Main in Secondary Out as an output
//  pinMode(MISO, OUTPUT);
//  // turn on SPI as a secondary
//  // Set appropriate bit in SPI Control Register
//  SPCR |= _BV(SPE);
//  
//}
//
//void loop () 
//{
//  byte in_byte;
//  // SPIF indicates transmission complete (byte received)
//  if ((SPSR & (1 << SPIF)) != 0)
//  {
//    in_byte = SPDR; 
//
//    // Handle the input code here
//
//    // Set return_val to the value you want to return
//    SPDR = in_byte;
//  }
//}
