#include <ESP8266WiFi.h>

#include "wifi.h"

void WifiSetMode(int mode)
{
  WiFi.mode((WiFiMode_t)mode);
}

void WifiDisconnect()
{
  WiFi.disconnect();
}

int WifiScanNetwork()
{
  return WiFi.scanNetworks();
}

const char *WifiGetSSID(int networkIndex)
{
  return WiFi.SSID(networkIndex).c_str();
}
