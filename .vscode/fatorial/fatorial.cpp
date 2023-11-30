/*
    Cálculo fatorial
    0! = 1! = 1
    2! = 2*1 = 2
    3! = 3*2*1 = 6
    4! = 4*3*2*1 = 24
    5! = 5*4*3*2*1 = 120
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Entrada
    int num, fat = 1;
    cout << "Digite um numero: ";
    cin >> num;

    // Processamento
    for (int i = 1; i < num; i++)
    {
        fat = fat * (i + 1);
    }
    cout <<"Fatorial: " << fat << endl;
    

    // Saída
    return 0;
}
