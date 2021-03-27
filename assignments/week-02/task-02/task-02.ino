#define LED 0
#define BUTTON 1

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);
}

void loop() { digitalWrite(LED, !digitalRead(BUTTON)); }