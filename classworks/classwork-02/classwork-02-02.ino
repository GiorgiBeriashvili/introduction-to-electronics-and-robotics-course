void setup() {
    Serial.begin(9600);

    pinMode(6, OUTPUT);
}

void loop() {
    int sensor_value = analogRead(A1);

    Serial.println(sensor_value);

    if (sensor_value > 500) {
        digitalWrite(6, HIGH);
    } else {
        digitalWrite(6, LOW);
    }
}