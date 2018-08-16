#include<stdio.h>
#include<math.h>

void main() {

    double valorSacar;

    scanf("%lf", &valorSacar);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (int) valorSacar / 100);
    valorSacar -= ((int) valorSacar / 100) * 100;
    printf("%d nota(s) de R$ 50.00\n", (int) valorSacar / 50);
    valorSacar -= ((int) valorSacar / 50) * 50;
    printf("%d nota(s) de R$ 20.00\n", (int) valorSacar / 20);
    valorSacar -= ((int) valorSacar / 20) * 20;
    printf("%d nota(s) de R$ 10.00\n", (int) valorSacar / 10);
    valorSacar -= ((int) valorSacar / 20) * 20;
    printf("%d nota(s) de R$ 5.00\n", (int) valorSacar / 5);
    valorSacar -= ((int) valorSacar / 5) * 5;
    printf("%d nota(s) de R$ 2.00\n", (int) valorSacar / 2);
    valorSacar -= ((int) valorSacar / 2) * 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int) valorSacar / 1);
    valorSacar -= (int) valorSacar / 1;
    printf("%d moeda(s) de R$ 0.50\n", (int) (valorSacar / 0.5));
    valorSacar -= ((int) (valorSacar / 0.5)) * 0.5;
    printf("%d moeda(s) de R$ 0.25\n", (int) (valorSacar / 0.25));
    valorSacar -= ((int) (valorSacar / 0.25)) * 0.25;
    printf("%d moeda(s) de R$ 0.10\n", (int) (valorSacar / 0.1));
    valorSacar -= ((int) (valorSacar / 0.1)) * 0.1;
    printf("%d moeda(s) de R$ 0.05\n", (int) (valorSacar / 0.05));
    valorSacar -= ((int) (valorSacar / 0.05)) * 0.05;
    printf("%d moeda(s) de R$ 0.01\n", (int) round(valorSacar / 0.01));
}