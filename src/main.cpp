#include <Arduino.h>

/*
 *  Project 01-blink_00
 *      Blinks a LED and prints on console LED state
 *      Austral 2023 - IntroCom - Electronica Digital
 */

#define LED     2
#define DEL     1000

void
setup(void)
{
    pinMode(LED,OUTPUT);
    digitalWrite(LED,LOW);
    Serial.begin(BAUD);
}

void
loop(void)
{
    digitalWrite(LED,HIGH);
    Serial.println("on");
    delay(DEL);

    digitalWrite(LED,LOW);
    Serial.println("off");
    delay(DEL);
}
