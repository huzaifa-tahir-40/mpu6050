void setupGyro()
{
  Wire.beginTransmission(MPU_addr);
  Wire.write(GYRO_CONFIG);
  Wire.write(gyro_scale); // For full scale +/- 500 deg/s = +/- 8.72 rad/sec
  Wire.endTransmission();
}