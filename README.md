# C++ Unit Converter and Matrix Calculator

This is a menu-driven C++ program that provides a Unit Converter, a Matrix Calculator, and an activity logging feature. Users can convert between various units, perform matrix operations, and view a history of their actions, which are logged to a file. The program demonstrates object-oriented programming with class inheritance and file I/O in C++.

## Features

1. **Unit Converter**:
   - Converts units for:
     - Weight: grams to kilograms and pounds.
     - Length: centimeters to meters, kilometers, feet, and inches.
     - Volume: liters to milliliters and gallons.
     - Speed: km/h to mph.
     - Data: bytes to kilobytes, megabytes, gigabytes, and terabytes.
     - Time: seconds to hours, minutes, and seconds.
     - Temperature: Celsius to Fahrenheit.
   - Uses a class hierarchy with a base `converter` class and derived classes for each unit type.

2. **Matrix Calculator**:
   - Supports matrix operations:
     - Addition: Adds two matrices of the same size.
     - Subtraction: Subtracts two matrices of the same size.
     - Multiplication: Multiplies two matrices (if compatible).
     - Transpose: Transposes a matrix.
   - Implemented using a `matrix` class with dynamic array sizing.

3. **Activity Logging**:
   - Logs user actions (e.g., conversions, matrix operations) and results to `activity_log.txt`.
   - Displays the log history via the "Display History" option in the main menu.

## Prerequisites

- A C++ compiler (e.g., `g++` via MinGW on Windows).
- A Windows environment or Unix-like environment (Linux, macOS).

## Installation

1. Clone the repository:
   git clone https://github.com/vishrutchawda/cpp-unit-matrix-calculator.git
   cd cpp-unit-matrix-calculator

2. Compile the program:

	g++ main.cpp -o program

3. Run the program:
     
     program.exe
   

Usage :- 
Run the program to see the main menu.
Enter a number (1–4) to select an option, or 4 to exit:
1. Converter: Choose a unit type (1–7) and input a value to convert.
2. Matrix Calculator: Select an operation (1–5) and input matrix dimensions and elements.
3. Display History: View the log of all actions and results stored in activity_log.txt.
4. Exit: Close the program.
Follow the on-screen prompts for each module:
Unit Converter: Enter values (e.g., grams for weight) and view converted results.
Matrix Calculator: Input matrix dimensions and elements; ensure valid dimensions for operations (e.g., same size for addition/subtraction, compatible for multiplication).
Display History: Displays all logged actions if the log file exists.



Limitations :-
Matrix operations use variable-length arrays (VLAs), which are not standard in C++ and may not be supported by all compilers.
Input validation is minimal; invalid inputs (e.g., non-numeric values) may cause unexpected behavior.
Unit conversions are one-directional (e.g., grams to kg/pounds, not vice versa).
Terminal color codes (\033) may not display correctly on some systems, especially certain Windows terminals.
The activity log (activity_log.txt) is cleared when the program starts.


License
This project is licensed under the MIT License. See the LICENSE file for details.

Author
Vishrut Chawda


GitHub :-  https://github.com/vishrutchawda

LinkedIn :- www.linkedin.com/in/vishrut-chawda-899898342


