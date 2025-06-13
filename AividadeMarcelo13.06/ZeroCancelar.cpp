#include <iostream>

using namespace std;

class Pilha{
    private: 
        int num;
        Pilha *elo;
    public:
        Pilha* InserirPilha(Pilha *T, int N) {
            Pilha *aux = new Pilha();
            aux->num = N;
            aux->elo = T;
            T = aux;
            return T;
        };

        Pilha* RemoverPilha(Pilha *T) {
            Pilha *aux = T;
            T = T->elo;
            delete(aux);
            return T;
        };

        int SomarPilha(Pilha *T) {
            int Soma = 0;
            Pilha * aux = T;
            while (aux != NULL) {
                Soma += aux->num;
                aux = aux->elo;
            }
            return Soma;
            }
};

int main() {

    Pilha P, *topo = NULL;
    int num;
    do {
        cout << "Digite o numero: ";
        cin >> num;
        if(num > 0) {
            topo = P.InserirPilha(topo, num);
        } if (num == 0) {
            topo = P.RemoverPilha(topo);
        }

    } while (num != -1);

    cout << P.SomarPilha(topo);

    return 0;
}