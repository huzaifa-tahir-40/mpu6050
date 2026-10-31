void process_acc()
{
  switch(acc_scale)
  {
    case 0b00000000:
      acc_X_value = acc_X / 16384.0;
      acc_Y_value = acc_Y / 16384.0;
      acc_Z_value = acc_Z / 16384.0;
      break;
    case 0b00001000:
      acc_X_value = acc_X / 8192.0 + 0.03;
      acc_Y_value = acc_Y / 8192.0 - 0.06;
      acc_Z_value = acc_Z / 8192.0;
      break;
    case 0b00010000:
      acc_X_value = acc_X / 4096.0;
      acc_Y_value = acc_Y / 4096.0;
      acc_Z_value = acc_Z / 4096.0;
      break;
    case 0b00011000:
      acc_X_value = acc_X / 2048.0;
      acc_Y_value = acc_Y / 2048.0;
      acc_Z_value = acc_Z / 2048.0;
      break;
  }
}