#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int var = 10;
    int *pvar; // ponteito

    pvar = &var; // iniciar ponteiro
    cout << *pvar << endl;
    return 0;
}
