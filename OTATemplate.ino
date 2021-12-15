#include <OTANetworkDevice.h>

OTANetworkDevice* device = new OTANetworkDevice();

void setup(){
    device->setWiFiNetworkName(WIFI_NETWORK_NAME);
    device->setWiFiNetworkPassword(WIFI_NETWORK_PASSWORD);
    device->setBrokerIP(BROKER_IP);
    device->setName(DEVICE_NAME);

    device->setup();
}

void loop(){
    device->handle();
}