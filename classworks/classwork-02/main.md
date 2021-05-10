# პრაქტიკული დავალება #02

## ტემპერატურის საზომი სენსორი

```c
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
```

![ტემპერატურის საზომი სენსორი](2021-05-10-18-52-51.png)

## სახანძრო განგაში (Flame Sensor)

```c
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
```

![სახანძრო განგაში (Flame Sensor)](2021-05-10-18-54-22.png)

## მანძილის საზომი სენსორი

```c
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
```

![მანძილის საზომი სენსორი](2021-05-10-18-55-17.png)
