#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int he, an, ko;      
    double g = 9.81;     
    double a_rad, L, a, t, V;

    printf("Введите высоту горки (he): ");
    scanf("%d", &he);
    printf("Введите угол наклона (an в градусах): ");
    scanf("%d", &an);
    printf("Введите коэффициент трения (ko): ");
    scanf("%d", &ko);
 
    a_rad = an * 3.14 / 180.0;
    L = he / sin(a_rad);
    a = g * (sin(a_rad) - ko * cos(a_rad));

    if (a <= 0)
    {
        printf("Тело не движется\n");
    }
    else
    {
        t = sqrt(2 * L / a);
        V = sqrt(2 * a * L);

        printf("Длина наклонной L = %.2f\n", L);
        printf("Ускорение a = %.2f\n", a);
        printf("Время движения t = %.2f\n", t);
        printf("Скорость V = %.2f\n", V);
    }

    return 0;
}