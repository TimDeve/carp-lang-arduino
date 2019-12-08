#include <ESP8266WiFi.h>

#include "wifi.h"

WiFiServer wifiServer(80);

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

int WifiGetStatus()
{
  return (int)WiFi.status();
}

char *WifiGetLocalIP()
{
  String ssid = WiFi.localIP().toString();
  return strdup(ssid.c_str());
}

void ServerBegin()
{
  wifiServer.begin();
}

void ServerServe(char *response)
{
  WiFiClient client = wifiServer.available();

  if (client)
  {

    while (client.connected())
    {

      while (client.available() > 0)
      {
        char c = client.read();
        Serial.write(c);

        // auto rsp = "HTTP/1.1 200 OK\r\nServer: WebServer\r\nContent-Type: text/html\r\nContent-Length: 5\r\nConnection: close\r\n\r\nHello";

        client.write(response);
      }

      delay(10);
    }

    client.stop();
    Serial.println("Client disconnected");
  }
}
