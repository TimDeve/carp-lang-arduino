#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C"
{
#endif

  void SerialInit(long baudRate);
  void SerialPrintln(char **str);

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif
