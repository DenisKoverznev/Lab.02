#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double cos_series(double x) {
    double sum = 1, term = 1;
    for (int n = 1; n <= 7; n++) {
        term *= -x * x / (2 * n * (2 * n - 1));
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%.10f\n", cos_series(x));
    return 0;
}
