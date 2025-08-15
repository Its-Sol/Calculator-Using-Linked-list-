#ifndef CALCULATOR_H
#define CALCULATOR_H
#define ADD 1
#define SUBTRACT 2
#define DIVISION 3
#define MULTIPLY 4
int add(int a, int b) {return a + b;}

int subtract(int a, int b) {return a - b;}

int division(int a, int b) {return (a / b > 0) ? a / b : 0;}

int multiply(int a, int b) {return a * b;}	
#endif
