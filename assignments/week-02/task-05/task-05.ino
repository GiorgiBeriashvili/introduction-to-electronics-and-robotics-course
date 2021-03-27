#define RED 3
#define GREEN 5
#define BLUE 6
#define RED_BUTTON 0
#define GREEN_BUTTON 1
#define BLUE_BUTTON 2

struct RGB {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} rgb;

void colorize(uint8_t pin, uint8_t value) { analogWrite(pin, value); }

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(RED_BUTTON, INPUT_PULLUP);
    pinMode(GREEN_BUTTON, INPUT_PULLUP);
    pinMode(BLUE_BUTTON, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(RED_BUTTON) == LOW) {
        colorize(RED, ++rgb.red);

        delay(5);
    }

    if (digitalRead(GREEN_BUTTON) == LOW) {
        colorize(GREEN, ++rgb.green);

        delay(5);
    }

    if (digitalRead(BLUE_BUTTON) == LOW) {
        colorize(BLUE, ++rgb.blue);

        delay(5);
    }
}