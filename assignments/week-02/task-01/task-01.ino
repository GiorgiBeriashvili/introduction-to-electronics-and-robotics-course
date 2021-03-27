#define RED 0
#define GREEN 1
#define BLUE 2

uint8_t colors[] = {RED, GREEN, BLUE};
uint8_t size = (sizeof(colors) / sizeof(*colors));

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void loop() {
    for (uint8_t index = 0; index < size; index++) {
        digitalWrite(colors[index], HIGH);

        delay(1000);

        digitalWrite(colors[index], LOW);
    }
}