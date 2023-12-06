#include  <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int tamanho_vetor = 400;
    int vetor[tamanho_vetor]; // vetor com 400 posições

    cout << "Digite os valores (em jogada com 4 dados): " << endl;

    for (int i = 0; i < tamanho_vetor; i = i + 4)
    {
        cout << "Jogada " << (i / 4) + 1 << ":\n\n"; 

        for (int j = 0; j < 4; ++j)
        {
            cout << "Dado " << j + 1 << ": ";
            cin >> vetor[i + j];
        }

        cout << "\n" << endl;
    }      

    // // Você pode, opcionalmente, imprimir os valores armazenados
    // cout << "Valores armazenados: ";
    // for (int i = 0; i < tamanho_vetor; ++i)
    // {
    //     cout << vetor[i] << " ";
    // }
    // cout << endl;

    return 0;
}
