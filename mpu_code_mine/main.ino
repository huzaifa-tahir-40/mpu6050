#include <Wire.h>
#include <math.h>
#define MPU_addr 0b01101000

#define ACCEL_XOUT_H 0x3B
#define ACCEL_CONFIG 0x1C

#define GYRO_XOUT_H 0x43
#define GYRO_CONFIG 0x1B

// Set the scale
uint8_t gyro_scale = 0b00001000;
uint8_t acc_scale = 0b00001000;

// Collect raw values
int16_t acc_X, acc_Y, acc_Z;
int16_t gyr_X, gyr_Y, gyr_Z;
int16_t mag_X, mag_Y, mag_Z;

// Collect values in required units
float acc_X_value, acc_Y_value, acc_Z_value;
float gyr_X_value, gyr_Y_value, gyr_Z_value;
float mag_X_value, mag_Y_value, mag_Z_value;

// Get RPY angles
float roll, pitch, yaw;

void setup()
{
  Serial.begin(115200);
  Wire.begin();
  wakeUpMPU();
  setupGyro();
  setupAcc();
}

void loop()
{
  get_acc_measurements();
  process_acc();

  get_gyro_measurements();
  process_gyr();

  // get_mag_measurements();
  // process_mag();

  print_values();

  delay(100);
}
