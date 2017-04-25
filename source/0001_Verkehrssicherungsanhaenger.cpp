//---------------------------------------------------------------------------

#include "mariamole_auto_generated.h"

//---------------------------------------------------------------------------

void setup() {
	pinMode(13, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
}

//---------------------------------------------------------------------------

void loop() {
	digitalWrite(5, HIGH);
	digitalWrite(4, HIGH);
	delay(1200);
	digitalWrite(5, LOW);
	digitalWrite(4, LOW);
	delay(600);
	digitalWrite(3,HIGH);
	delay(40);
	digitalWrite(3,LOW);
	delay(900);
}
	

//---------------------------------------------------------------------------