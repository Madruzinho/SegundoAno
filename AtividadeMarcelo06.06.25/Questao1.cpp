/* Questão 1
Desenvolver um programa em C++ que contenha uma função recursiva que receba por parâmetro dois números naturais (inteiros maiores que zero) e
calcula o mdc máximo divisor comum desses números. Obs.: Utilizar o método de Euclides para calcular o MDC */

#include <iostream>

using namespace std;

int MDC(int A, int B) {
    int r;
    while(A % B != 0) {
        r = A % B;
        A = B;
        B = r;
    }
    return B;
}

int MDCr(int A, int B) {
    if (A % B == 0) 
        return B;
    return MDCr(B, A%B);
}

int main() {
    int A, B;
    cout << "informe o primeiro numero: ";
    cin >>  A;
    cout << endl << "informe o segundo numero: ";
    cin >>  B;
    cout << endl << "o MDC é" << MDCr(A, B) << endl;

    return 0;
}