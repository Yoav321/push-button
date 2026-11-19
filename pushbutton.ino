/**
 * Demonstrates how to use the pushbutton to trigger another action, like lighting an LED 
 * @author First Last
 * @date Month Year
 */

const int buttonPin = 2;
const int ledPin = 9;

void setup() {
    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int buttonState = digitalRead(buttonPin);
    
    Serial.println(buttonState);
    
    if (buttonState == LOW) {
        digitalWrite(ledPin, HIGH);
    } 
    else {
        digitalWrite(ledPin, LOW);
    }

    delay(50);
}
