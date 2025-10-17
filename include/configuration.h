// Program Configuration

// MQTT Configuration
#define MQTT_CLIENTID "doorsensor_remote01"
#define MQTT_SERVERIP "192.168.15.92"
#define MQTT_SERVERPORT 1883
#define MQTT_SENSORTOPIC "laundryroom/sensor/door01"

// Amount of time after button press that it goes into sleep mode if button isn't pressed again
#define mS_TO_S_FACTOR 1000ULL // DO NOT CHANGE - Conversion factor for milliseconds to seconds
#define SLEEP_DELAY_S 30    // Wait Time after button push for the ESP32 to go to sleep (in Seconds)

