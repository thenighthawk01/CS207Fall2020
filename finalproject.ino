#include <LiquidCrystal.h> // Include the library 'LiquidCrystal.h'

#include <dht.h>  // Include the library 'dht.h'

#define TempSen A0 // Define 'TempSen' as A0
#define redLED 11 // Define 'redLED' as 11
#define greenLED 13 // Define 'greenLED' as 13
#define speakerPin 10 // Define 'speakerPin' as 10
#define carsensor 2 // Define 'carsensor' as 2
#define babysensor 3  // Define 'babysensor' as 3
dht DHT;

int val = 0;  // Set the initial value of val as 0
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7; // Defines the pins for LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); // Creates LCD as an object

void setup() {
  pinMode(carsensor, INPUT);  // Define 'carsensor' as an input
  pinMode(babysensor, INPUT); // Define 'babysensor' as an input
  pinMode(redLED, OUTPUT); // Define 'redLED' as an output
  pinMode(greenLED, OUTPUT); // Define 'greenLED' as an output
  pinMode(speakerPin, OUTPUT); // Define 'speakerPin' as an output
  Serial.begin(9600); // Start the Serial monitor connection
  lcd.begin(16, 2); // Define the amount of coloums(16) and rows(2)

}

void loop() {
  DHT.read11(TempSen); // Read the temperature sensor
  Serial.print(DHT.temperature); // Print the temperature in the serial monitor
  lcd.setCursor(0, 0); // set the cursor to column 0, line 0
  lcd.print("Life Saver");  // Print 'Life Saver' (name of our project) on the LCD displau
  lcd.setCursor(0, 1); // set the cursor to column 0, line 1
  lcd.print("Temp = "); // Print 'Temp=' on the LCD display
  lcd.print(DHT.temperature); // Print the temperature on the LCD display
  lcd.println("C  "); // Print 'C' after the temperature on the LCD display
  delay(50); // Delay for 50 milliseconds
  Serial.print("    ");

  val = digitalRead(carsensor);  // read input value from the carsensor
  if (val == LOW) { // Take the value from carsnesor and when no motion is detected the following happens
    Serial.print("Car is stopped!");  // Prints 'Car is stopped' if no motion is detected by carsensor
    Serial.print("    ");
    digitalWrite(greenLED, HIGH); // Turn the 'greenLED' on
    val = digitalRead(babysensor);  // reads input value from the babysensor
    if (val == HIGH) {  // Take the value from babysensor and when motion is detected the following happens
      Serial.println("Baby Present"); // Prints 'Baby Present' if motion is detected by carsensor
      if (int(DHT.temperature) >= 29.00) { // Take the temperature and when it is more than 35 degrees the following happens
        digitalWrite(redLED, HIGH); // Turn the 'redLED' on
        digitalWrite(greenLED, LOW); // Turn the 'greeenLED' off
        tone(speakerPin, 2000); // Play a tone at the tempreature level and play it out of the speaker
        delay(50); // Delay for 50 milliseconds
        noTone(speakerPin); // Play no tone out of the speaker
      }
      if (int(DHT.temperature) <= 2.00) { // Take the temperature and when it is less than  degrees the following happens
        digitalWrite(redLED, HIGH); // Turn the 'redLED' on
        digitalWrite(greenLED, LOW); // Turn the 'greeenLED' off
         tone(speakerPin, 2000); // Play a tone at the tempreature level and play it out of the speaker
        delay(50); // Delay for 50 milliseconds
        noTone(speakerPin); // Play no tone out of the speaker
      }
    }
    else { // Take the value from babysensor and when no motion is detected the following happens
      Serial.println("No baby present");  // Prints 'No baby present' if no motion is detected by babysensor
      digitalWrite(redLED, LOW); // Turn the 'redLED' off
    }
  }
  else { // Take the value from carsensor and when motion is detected the following happens
    Serial.println("Car Running");  // Prints 'Car Running' if motion is detected by carsensor
    digitalWrite(redLED, LOW);  // Turn the 'redLED' off
    digitalWrite(greenLED, HIGH); // Turn the 'greenLED' on
  }
}
