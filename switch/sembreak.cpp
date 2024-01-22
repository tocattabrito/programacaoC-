#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char valor;
    cout << "Digite \'A\' ou \'O\':\n";
    cin >> valor;
    switch (valor)
    {
    case 'a':
    case 'A':
    case 'o':
    case 'O':
        cout << "Certo!\n";
        break;

    default:
        cout << "Errado!\n";
        break;
    }
    return 0;
}
