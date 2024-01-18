#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valor;
    cout << "Escolha um:\n";
    cout << "1.Ditados originais\n";
    cout << "2.Ditados em versão humoristica\n";
    cin >> valor;
    switch (valor) 
    {
        case 1:
            cout << "Escolha um :\n";
            cout << "1. Frase 1\n";
            cout << "2. Frase 2\n";
            cin >> valor;
            switch (valor)
            {
                case 1:
                    cout << "Água mole, pedra dura, tanto bate até que fura.\n";
                    break;
                case 2:
                    cout << "Em terra de cego, que tem um olhor é rei.\n";
                    break;
                
                default:
                    cout << "Digite apenas 1 ou 2!|\n";
                    break;
            }
            break;
        case 2:
            cout << "Escolha um :\n";
            cout << "1. Frase 1\n";
            cout << "2. Frase 2\n";
            cin >> valor;
            switch (valor)
            {
            case 1:
                cout << "Água mole, pedra dura, tanto bate até que fura.\n";
                break;
            case 2:
                cout << "Em terra de cego, que tem um olhor é rei.\n";
                break;

            default:
                cout << "Digite apenas 1 ou 2!|\n";
                break;
            }
           
        }
    return 0;
}