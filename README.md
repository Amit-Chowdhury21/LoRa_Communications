# V2V Communications using LoRa Meshtastic 



## Introduction

-LoRa (Long Range) technology operates on low-power, wide-area networks, providing long-range communication capabilities.
-LoRa enables communication through radio frequency modulation, making it suitable for IoT applications and V2V communication.
-Nodes equipped with LoRa modules create a decentralized mesh network among vehicles.
-Each node acts as both a transmitter and a receiver, allowing for direct communication between vehicles without relying on cellular or Wi-Fi networks.

Independence from Cellular and Wi-Fi Networks:
-LoRa's independent network ensures V2V communication even in areas with limited or no cellular or Wi-Fi coverage.
-This autonomy is crucial for real-time communication between vehicles, especially in remote or densely populated urban environments.

### Advantages:
-Enhancing Road Safety
-Addressing Traffic Congestion
-Enabling Future Mobility
-Environmental Sustainability

## Meshtastic

-Meshtastic is an open-source project that empowers individuals and communities to create their own mesh networks.
-Tested 3 nodes communicating with each other in IIT Jammu Campus.





Vehicular Parameters Sharing:
LoRa modules installed in vehicles facilitate the sharing of vehicular parameters such as speed, location, and acceleration.
This real-time data exchange contributes to a comprehensive understanding of the vehicular environment and enhances safety.

Setup




LoRa Modules installed in vehicles
Connected to a smart phone/display using Bluetooth
Device discovery feature that allows users to identify and connect with nearby Meshtastic nodes
Creating a Mesh Network
Nodes sharing critical vehicular informations
( License Number, Location, Speed, Acceleration, Sudden Braking, Road hazards or Warnings)

GUI Development for Visualization:

A user-friendly Graphical User Interface (GUI) is designed to visualize nearby vehicles on a map.
The GUI displays real-time data received from LoRa-enabled vehicles, providing users with a clear and intuitive representation of the surrounding vehicular environment.

Threat Visualization:
The GUI incorporates features to identify and visualize potential threats based on shared vehicular parameters.
Alarms or visual cues alert users to situations such as abrupt acceleration, sudden stops, or proximity to other vehicles, enhancing overall safety.


GUI simplifies the configuration and operation of LoRa devices.
Integration of GPS information on the GUI, providing real-time location data for each connected node. 

GPS signals are modeled as a combination of a carrier 
wave and a modulation signal. 

The carrier wave is transmitted at specific radio 
frequencies (1575.42 MHz), and the modulation 
signal contains the information needed for position 
determination known as Coarse/Acquisition (C/A) code.





The position of the receiver can be represented by the following mathematical equations:



Features

Prior Zone: 20 m Radius
Speed and Acceleration



License Number
Location Coordinates
Distance
Bearing Angle



Waypoint / Info Msg




Warnings

   High Speeding
   Collision Possibility
   Sudden Braking
   Wrong Lane Driving

Future Work


Designing efficient Communication Protocols between vehicles.
Adding more warning features.
Focus on reducing the packet transmission latency.
Improving distance accuracy of nearby vehicles.


References

A. P. A. Torres, C. B. D. Silva and H. T. Filho, "An Experimental Study on the Use of LoRa Technology in Vehicle Communication," in IEEE Access, vol. 9, pp. 26633-26640, 2021.
Gaddam, V. R., & Akopian, D., “Vehicle-to-vehicle communication using LoRa technology for cooperative driving applications,” Sensors, 19(6), 1306, 2019. 
Raza, S., Kulkarni, P., & Sooriyabandara, “Low power wide area networks: An overview,” IEEE Communications Surveys & Tutorials, 19(2), 855-873,  2017. 
Paiva R. C. D., Ferreira, J. A. S., & Souto, “V2V communication in smart cities using LoRaWAN,” 15th IEEE Annual Consumer Communications & Networking Conference (CCNC), (pp. 1-6), 2018. 
Zou, Z., Wen, D., & Zhang, “A cooperative vehicle platoon control method based on LoRaWAN communication technology,” International Journal of Distributed Sensor Networks, 16(6), 1550147720932366, 2020. 



