#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("������� �������� � ������� ������ �����: \n");
	scanf("%d", &a);
	printf("������� �������� � ������� ������ �����: \n");
	scanf("%d", &b);
	if ((a + b) % 2 != 0) {
		printf("������ ����������!!!");
	}
	else
	{
		printf("������ �� �����");
	}
}