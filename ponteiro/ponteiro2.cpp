#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int *vetor = new int[10];
    int auxiliar[4];

    auxiliar[0] = 10;
    auxiliar[1] = 20;
    auxiliar[2] = 30;
    auxiliar[3] = 40;

    for (int i = 0; i < sizeof(auxiliar)/sizeof(int); i++)
    {
        cout << auxiliar[i] << endl;
    }

    return 0;
}
