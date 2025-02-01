# Casio fx-560ES Plus Simulator in C++

This C++ program simulates the functionality of a Casio fx-560ES Plus scientific calculator. It provides a menu-driven interface for performing various arithmetic operations, trigonometric functions, number system conversions, and variable storage/retrieval.

## Project Overview

This project demonstrates several important C++ concepts, including:

*   **Menu-Driven Interface:**  Creating an interactive menu for user input and navigation.
*   **Function Design and Modularity:**  Breaking down the program into smaller, manageable functions (e.g., `displayInterface`, `convertNumberSystem`, `saveAndRetrieveVariables`, `calculator`).
*   **Input/Output Operations:**  Handling user input and displaying results using `cin` and `cout`.
*   **Arithmetic Operations:**  Implementing basic arithmetic operations (addition, subtraction, multiplication, division, power, square root).
*   **Trigonometric Functions:**  Using the `<cmath>` library to perform trigonometric calculations (sine, cosine, tangent).
*   **Number System Conversion:**  Converting between decimal, binary, octal, and hexadecimal number systems using `<bitset>` and stream manipulators.
*   **String Manipulation:**  Using `<string>` and `<sstream>` to handle and format equations.
*   **Data Structures:**  Employing `<map>` to store and retrieve variables by name.
*   **Error Handling:**  Basic error handling for division by zero and square root of negative numbers.
*   **Output Formatting:** Using `<iomanip>` to control the precision of floating-point numbers in the output.

## Features

*   **Arithmetic Operations:** Addition, subtraction, multiplication, division, and exponentiation.
*   **Square Root:** Calculation of the square root of a number.
*   **Trigonometric Functions:** Sine, cosine, and tangent calculations (input in radians).
*   **Number System Conversion:** Conversion between decimal, binary, octal, and hexadecimal.
*   **Variable Storage and Retrieval:** Saving and recalling variable values using a name.
*   **Last Equation Storage:** Storing and displaying the last calculated equation.
*   **User-Friendly Interface:** A menu-driven interface for easy navigation.

## How It Works - A Detailed Explanation

1.  **Interface Display (`displayInterface`):**  Displays the calculator's menu with available operations and their corresponding numbers.

2.  **Number System Conversion (`convertNumberSystem`):**
    *   Takes a decimal number as input.
    *   Prompts the user to choose the target number system (binary, octal, or hexadecimal).
    *   Uses `bitset` for binary conversion and stream manipulators (`oct`, `hex`, `dec`) for octal and hexadecimal conversions.

3.  **Variable Management (`saveAndRetrieveVariables`):**
    *   Uses a `map` to store variables, where the key is the variable name (string) and the value is the variable's value (double).
    *   Allows the user to save a variable with a name and value or retrieve the value of a saved variable.

4.  **Calculator Logic (`calculator`):**
    *   The main function that drives the calculator's operations.
    *   Enters a loop that displays the interface and takes user input for the desired operation.
    *   Uses a `switch` statement to handle different operations based on the user's choice.
    *   For arithmetic operations, it takes two numbers as input, performs the calculation, and displays the result.
    *   Handles potential errors like division by zero and square root of a negative number.
    *   Stores the last calculated equation in the `lastEquation` string.
    *   Calls `convertNumberSystem` for number system conversions and `saveAndRetrieveVariables` for variable management.

5.  **Main Function (`main`):**
    *   Sets the output precision to 6 decimal places using `cout << fixed << setprecision(6);`.
    *   Calls the `calculator` function to start the calculator simulation.

## Future Enhancements

*   **More Operations:** Add more scientific calculator functions (e.g., logarithms, exponentiation, factorials, trigonometric functions in degrees, hyperbolic functions, etc.).
*   **Input Validation:** Implement robust input validation to handle invalid input (e.g., non-numeric input, invalid operation choices).
*   **Error Handling:** Enhance error handling to catch and handle potential exceptions or edge cases.
*   **User Interface Improvements:**
    *   **CLI Enhancements:** Explore libraries like `ncurses` for a more interactive command-line interface.
    *   **GUI:** Consider creating a graphical user interface using libraries like Qt or wxWidgets.
*   **Expression Evaluation:** Implement a more sophisticated expression parser to handle complex mathematical expressions (e.g., `2 + 3 * 4`).  This would significantly enhance the calculator's capabilities.
*   **Memory Functions:**  Implement memory functions (M+, M-, MC, MR) like a real calculator.
*   **History:**  Store a history of calculations and allow the user to access previous results.

## Technologies Used

*   **C++:** The primary programming language.
*   **Standard Template Library (STL):**  Utilizes various components of the STL, including `<iostream>` for input/output, `<cmath>` for mathematical functions, `<iomanip>` for output formatting, `<bitset>` for binary conversions, `<string>` and `<sstream>` for string manipulation, and `<map>` for storing variables.

## Conclusion

This Casio fx-560ES Plus simulator provides a good example of how to implement a menu-driven application with various mathematical and utility functions in C++. The suggested enhancements could make the program more feature-rich, robust, and user-friendly, bringing it even closer to a real-world calculator experience.  The project demonstrates effective use of several C++ language features and STL components.
