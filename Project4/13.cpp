#include <stdio.h>
 double add(double left, double right)
{
	return left + right;
}
double subtract(double left, double right)
{
	return left - right;
}
void operate(double left, double right, double (*operate)(double, double))
{
	double result = operate(left, right);
		printf("sonuc %10.6f", result);
}
int main() {
	double left = 3;
	double right = 4;
	double result = -1;

	operate(left, right, add);
	operate(left, right, subtract);

	return 0;
}