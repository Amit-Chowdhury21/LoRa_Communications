/* Counter And Display: main.cpp (https://github.com/LoRaMesher/LoRaMesher/blob/main/examples/CounterAndDisplay/src/main.cpp)

This code explained is from the LoraMesher library and designed to work with a LILYGO T-BEAM board. The purpose of this code is to establish communication using LoRa and manage sending and receiving data packets between devices. Let's break down the code section by section: */

// 1) Include Required Libraries: 

#include <Arduino.h>                 // provides access to basic Arduino functions
#include "LoraMesher.h"             // a custom library for handling LoRa communication
#include "display.h"               // contains functions to interact with a display

// 2) Macro Definitions:

#define BOARD_LED 4
#define LED_ON LOW
#define LED_OFF HIGH     // macros define constants for the onboard LED pin, LED ON and OFF states.

// 3) Global Variables:

LoraMesher& radio = LoraMesher::getInstance();
uint32_t dataCounter = 0;
struct dataPacket {
    uint32_t counter[35] = {...};        // Initial values for a data packet
};
dataPacket* helloPacket = new dataPacket;

/* ‘radio’ is an instance of the ‘LoraMesher’ class used for LoRa communication.
‘dataCounter’ keeps track of the packet count.
‘dataPacket’ is a structure defining the format of a data packet.
‘helloPacket’ is a pointer to an instance of the ‘dataPacket’ structure. */

// 4) LED Flash Function:

void led_Flash(uint16_t flashes, uint16_t delaymS) { ... }

// This function blinks the onboard LED a specified number of times with a given delay between blinks.
    
// 5) Print Packet Function:

void printPacket(dataPacket* data, uint16_t sourceAddress) { ... }
This function prints the data from a received packet to the display.

// 6) Print Data Packet Function:

void printDataPacket(AppPacket<dataPacket>* packet) { ... }
//This function iterates through the payload of a received packet and prints its contents using the printPacket function.

// 7) Process Received Packets Function:

void processReceivedPackets(void*) { ... }
This function is a task that processes received packets. It flashes the LED to indicate packet arrival, retrieves packets from a queue, prints their content using printDataPacket, and deletes the processed packets.

// 8) Create Receive Messages Function:

void createReceiveMessages() { ... }
//This function creates a task for processing received packets and associates it with the LoRa radio instance.

// 9) Setup LoRaMesher Function:

void setupLoraMesher() { ... }
This function initializes the LoRa communication using the LoraMesher library, creates the receive task, and starts the LoRa communication.

// 10) Print Address to Display Function:

void printAddressDisplay() { ... }
//This function prints the local address of the device to the display.
    
// 11) Print Routing Table to Display Function:

void printRoutingTableToDisplay() { ... }
//This function prints the routing table to the display, showing information about the network's routing nodes.
    
// 12) Send LoRa Message Function:

void sendLoRaMessage(void*) { ... }
//This function is a task that periodically sends data packets to devices in the network. It selects a routing node from the routing table, creates a data packet, sends it, updates the display, and waits for a fixed time before sending the next packet.

// 13) Create Send Messages Function:

void createSendMessages() { ... }  //This function creates a task for sending periodic LoRa messages.

// 14) Setup Function:

void setup() { ... }
//The setup function initializes the serial communication, LED pin, display, LoRa communication, address display, and the task for sending messages.

// 15) Loop Function:

void loop() { ... }  //The loop function refreshes the display.

// Overall, this code manages LoRa communication between devices, including sending and receiving data packets, maintaining routing information, and updating the display with relevant information. It follows a task-based approach where different tasks handle specific responsibilities concurrently.

