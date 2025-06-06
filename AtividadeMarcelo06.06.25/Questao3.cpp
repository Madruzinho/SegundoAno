/*Questão 3
Desenvolver um programa em C++ que contenha uma função recursiva que calcule e devolva ao programa principal esse número natural convertido para
base binária. Para receber por parâmetro um número inteiro em base decimal, este parâmetro deverá ser do tipo int. Para retornar o valor convertido em
base binária, utilizar como tipo de retorno da função: unsigned long long int*/

#include <iostream>

using namespace std;

unsigned long long int ConverteBin(int A) {
    if ( A / 2 == 0) 
        return A % 2;
    return A % 2 + ConverteBin(A/2) * 10;
}

int main() {

    int A;
    cout << "Informe um numero natural: ";
    cin >> A;
    cout << ConverteBin(A);

    return 0;
}