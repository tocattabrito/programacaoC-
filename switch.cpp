#include <iostream>

using namespace std;

int main()
{
    int num = 10;

    switch (num)
    {
    case 9:
        cout << "número 9\n\n";
        break;
    case 10:
        cout << "número 10\n\n";
        break;
    case 11:
        cout << "número 11\n\n";
    default:
        cout << "número desconhecido\n\n";
        break;
    }

    return 0;
}