#include<stdio.h>
#include<math.h>

void main() {

    double PI = 3.14159, raio;

    scanf("%lf", &raio);

    printf("VOLUME = %.3lf\n", (4 / 3.0) * PI * pow(raio, 3));

}