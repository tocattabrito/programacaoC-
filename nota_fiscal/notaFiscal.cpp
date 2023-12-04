#include <iostream>
#include <cstdlib> // biblioteca responsável por limpar a tela

using namespace std;

// variáveis
int qtde, cod;
double vlTotal;

// funções

void cabecalho ()
{
    cout << "" << endl;
    cout << "Imãos Silva Supermecados Ltda " << endl;
    cout << "CNPJ:  11.023.654 / 0001 - 09 " << endl;
    cout << "IE: 028998758 FONE:(81) 3485-2356"<< endl;
    cout << "Rua dos coqueiros, 367, Candeias,\nJABOATÃO DOS GUARARAPES, PERNAMBUCO \n" << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "DOCUMENTO AUXILIAR DA NOTA FISCAL DE CONSUMIDOR \nELETRONICA\n" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "" << endl;
}

void lista()
{
    cout << "CODIGO       DESCRICAO QTDE UN VL.UNIT VL.TOTAL" << endl;
    cout << cod << endl;
}

int itensLista(int qtde, double vlUnit)
{
    double vlTotal;
    
    vlTotal = qtde * vlUnit;

    return vlTotal;
}

int main(int argc, const char** argv) {

    

    

    // cabecalho();
    // lista();

    cout << "Digite o codigo: " << endl;
    cin >> cod;
    system("clear");    // limpar a tela

    cout << "Codigo \n"<<  cod << endl;

    return 0;
}