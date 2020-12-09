# CS207Fall2020
Repository of Jeet Patel and Rishit Patel for CS207-Fall 2020.

Introduction

We have seen nowadays that many people take their babies with them in the car for shopping.
We have also seen that sometimes people leave their babies in the car while they have to go
just for a few minutes to buy some stuff, but this can be dangerous for their babies inside the
car. The weather outside whether too hot or too cold can affect the temperature inside the car
and can be harmful for the baby. So, we have made this Life Saver system that could help to
save the life of the baby inside the car by alerting and notifying the people around the car that
the life of the baby is in danger.
In this project we will be using the Arduino UNO kit and Arduino IDE software to develop the
“Life Saver” system which has motion sensors to detect the motion of car and baby, the
temperature sensor to measure the temperature inside the car, a buzzer and LEDs to notify the
people. Also, we have used an LCD Display to display the temperature of the car.

Project Information

So, in this project we have used 2 PIR motion based sensors, one DHT temperature sensor,
one LCD Display, LED lights, one buzzer, resistors , some jumper wires and two arduinos. So,
we have attached two LEDs , one buzzer and the car sensor. In the second arduino we have
connected the LCD Display and the baby sensor. So, when the car is moving, the car sensor
will detect the motion of the car and the green light will be turned on and the serial monitor will
display “Car is running”. When the car is stopped the serial monitor will display “Car is stopped”.
When the mother leaves her baby inside the car, the baby sensor will detect the baby and the
serial monitor will display “Car is stopped Baby is present”. So depending on the weather
outside the car, whether it’s hot or cold the temperature sensor will measure the temperature
and if it becomes too hot or too cold for the baby to survive, the emergency Red light will turn on
and the buzzer will start buzzing which will notify the people around the car that the baby’s life is
in danger. This will help save the baby's life.
3

Components Used In The Project:
1. Arduino UNO
The Arduino Uno is an open-source microcontroller board based on the Microchip
ATmega328P microcontroller and developed by Arduino.cc. The board is equipped with
sets of digital and analog input/output (I/O) pins that may be interfaced to various
expansion boards (shields) and other circuits. The board has 14 digital I/O pins (six
capable of PWM output), 6 analog I/O pins, and is programmable with the Arduino IDE
(Integrated Development Environment), via a type B USB cable.[4] It can be powered by
the USB cable or by an external 9-volt battery, though it accepts voltages between 7 and
20 volts.
4
2. Breadboard
A breadboard is a construction base for electronics. It is a block of plastic with a number
of tin plated phosphor bronze or nickel silver alloy spring clips. These clips are called tie
points or contact points. The spacing between these points is 0.1 inches. It has 1
positive and 1 negative rail on both the sides.
3. LCD Display
A LCD (Liquid Crystal Display) is a 16 x 2 digital display which has 16 columns and 2
rows and is used to display strings or numbers. In our project, we have used the display
to show the temperature detected by the DHT sensor of the car. We have also displayed
the name of our project on the LCD display. We can also use the potentiometer to adjust
the brightness of the LCD display.
5
4. Passive buzzer
It is a small buzzer with all the electronics on the bottom. It has two legs and any of it can
be used for positive and negative. It is used to create music from the sound signal
received via arduino. In our project we have used the speaker so as to buzz when the
baby is present in the car and the temperature becomes abnormal for the baby’s life. So
the buzzer will start buzzing and give an alert and notify surrounding people that the
baby’s life might be in danger.
6
5. Temperature sensor
A temperature sensor is a device that measures the temperature of the surrounding and
converts the input data into electronic data. In our project, we have used the temperature
sensor to show the temperature inside the car. Also, we have displayed the reading of
the temperature sensor on the LCD display.
6. PIR motion sensor
A passive infrared sensor is an electronic sensor that measures infrared light radiating
from objects. These sensors detect general movement of an object. In our project we
have used 2 PIR motion sensors, one to detect whether the car is moving or not and one
to detect whether the baby is present in the car.
7
7. LEDs
In our project we have used two LED lights of different colours, one of Red and one of
Green. The green light will remain on when the car is stopped and the baby is not
present or the car is running or the car is stopped and the baby is present but the
temperature is normal. The Red light turns on with the buzzer buzzing when the car is
stopped and the baby is present and the temperature is abnormal.
8
8. Resistors
Resistors are used to resist the flow of current in the circuit. In our project we have used
the resistors with the LEDs.
9. Jumper Wires
Jumper wires are used to connect the circuit. They have connector pins at both their
ends. They are of different types such as Male to Female, Male to Male and Female to
Female. They are connected in the breadboard to help with our connections.
9

Circuit Diagram

![Screenshot 2020-12-07 195149](https://user-images.githubusercontent.com/71801806/101568006-758dbc00-3997-11eb-9ad5-a6ee344dc214.png)

Test Procedure

Let’s assume a mother is going with her child to a shopping center. When she arrives at
the parking lot of the shopping centre the car stops and she has to go inside for only a
few minutes to buy some stuff. The life saver alarm will turn on and it will detect that the
car has stopped and if the baby is inside the car its sensor will detect that the baby is
inside the car. It's a good sunny day of summer and it is too hot outside or its a cold
freezing day of winter so when the car is heated up or freezes due to the warm or cold
air outside and the temperature inside the car goes up or down the default temperature
of the car the life saver alarm will start buzzing and the light will turn on notifying the
people around that baby’s life is in danger. This will help save baby’s life
