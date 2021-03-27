#define LED 3

uint8_t value;

void setup() { pinMode(LED, OUTPUT); }

void loop() {
    for (value = 0; value <= 255; value++) {
        analogWrite(LED, value);

        delay(5);
    }

    delay(250);

    for (value = 255; value >= 0; value--) {
        analogWrite(LED, value);

        delay(5);
    }

    delay(250);
}