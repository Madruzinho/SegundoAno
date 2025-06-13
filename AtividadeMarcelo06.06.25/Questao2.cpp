/* Questão 2
Desenvolver um programa em C++ que contenha uma função recursiva que receba por parâmetro um número inteiro positivo N e calcula a soma dos
dígitos desse número. Por exemplo, se a entrada for 123, a saída deverá ser 6 (1+2+3).*/
#include <iostream>

using namespace std;

int SOMA(int A) {
    int soma = 0;

    while (A / 10 != 0) {
    soma += A % 10;
    A /= 10;
    }
    return soma += A;
}

int SOMAr(int A) {
    int soma = 0;
    if(A / 10 == 0) 
        return A % 10;
    return A % 10 + SOMAr(A / 10);
}

int main () {

    int A;
    cout << "informe o numero inteiro positivo: ";
    cin >> A;
    cout << SOMAr(A);
    return 0;
}