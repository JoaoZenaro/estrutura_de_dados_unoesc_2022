#include <cmath>

float soma(float n1, float n2){
    return n1+n2;
}

float subtracao(float n1, float n2){
    return n1-n2;
}

float multiplicacao(float n1, float n2){
    return n1*n2;
}

float divisao(float n1, float n2){
    return n1/n2;
}

float conversorGraus(float n1){
    return n1 * 1.8 + 32;
}

float fatorial(float n1){
    float res = 1;
    for (int i = n1; i > 1; i--)
    {
        res *= i;
    }
    return res;
}

float potencia(float n1, float n2){
    float temp = n1;

    for (int i = 0; i < (n2-1); i++)
    {
        n1 *= temp;
    }

    return n1;
}
