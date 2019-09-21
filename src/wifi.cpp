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

char *WifiGetSSID(int networkIndex)
{
  String ssid = WiFi.SSID(networkIndex);
  return strdup(ssid.c_str());
}

int WifiBegin(char *ssid, char *pass)
{
  return (int)WiFi.begin(ssid, pass);
}

int WifiGetStatus() {
  return (int)WiFi.status();
}
