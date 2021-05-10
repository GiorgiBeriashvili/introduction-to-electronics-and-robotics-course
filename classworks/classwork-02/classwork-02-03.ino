#define TRIG 12
#define ECHO 11

int ping_time;

void setup() {
    Serial.begin(9600);

    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);
}

void loop() {
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2000);

    digitalWrite(TRIG, HIGH);
    delayMicroseconds(15);

    digitalWrite(TRIG, LOW);
    delayMicroseconds(10);

    ping_time = pulseIn(ECHO, HIGH);
    ping_time = ping_time / (2 * 29);

    Serial.println(ping_time);

    delay(500);
}