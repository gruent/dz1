#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double d;

    printf("������� ���������� ������ ����� (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("������� ���������� ������ ����� (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("���������� ����� ������� (%.2f, %.2f) � (%.2f, %.2f) = %.2f\n",
        x1, y1, x2, y2, d);

    return 0;
}