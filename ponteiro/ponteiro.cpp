#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int var = 10;
    int *pvar; // ponteito

    pvar = &var; // iniciar ponteiro
    cout << *pvar << endl;


    // Alocando espaço na memoria

    int *vet = new int[10];
    int aux[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    cout << *(vet + 0) << endl;
    cout << *(vet + 1) << endl;
    cout << *(vet + 2) << endl;

    cout << *(aux + 0) << endl;
    cout << *(aux + 1) << endl;
    cout << *(aux + 2) << endl;
    return 0;
}
