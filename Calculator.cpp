#ifndef _Calculator_H_
#define _Calculator_H_

#include <iostream>
#include <math.h>
#include "Calculator.h"


int Calculator::factorielle(int a) {
	if(a < 0){
		std::cerr << "Negative input not possible\n";
		exit(255);
	}
	int fact = 1;
	int i = 1;
	while (i <= a) {
		fact *= i;
		i++;
	}
	return fact;
}

int Calculator::add(int a, int b) {
	return a + b;
}

int Calculator::sub(int a, int b) {
	return a - b;
}

double Calculator::div(double a, double b) {
	if(b == 0){
		std::cerr << "Error: Division by 0 not possible\n";
		exit(255);
	}
	return a / b;
}

double Calculator::multiplication(double a, double b) {
	return a * b;
}

#endif
