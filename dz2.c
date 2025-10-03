#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int he, an, ko;      
    double g = 9.81;     
    double a_rad, L, a, t, V;

    printf("������� ������ ����� (he): ");
    scanf("%d", &he);
    printf("������� ���� ������� (an � ��������): ");
    scanf("%d", &an);
    printf("������� ����������� ������ (ko): ");
    scanf("%d", &ko);
 
    a_rad = an * 3.14 / 180.0;
    L = he / sin(a_rad);
    a = g * (sin(a_rad) - ko * cos(a_rad));

    if (a <= 0)
    {
        printf("���� �� ��������\n");
    }
    else
    {
        t = sqrt(2 * L / a);
        V = sqrt(2 * a * L);

        printf("����� ��������� L = %.2f\n", L);
        printf("��������� a = %.2f\n", a);
        printf("����� �������� t = %.2f\n", t);
        printf("�������� V = %.2f\n", V);
    }

    return 0;
}