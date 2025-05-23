# UART-transmitter-using-a-button-AVR-C-

This project demonstrates how to use UART communication on an AVR microcontroller (like ATmega328P) to send messages over serial based on the state of a digital input pin. When a button is pressed, it sends `"Hello"` over UART; when released, it sends `"Bye"`.

---

## Features

1- UART transmission at 9600 baud
2- Button input using internal pull-up resistor
3- Periodic message sending every 500 ms
4- Compatible with ATmega328P and other AVR chips

---

## Requirements

- AVR microcontroller (e.g., ATmega328P)
- USB to UART converter or Arduino as Serial Monitor
- AVR toolchain (e.g., `avr-gcc`, `avrdude`)
- Serial terminal (e.g., PuTTY, Tera Term, Arduino Serial Monitor)

---

## Circuit Setup

ATmega328P           USB-TTL Adapter           Computer
------------         ------------------        --------
PD1 (TX)     ───────▶ RX                       COM Port
PD0 (RX)     ◀─────── TX                       (optional)
GND          ───────▶ GND                      GND


### Button Wiring
- Connect **one side** of a push-button to **PD0 (pin 2)**.
- Connect the **other side** to **GND**.
- No external pull-up resistor needed (enabled in code).

---

## License
MIT license
