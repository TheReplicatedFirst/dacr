#include <stdio.h>

int main() {
    double P = 0.0;
    double r = 0.0;
    int t = 0;

    printf("Введіть початкову суму (грн): ");
    scanf("%lf", &P);

    printf("Введіть річну ставку (%%): ");
    scanf("%lf", &r);

    printf("Введіть кількість років: ");
    scanf("%d", &t);

    double factor = 1.0 + r / 100.0;
    double S = P;
    for (int year = 0; year < t; year++) {
        S *= factor;
    }
    
    double profit = S - P;

    printf("Кінцева сума: %.2f грн\n", S);
    printf("Нарахований прибуток: %.2f грн\n", profit);

    return 0;
}