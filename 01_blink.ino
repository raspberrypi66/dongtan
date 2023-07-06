int led_pin = 26;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin,1);
  delay(1000);
  digitalWrite(led_pin,0);
  delay(1000);

}
