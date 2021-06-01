/***********************************************************
 * Alternative MQTT implementation for BSB-LAN
 * main interface class, handling all the required calls out 
 * of the main loop
 * 
 * Original code by Torben Nehmer <torben@nehmer.net>
 ***********************************************************/

#include "mqttv2.h"
#include <Arduino.h>

MQTTv2::MQTTv2() {
    printlnToDebug(PSTR("MQTTv2 instance live."));
}