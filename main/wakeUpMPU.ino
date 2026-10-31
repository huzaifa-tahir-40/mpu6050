void wakeUpMPU()
{
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);
  Wire.write(0x0);
  Wire.endTransmission();
}