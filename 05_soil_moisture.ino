int sensor_pin = 36;

void setup(){
  Serial.begin(115200);
  pinMode(sensor_pin,INPUT);
}

void loop(){

  float buffer_soil = 0;
  int sensorValue_soil_moisture = analogRead(sensor_pin);
  double voltageValue_soil_moisture = (sensorValue_soil_moisture * 3.3) / (4095.00);
  buffer_soil = mapf(voltageValue_soil_moisture,3.30,0.00,0.00,100.00);
  Serial.println(buffer_soil);
  delay(1000);
}

double mapf(double val, double in_min, double in_max, double out_min, double out_max) {
    return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
