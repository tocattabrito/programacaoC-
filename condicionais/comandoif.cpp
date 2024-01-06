#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um número diferente de zero\n";
    int valor;
    cin >> valor;

    if (valor == 0)
    {
        cout << "O valor é igual a 0 Errado!\n";
    }
    if (valor != 0)
    {
        cout << "Valor é diferente de 0! Certo\n";
    }

    return 0;
}
