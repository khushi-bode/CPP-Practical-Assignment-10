# C++ Practical Assignment 10
## Class Template and Function Template

### Objective
Demonstrate generic programming in C++ by implementing:
- A class template named `Calculator` for addition and multiplication.
- A function template named `findMaximum()` to return the greater of two values.

### Files
- `main.cpp` — complete C++ source code.
- `output_screenshot.png` — screenshot-style image of the program output.
- `sample_output.txt` — plain-text sample output.

### Requirements
- C++ compiler supporting C++11 or later (for example, g++).
- No external libraries are required; the program uses the standard `iostream` header.

### Compile and run
```bash
g++ -std=c++11 main.cpp -o assignment10
./assignment10
```

On Windows with MinGW:
```bash
g++ -std=c++11 main.cpp -o assignment10.exe
assignment10.exe
```

### Concepts demonstrated
1. `Calculator<T>` stores two values of a generic type and provides `add()` and `multiply()`.
2. `findMaximum<T>()` compares two values of the same type and returns the greater value.
3. The class template is demonstrated with `int` and `double`.
4. The function template is demonstrated with `int`, `float`, and `char`.

### Expected checks
- Integer calculator: 10 + 5 = 15; 10 * 5 = 50.
- Double calculator: 2.5 + 1.5 = 4; 2.5 * 1.5 = 3.75.
- Character maximum: `findMaximum('A', 'Z')` returns `Z`.

### Note
The source assignment lists the integer, double, and character test cases. The function template is additionally demonstrated with float values, consistent with the practical's result/observation section.
