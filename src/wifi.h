#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C"
{
#endif

  void WifiSetMode(int mode);
  void WifiDisconnect();
  int WifiScanNetwork();
  char *WifiGetSSID(int networkIndex);
  int WifiBegin(char **ssid, char **pass);

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif
