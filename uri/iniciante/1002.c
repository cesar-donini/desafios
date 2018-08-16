#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

    double raio, PI = 3.14159;
    
    scanf("%lf", &raio);

    printf("A=%.4lf\n", pow(raio, 2) * PI);
}