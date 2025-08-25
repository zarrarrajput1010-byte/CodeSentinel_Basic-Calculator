#include <iostream>
using namespace std;

int main() {
	double num1, num2, result;
	char op;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter operator (+, -, *, /): ";
	cin >> op;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	if (op == '+') {
		result = num1 + num2;
		cout << "Result: " << result << endl;
	}
	else if (op == '-') {
		result = num1 - num2;
		cout << "Result: " << result << endl;
	}
	else if (op == '*') {
		result = num1 * num2;
		cout << "Result: " << result << endl;
	}
	else if (op == '/') {
		if (num2 == 0) {
			cout << "Error: Division by zero is not allowed." << endl;
		}
		else {
			result = num1 / num2;
			cout << "Result: " << result << endl;
		}
	}
	else{
		cout << "Invalid operator." << endl;
	}
	
	return 0;
}