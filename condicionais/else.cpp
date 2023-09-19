#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Digite um número maior que zero\n";
    int valor;
    cin >> valor;
    if (valor > 0)
    {
        cout << "Certo\n";
    } else {
        cout << "Errado\n";
    }

    return 0;
}
