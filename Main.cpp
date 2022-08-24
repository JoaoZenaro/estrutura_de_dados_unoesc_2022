// #include <locale.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Helper.h"

using namespace std;

void separador()
{
    cout << "--------------------------------------------------- \n";
}

int main()
{
    int op;
    float n1,n2;

    // setlocale(LC_ALL, "portuguese");

    menu();
    cout << "Digite a operação desejada: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Digite o 1o numero: ";
        cin >> n1;
        cout << "Digite o 2o numero: ";
        cin >> n2;
        cout << "Soma: " << soma(n1,n2);
        break;
    case 2:
        cout << "Digite o 1o numero: ";
        cin >> n1;
        cout << "Digite o 2o numero: ";
        cin >> n2;
        cout << "Subtracao: " << subtracao(n1,n2);
        break;
    case 3:
        cout << "Digite o 1o numero: ";
        cin >> n1;
        cout << "Digite o 2o numero: ";
        cin >> n2;
        cout << "Multiplicacao: " << multiplicacao(n1,n2);
        break;
    case 4:
        cout << "Digite o 1o numero: ";
        cin >> n1;
        cout << "Digite o 2o numero: ";
        cin >> n2;
        cout << "Divisao: " << divisao(n1,n2);
        break;
    case 5:
        cout << "Digite o numero em graus celcius: ";
        cin >> n1;
        cout << "Fahrenheit: " << conversorGraus(n1);
        break;
    case 6:
        cout << "Digite o numero: ";
        cin >> n1;
        cout << "Fatorial: " << fatorial(n1);
        break;
    case 7:
        cout << "Digite o numero: ";
        cin >> n1;
        cout << "Digite a potencia: ";
        cin >> n2;
        cout << "Potencia: " << potencia(n1, n2);
        break;
    
    default:
        cout << "Invalido";
        break;
    }

    

    return 0;
}
