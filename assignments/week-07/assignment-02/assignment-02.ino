#define RED 0
#define GREEN 1
#define POTENTIOMETER 0
#define THRESHOLD (1 << 9) - 1

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
}

void loop() {
    if (analogRead(POTENTIOMETER) < THRESHOLD) {
        digitalWrite(RED, HIGH);
        digitalWrite(GREEN, LOW);
    } else {
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, HIGH);
    }
}