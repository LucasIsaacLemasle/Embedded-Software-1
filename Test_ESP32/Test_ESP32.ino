
// Program to try the ESP32
// ========================

// Just make blink a LED 
// To read the good pin, just take out the letter and keep only the number

int green_LED=15;
int delay_time = 1000;


void setup() {
  pinMode(green_LED, OUTPUT);
  
}

void loop() {
  digitalWrite(green_LED, HIGH);
  delay(delay_time);
  digitalWrite(green_LED, LOW);
  delay(delay_time);
}
