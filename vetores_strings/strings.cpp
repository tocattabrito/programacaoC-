#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char nome[] = {'B', 'r', 'i', 't', 'o', '\0'};
    // cout << nome << endl;
    int i = 0;

    while (nome[i])
    {
        cout << nome[i];
        i++;
    }
    cout << "\n";

    return 0;
}
