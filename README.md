# UART-transmitter-using-a-button-AVR-C-

This project demonstrates how to use UART communication on an AVR microcontroller (like ATmega328P) to send messages over serial based on the state of a digital input pin. When a button is pressed, it sends `"Hello"` over UART; when released, it sends `"Bye"`.

---

## Features

1- UART transmission at 9600 baud
2- Button input using internal pull-up resistor
3- Periodic message sending every 500 ms
4- Compatible with ATmega328P and other AVR chips

---

## Technologies Used

- AVR Microcontroller
- USB to UART Converter
- AVR Toolchain
- Serial Terminal Software (Microship studio)

---

## Circuit Setup

| ATmega328P Pin | Connects To           | Description                        |
|----------------|------------------------|------------------------------------|
| PD0 (Pin 2)    | One side of a button   | Digital input with pull-up         |
| GND            | Other side of button   | Button completes circuit to ground |
| PD1 (TX, Pin 3)| USB-TTL RX             | UART Transmit line (to PC)         |
| GND            | USB-TTL GND            | Common ground                      |

---

### Button Wiring
- Connect **one side** of a push-button to **PD0 (pin 2)**.
- Connect the **other side** to **GND**.
- No external pull-up resistor needed (enabled in code).

---

## License
MIT license
