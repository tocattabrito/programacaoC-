#include <iostream>

using namespace std;

void inverte(char nome[])
{
    // obtendo o tamanho da string
    int tamanho;

    for (tamanho = 0; nome[tamanho]; tamanho++);

    for (int i = tamanho - 1; i >= 0; i--)
        cout << nome[i];
}

int main(int argc, char const *argv[])
{
    char nome[] = "Joao Brito";

    inverte(nome);

    return 0;
}
