#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("Введите значение с датчика первой лампы: \n");
	scanf("%d", &a);
	printf("Введите значение с датчика второй лампы: \n");
	scanf("%d", &b);
	if ((a + b) % 2 != 0) {
		printf("СИРЕНА ЗАГОРЕЛАСЬ!!!");
	}
	else
	{
		printf("Сирена не горит");
	}
}