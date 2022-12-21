// define the pin used for analog read of the battery voltage
#define VDET_2 35

int analogValueVDET_2;
float analogVoltsVDET_2;

void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  
  //set the resolution to 12 bits (0-4096)
  analogReadResolution(12);
}

void loop() {
  // VDET_2 will read aproximative 1/3 of the battery level
  analogValueVDET_2 = analogRead(VDET_2);
  analogVoltsVDET_2 = analogValueVDET_2 * 3.43;
  
  // print out the values you read:
  Serial.printf("ADC analog VDET_2 value = %d\n",analogValueVDET_2);
  Serial.printf("Battery millivolts value = %f\n",analogVoltsVDET_2);
  
  delay(10000);  // delay in between reads for clear read from serial
}
