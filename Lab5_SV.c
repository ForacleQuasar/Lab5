#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define k  8.2
void main() {
	float x;
	int res;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите x\n");
	scanf("%f", &x);
	float b = sqrt(fabs(x));
	float a = pow(b, 4) + pow(k, 3);
	float y = pow(log(a), 3) + exp(-x);
	printf("Итоговое значение y:%6.2f\n", y);
	int A = (int)a;
	int B = (int)b;
	int C = (int)y;
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0)
		res = 1;
	else
		res = 0;
	printf("Условие выполнено %i\n", res);
}