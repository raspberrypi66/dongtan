int relay_pin[4] = {25, 4, 12, 13};
int button_pin = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  for(int i=0;i<4;i++){
    pinMode(relay_pin[i],OUTPUT);
  }
  
  pinMode(button_pin,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Button status : ");
  Serial.println(digitalRead(button_pin));
  for(int i=0;i<4;i++){
    digitalWrite(relay_pin[i],1);
    Serial.println(i);
    delay(1000);
  }
  for(int i=0;i<4;i++){
    digitalWrite(relay_pin[i],0);
  }

}
