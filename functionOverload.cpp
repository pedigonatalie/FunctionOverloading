// function overloading example
// june 22 2022

#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main() {


	cout << sum(1, 2) << endl;
	cout << sum(2.2, 6.3) << endl;
	cout << sum(3.1, 2, 4.2) << endl;

	system("pause>0");

}

int sum(int a, int b) {

	return a + b;
}

double sum(double a, double b) {

	return a + b;
}

float sum(float a, float b, float c) {

	return a + b + c;
}