// transmitter.pde
//
// Simple example of how to use VirtualWire to transmit messages
// Implements a simplex (one-way) transmitter with an TX-C1 module
//
// See VirtualWire.h for detailed API docs
// Author: Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2008 Mike McCauley
// $Id: transmitter.pde,v 1.3 2009/03/30 00:07:24 mikem Exp $
#include <SoftwareSerial.h>
SoftwareSerial mySerial(8,9); // RX, TX
#include <String.h>
#include <VirtualWire.h>




const int led_pin = 11;
const int transmit_pin = 12;
const int receive_pin = 2;
const int transmit_en_pin = 3;


void setup()
{
    Serial.begin(9600);	  // Debugging only
    Serial.println("setup");
	mySerial.begin(9600);
    mySerial.println("setup");
    // Initialise the IO and ISR
    vw_set_ptt_inverted(true); // Required for DR3100
    vw_setup(2000);	 // Bits per sec
}

void loop()
{
	







    /*
	while (mySerial.available()>0)
    {
      char msg[16];
      mySerial.readBytes(msg, 16);
      Serial.write(msg);

      vw_send((uint8_t *)msg, strlen(msg));
      vw_send((uint8_t *)msg, strlen(msg));
      vw_wait_tx(); // Wait until the whole message is gone
      delay(200);
	}//*/
	
	
	
	
	
	
    /*const char *msg = "hello";

    digitalWrite(13, true); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, strlen(msg));
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(13, false);
    delay(200);
	*/
}
