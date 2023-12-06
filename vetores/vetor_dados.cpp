#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int tamanho_vetor = 400;
    int vetor[tamanho_vetor]; // vetor com 400 posições

    cout << "Digite os valores (em jogada de 4 dados): " << endl;

    for (int i = 0; i < tamanho_vetor; i += 4)
    {
        cout << "Jogada " << (i / 4) + 1 << ":\n";
        for (int j = 0; j < 4; ++j)
        {
            cin >> vetor[i + j];
        }
    }

    // // Você pode, opcionalmente, imprimir os valores armazenados
    // cout << "Valores armazenados: ";
    // for (int i = 0; i < tamanho_vetor; ++i)
    // {
    //     cout << vetor[i] << " ";
    // }
    // cout << endl;

    // return 0;
}
