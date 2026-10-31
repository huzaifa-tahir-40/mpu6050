void get_gyro_measurements()
{
  
  Wire.beginTransmission(MPU_addr);
  Wire.write(GYRO_XOUT_H);                 // Set pointer to GYRO_XOUT_H register to go from 0x3B to 0x40
  Wire.endTransmission();

  Wire.requestFrom(MPU_addr, 6);     // Request data from 43 to 48 registers

  while(Wire.available() < 6);

  // Shift the first byte to high byte then perform bitwise OR to get low byte.

  uint8_t high = Wire.read(); 
  uint8_t low  = Wire.read();

  gyr_X = high << 8 | low; // Store first HB and LB into accelX

  high = Wire.read(); 
  low  = Wire.read();

  gyr_Y = high << 8 | low; // Store middle HB and LB into accelY

  high = Wire.read(); 
  low  = Wire.read();

  gyr_Z = high << 8 | low; // Store last HB and LB into accelZ

}