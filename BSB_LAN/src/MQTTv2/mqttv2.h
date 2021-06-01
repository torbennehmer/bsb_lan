/***********************************************************
 * Alternative MQTT implementation for BSB-LAN
 * main interface class, handling all the required calls out 
 * of the main loop
 * 
 * Original code by Torben Nehmer <torben@nehmer.net>
 ***********************************************************/

#ifndef mqttv2_h
#define mqttv2_h

#include <Arduino.h>
#include "../PubSubClient/src/PubSubClient.h"
#include <Ethernet.h>

extern int printFmtToDebug(const char *format, ...);
extern void writelnToDebug();
extern void printToDebug(char *format);
extern void printToDebug(const char *format);
#define printlnToDebug(format) {printToDebug(format); writelnToDebug();}

class MQTTv2 {
    protected:
    EthernetClient *comClient;
    PubSubClient *mqttClient;

    public:
    MQTTv2();

};

#endif // mqttv2_h