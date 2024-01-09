#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um número NÃO NEGATIVO, PAR e MENOR que 5:\n";
    int valor;
    cin >> valor;

    if (valor < 0 || valor > 5)
    {
        cout << "Errado!\n";
    }
    if (valor < 5 && valor > 0)
    {
        if (valor == 2 || valor == 4)
        
            cout << "Certo!\n";
        if (valor == 1 || valor == 3)

            cout << "Errado!\n";
        }

    return 0;
}
