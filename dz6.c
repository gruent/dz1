#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int N;
	printf("������� ����� N, ��� N < 1000: ");
	scanf("%d", &N);
	if (N >= 1000)
	{
		printf("������, N ������ ���� ������ 1000\n");
	}
	else {
		int a = N / 100;
		int b = (N / 10) % 10;
		int c = N % 10;
		int  sum = a + b + c;
		if (sum >= 10)
		{
			printf("����� ���� ����� %d �������� �����������: %d", N, sum);
		}
		else
		{
			printf("C���� ���� ����� %d �������� �����������: %d", N, sum);
		}
	}

	}
	