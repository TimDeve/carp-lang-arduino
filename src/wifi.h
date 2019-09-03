#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C"
{
#endif

  void WifiSetMode(int mode);
  void WifiDisconnect();
  int WifiScanNetwork();
  const char *WifiGetSSID(int networkIndex);

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif
