#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 

int main()
{
	setlocale(LC_CTYPE, "RUS");
	double x, y, z, a;
	x = -15.246;
	y = 4.642 * pow(10, -2);
	z = 20.001 * pow(10, 2);

	double res1 = -sqrt(fabs(x));
	double res2 = pow(y, res1);
	double res3 = log(res2);
	double res4 = x - y / 2;
	double res5 = atan(z);
	double res6 = sin(res5) * sin(res5);
	a = res3 * res4 + res6;
	printf("Результат вычисления: %fe", a);
}