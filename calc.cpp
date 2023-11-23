/*
    Calculadora 
    Operações permitidas:
    + -> adição
    - -> subtração
    * -> multiplicação
    / -> divisão
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, resultado;
    float div;
    char op; // operação

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite  a operação: ";
    cin >> op;

    switch (op)
    {
    case '+':
        resultado = num1 + num2;
        cout << "Soma: " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Subtração: " << resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Multiplicação: " << resultado << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            div = (float)num1 / num2; // adição de cast
            cout << "Divisão: " << div << endl;
        } else {
            cout << "Divisão por zero!" << endl;
        }
        
        break;

    default:
        cout << "Operação inexistente\n\n"; 
        break;
    }

    return 0;
}