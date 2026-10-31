void get_acc_measurements()
{
  Wire.beginTransmission(MPU_addr);
  Wire.write(ACCEL_XOUT_H);                   // Set pointer to ACCEL_XOUT_H register to go from 0x3B to 0x40
  Wire.endTransmission();

  Wire.requestFrom(MPU_addr, 6);     // Request data from 0x3B to 0x40 registers

  while(Wire.available() < 6);

  // Shift the first byte to high byte then perform bitwise OR to get low byte.

  uint8_t high = Wire.read(); 
  uint8_t low  = Wire.read();

  acc_X = high << 8 | low; // Store first HB and LB into accelX

  high = Wire.read(); 
  low  = Wire.read();

  acc_Y = high << 8 | low; // Store middle HB and LB into accelY

  high = Wire.read(); 
  low  = Wire.read();

  acc_Z = high << 8 | low; // Store last HB and LB into accelZ

}