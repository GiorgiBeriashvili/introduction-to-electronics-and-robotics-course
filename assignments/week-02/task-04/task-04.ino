#define RED 3
#define GREEN 5
#define BLUE 6

struct RGB {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} rgb;

uint8_t *colors[] = {&rgb.red, &rgb.green, &rgb.blue};

uint8_t value;

void colorize(struct RGB rgb) {
    analogWrite(RED, rgb.red);
    analogWrite(GREEN, rgb.green);
    analogWrite(BLUE, rgb.blue);
}

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void loop() {
    for (uint8_t index = 0; index < 3; index++) {
        for (value = 0; value < 255; value++) {
            *colors[index] = value;

            colorize(rgb);

            delay(5);
        }

        delay(250);

        for (value = 255; value > 0; value--) {
            *colors[index] = value;

            colorize(rgb);

            delay(5);
        }

        delay(250);
    }
}