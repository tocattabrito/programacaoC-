#include <iostream>

using namespace std;

int main()
{
    int bonus = 10;
    int EXP = 5;

    int HP = ((EXP * 2)-1) + bonus;
    cout << "HP: " << HP << endl;   // Health Points: 19
    int MP = ((EXP * 3) + bonus) / 2; // Magic Points: 12
    cout << "MP: " << MP << endl;

    return 0;
}