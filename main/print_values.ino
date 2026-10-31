void print_values()
{
  roll = atan2(acc_Y_value, sqrt(powf(acc_X_value,2) + powf(acc_Z_value,2))) * 180 / PI;
  pitch = atan2(-acc_X_value, sqrt(powf(acc_Y_value,2) + powf(acc_Z_value,2))) * 180 / PI;

  Serial.print(acc_X_value); Serial.print(",");
  Serial.print(acc_Y_value); Serial.print(",");
  Serial.print(acc_Z_value); Serial.print(",");
  Serial.print(gyr_X_value); Serial.print(",");
  Serial.print(gyr_Y_value); Serial.print(",");
  Serial.print(gyr_Z_value); Serial.print(",");
  // Serial.print(mag_X_value); Serial.print(",");
  // Serial.print(mag_Y_value); Serial.print(",");
  // Serial.print(mag_Z_value); Serial.print(",");
  Serial.print(roll); Serial.print(",");
  Serial.println(pitch);
}