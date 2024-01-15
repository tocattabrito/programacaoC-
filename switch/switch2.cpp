#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valor;
    cout << "Escolha um e digite o número correspondente:\n";
    cout << "1. frase 1\n";
    cout << "2. frase 2\n";
    cout << "3. frase 3\n";
    cin >> valor;
    switch (valor)
    {
    case 1:
        cout << "Água mole, pedra dura, tanto bate até que fura.\n";
        break;
    case 2:
        cout << "Em terra de cego, quem tem um olho é rei.\n";
        break;
    case 3:
        cout << "Quando achei as respostas, mudaram as perguntas.\n";
        break;

    default:
        cout << "Digite apenas 1, 2 ou 3!\n";
        break;
    }
    return 0;
}
