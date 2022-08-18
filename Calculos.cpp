#include <stdio.h>
#include "Calculos.h"

void soma()
{
    int a = 0;
    int b = 0;
    int soma = 0;


    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    soma = a + b;

    printf("A soma � %d\n", soma);
    
}

void subtracao()
{
    int a = 0;
    int b = 0;
    int sub = 0;


    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    sub = a - b;

    printf("A subtracao eh %d\n", sub);
}

void multiplicacao()
{
    int a = 0;
    int b = 0;
    int res = 0;


    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    res = a * b;

    printf("A multiplicacao eh %d\n", res);
}


void divisao()
{
    int a = 0;
    int b = 0;
    int res = 0;


    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    res = a / b;

    printf("A divisao eh %d\n", res);
}