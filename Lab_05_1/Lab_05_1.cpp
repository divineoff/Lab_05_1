#include <iostream>
#include <cmath>
using namespace std;
double f(const double a); // прототип
int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double c = (f(3) + f(x + 1) + 1) / (1 - pow(f(y + 1), 2));
	cout << "c = " << c << endl;
	return 0;
}
double f(const double a) // визначення
{
	return ((a * a + 1) / (pow(sin(a), 2) + 1));
}