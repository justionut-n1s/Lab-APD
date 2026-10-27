float convertAdcToVoltage(int rawAdc) {
return (rawAdc * 5.0f) / 1023.0f;
}