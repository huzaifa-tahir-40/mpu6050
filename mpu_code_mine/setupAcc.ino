void setupAcc()
{
  Wire.beginTransmission(MPU_addr);
  Wire.write(ACCEL_CONFIG);
  Wire.write(acc_scale);    // Set the range to +/- 4g = +/- 39.2 m/s^2
  Wire.endTransmission();
}