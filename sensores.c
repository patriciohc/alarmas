#include <wiringPi.h>
#include <string.h>

#include "sensores.h"

void init_pines()
{
	delay(5000);
	wiringPiSetup();
	pinMode(ALARM1, INPUT);
	pinMode(ALARM2, INPUT);
	pinMode(ALARM3, INPUT);
	pinMode(ALARM4, INPUT);
	pinMode(ALARM5, INPUT);
	pinMode(ALARM6, INPUT);
}

void  monitoring_alarm(char *msg)
{
	strcpy(msg, "");
	delay(1000);
	printf("monitoring alarm...\n");
	if (digitalRead(ALARM1) == 0){
		strcat(msg, "1 ");
	} 
	if (digitalRead(ALARM2) == 0){
		strcat(msg, "2 ");
	} 
	if (digitalRead(ALARM3) == 0){
		strcat(msg, "3 ");
	}
	if (digitalRead(ALARM4) == 0){
		strcat(msg, "4 ");
	}
	if (digitalRead(ALARM5) == 0){
		strcat(msg, "5 ");
	}
	if (digitalRead(ALARM6) == 0){
		strcat(msg, "6 ");
	}
}
