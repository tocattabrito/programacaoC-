#include <iostream>

using namespace std;

int main()
{
    int life = 100; // representa que a energia do personagem esta 100%

    cout << "Você tem " << life << " de vida\n\n";
    cout << "Você levou um tiro!\n";

    life = life - 55; // diminui a energia do personagem

    cout << "Agora você tem " << life << " de vida!\n\n";
    cout << "Você pegou uma caixa de vida!\n";

    life = life + 20; // aumentou a energia do personagem

    cout << "Agora você tem " << life << " de vida\n\n";

    
    
    return 0;
}
