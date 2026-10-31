void process_gyr()
{
  switch(gyro_scale)
  {
    case 0b00000000:
      gyr_X_value = (gyr_X / 131.0) * (PI / 180.0);
      gyr_Y_value = (gyr_Y / 131.0) * (PI / 180.0);
      gyr_Z_value = (gyr_Z / 131.0) * (PI / 180.0);
      break;
    case 0b00001000:
      gyr_X_value = (gyr_X / 65.5) * (PI / 180.0);
      gyr_Y_value = (gyr_Y / 65.5) * (PI / 180.0);
      gyr_Z_value = (gyr_Z / 65.5) * (PI / 180.0);
      break;
    case 0b00010000:
      gyr_X_value = (gyr_X / 32.8) * (PI / 180.0);
      gyr_Y_value = (gyr_Y / 32.8) * (PI / 180.0);
      gyr_Z_value = (gyr_Z / 32.8) * (PI / 180.0);
      break;
    case 0b00011000:
      gyr_X_value = (gyr_X / 16.4) * (PI / 180.0);
      gyr_Y_value = (gyr_Y / 16.4) * (PI / 180.0);
      gyr_Z_value = (gyr_Z / 16.4) * (PI / 180.0);
      break;
  }
}