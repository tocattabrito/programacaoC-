#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // declarando um vetor com 100 posições
    int vetor[100];

    // exibindo o conteúdo do vetor
    for (int i = 0; i < 100; ++i) 
    {
        vetor[i] = i;
        cout << "Indice ["<< i <<"]: " << vetor[i] << endl;

        /*
            Resultado da saída:
            Indice [0]: 0
            Indice [1]: 1
            Indice [2]: 2
            Indice [3]: 3
            Indice [4]: 4
            Indice [5]: 5
            Indice [6]: 6
            ...
            Indice [99]:99
        */

        /*
            Exemplo 2:
            int vetor[4] = {1, 2, 3, 4};

            for (int i = 0; i < 4; i++)
            {
                cout << "Vetor["<< i <<"]: " << vetor[i] << endl;
            }

        */
        /*
        int vetor[5] = {1, 2, 3, 4, 5};

        cout << sizeof(vetor) << endl
        
        */
    }
    return 0;
}
