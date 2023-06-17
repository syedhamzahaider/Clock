# Clock Program in C++

This repository contains a C++ program that implements a clock. The program allows users to input the hours, minutes, and seconds, and then displays the current time in a continuous loop.

## Requirements

To compile and run the clock program, you need:

- C++ compiler (supporting C++11 or later)
- Windows operating system (as the code uses Windows-specific header files)

## How to Use

1. Clone or download the repository to your local machine.
2. Open the terminal or command prompt and navigate to the project directory.
3. Compile the code using the following command:

   ```bash
   g++ clock.cpp -o clock
   ```

4. Run the compiled executable:

   ```bash
   clock
   ```

5. The program will prompt you to enter the hours, minutes, and seconds for the clock.
6. Once you enter the values, the clock will start running and display the current time in a continuous loop.
7. To exit the program, press Ctrl + C in the terminal or command prompt.

## Program Details

The clock program is implemented using a C++ class named `clock`. It has the following main features:

- The `clock` class contains member variables to store the hours, minutes, seconds, and milliseconds of the clock.
- The `gettime` function takes user inputs for hours, minutes, and seconds, and then continuously updates and displays the time in a loop.
- The program uses the `dos.h`, `conio.h`, and `windows.h` header files for console manipulation and timing purposes. Please note that the code may not work on non-Windows systems or modern C++ compilers.

Please note that the program does not provide any user interface. It displays the time in the console window.

## Additional Functionality

The program includes commented-out code that allows you to calculate the addition of two clocks. By uncommenting the relevant lines, you can input two sets of hours, minutes, and seconds, and the program will display their sum.

## License

This clock program is released under the [MIT License](LICENSE). Feel free to use and modify it according to your needs.
