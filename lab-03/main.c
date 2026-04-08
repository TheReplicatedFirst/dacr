#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d;

    printf("Введіть коефіцієнти a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Рівняння має нескінченно багато розв'язків.\n");
            } else {
                printf("Рівняння не має розв'язків.\n");
            }
        } else {
            printf("Лінійне рівняння.\n");
            printf("x = %.2f\n", -c / b);
        }
    } else {
        d = b * b - 4 * a * c;
        printf("Дискримінант: D = %.2f\n", d);

        if (d > 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            printf("Два корені: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (d == 0) {
            double x = -b / (2 * a);
            printf("Один корінь: x = %.2f\n", x);
        } else {
            printf("Рівняння не має дійсних коренів.\n");
        }
    }

    return 0;
}