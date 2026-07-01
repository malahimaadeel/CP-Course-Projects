# Multi-Converter Program

A console-based unit converter built in C++. Handles currency, length, temperature, and weight conversions through a simple menu-driven interface.

## Features

- **Currency Converter** — PKR to USD, Euro, UAE Dirham, Saudi Riyal
- **Length Converter** — Miles↔Km, Meters↔Km, Yards↔Meters, Feet↔Inches
- **Temperature Converter** — Celsius, Fahrenheit, Kelvin (both directions)
- **Weight Converter** — Grams↔Milligrams, Kilograms↔Pounds, Ounces↔Carats, Grams↔Ounces
- Loop-based menu, runs until user exits

## Tech Stack

- C++
- Standard I/O streams (`iostream`)

## Example

```
==== Multi-Converter Program ====
1: Currency Converter
2: Length Converter
3: Temperature Converter
4: Weight Converter
5: Exit

Enter your choice: 3

== TEMPERATURE CONVERTER ==
1: Celsius to Fahrenheit
2: Fahrenheit to Celsius
3: Celsius to Kelvin
4: Fahrenheit to Kelvin
Enter choice: 1
Enter temperature: 25
25 C = 77 F
```

## Note

Currency conversion rates are fixed values set at the time of writing, used for demonstration purposes. For real-time rates, an API integration would be needed.

## Team

Built as a lab project for Introduction to Computing Fundamentals, Bahria University Karachi.

- Malahima Adeel
- Urooj Khan
- Heba Saqib
