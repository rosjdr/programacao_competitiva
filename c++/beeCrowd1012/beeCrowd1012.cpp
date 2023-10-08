#include <bits/stdc++.h>

using namespace std;

int main() {

    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", a*c/2);
    printf("CIRCULO: %.3lf\n", 3.14159*pow(c,2));
    printf("TRAPEZIO: %.3lf\n", (a+b)*c/2);
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n", a*b);

    return 0;
}