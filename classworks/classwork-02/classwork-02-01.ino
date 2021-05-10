void setup() { Serial.begin(9600); }

void loop() {
    double temperature;
    double sensor_value = analogRead(A3);

    temperature = ((sensor_value * 5) / 1024 - 0.5) * 100;

    Serial.print("The room temperature degree is: ");
    Serial.print(temperature, 1);
    Serial.println();

    delay(1);
}