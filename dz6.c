#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int N;
	printf("Введите число N, где N < 1000: ");
	scanf("%d", &N);
	if (N >= 1000)
	{
		printf("Ошибка, N должно быть меньше 1000\n");
	}
	else {
		int a = N / 100;
		int b = (N / 10) % 10;
		int c = N % 10;
		int  sum = a + b + c;
		if (sum >= 10)
		{
			printf("Сумма цифр числа %d является двухзначным: %d", N, sum);
		}
		else
		{
			printf("Cумма цифр числа %d является однозначным: %d", N, sum);
		}
	}

	}
	