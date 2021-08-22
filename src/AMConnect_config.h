// Wifi settings
const char* ssid = "Preach-IoT";
const char* password = "krewkrew";

// Mower name

const char* mowername = "amy";

// mqtt settings
const char* mqtt_server = "10.10.10.50";
const char* mqtt_username = "IoT";
const char* mqtt_password = "krewkrew";
const char* mqtt_command_topic = "automower/amy/command";
const char* mqtt_debug_topic = "automower/amy/debug";
const char* mqtt_status_topic = "automower/amy/status";
const char* mqtt_location_topic = "automower/amy/location";
const char* mqtt_preferences_topic = "automower/amy/preferences";
const char* mqtt_prefstatus_topic = "automower/amy/prefstatus";
const char* mqtt_lwt_topic = "automower/amy/lwt";

// Define the port used for serial communication with the AutoMower. 
// Here we use Serial1, on pins 15 (RX) and 2 (TX)
#define AMSerialRX 2
#define AMSerialTX 15

// Define the port used for GPS. In this case, Serial2 on default pins (RX 16, TX 17)
#define gpsPort Serial2
#define GPS_PORT_NAME "Serial2"

// Define the debug serial port
#define DEBUG_PORT Serial

// Define the interval between position updates
#define gpsInterval 10

//Define the poll interval in seconds
#define pollInterval 60

// Defines if the values for pollInterval & gpsInterval should be read from internal memory in the device
// 1 = read internal values, 0 = overwrite internal values with config-readInternalValues
// This can be used for setting the values over MQTT by sending pollInterval:xx on topic automower/preferences
// and is stored in the device after a reboot.
#define readStoredPreferences 0 



