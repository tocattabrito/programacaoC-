#include <iostream>
#include <iomanip> // Para usar a formatação de saída
#include <cstdlib>

using namespace std;

// Estrutura para representar um item da nota fiscal
struct Item
{
    int cod;
    string descricao;
    int qtde;
    double vlUnit;
};

// Variáveis globais
double vlTotal = 0.0; // Inicializa o valor total

// Protótipo da função
double adicionarItem(Item &item);

// Funções

void cabecalho()
{
    cout << "" << endl;
    cout << "Imãos Silva Supermecados Ltda " << endl;
    cout << "CNPJ: 11.023.654 / 0001 - 09 " << endl;
    cout << "IE: 028998758 FONE:(81) 3485-2356" << endl;
    cout << "Rua dos coqueiros, 367, Candeias,\nJABOATÃO DOS GUARARAPES, PERNAMBUCO \n"
         << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "DOCUMENTO AUXILIAR DA NOTA FISCAL DE CONSUMIDOR \nELETRONICA\n"
         << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "" << endl;
}

void lista(int cod, const string& descricao, int qtde, double vlUnit, double vlTotalItem)
{
    // Exibe a lista com os rótulos
    cout << "CODIGO       DESCRICAO QTDE UN VL.UNIT VL.TOTAL" << endl;

    // Exibe o item abaixo dos rótulos
    cout << setw(5) << cod << "        " << setw(10) << descricao << setw(4) << qtde << " UN R$ " 
    << setw(6) << vlUnit << " R$ " << setw(6) << vlTotalItem << endl;
}

void inserirDados(){ // programa em analise
    cout << "---Inserir de Dados-------------------" << endl;
}
// Implementação da função
double adicionarItem(Item &item)
{
    double vlTotalItem = item.qtde * item.vlUnit;
    vlTotal += vlTotalItem; // Adiciona ao valor total global
    return vlTotal;     // Retorna o valor total do item
}

void exibirResumo()
{
    cout << "-----------------------------------------------" << endl;
    cout << "VALOR TOTAL: R$ " << fixed << setprecision(2) << vlTotal << endl;
    cout << "-----------------------------------------------" << endl;
}

int main()
{
    // cabecalho();
    inserirDados();
    // Simulação de adição de itens
    for (int i = 0; i < 3; ++i)
    {
        Item item; // Cria uma instância da estrutura Item para representar um produto

        cout << "Digite o código do produto: ";
        cin >> item.cod;
        

        cout << "Digite a descrição do produto: ";
        cin.ignore(); // Limpa o buffer de entrada para evitar problemas com getline
        getline(cin, item.descricao);
        

        cout << "Digite a quantidade: ";
        cin >> item.qtde;
  

        cout << "Digite o valor unitário: ";
        cin >> item.vlUnit;
        system("clear");

              // Adiciona o item à lista e obtém o valor total do item
        double vlTotalItem = adicionarItem(item);

        lista(item.cod, item.descricao, item.qtde, item.vlUnit, vlTotalItem);

        // Aguarda uma tecla antes de prosseguir para o próximo item
        // cout << "\nPressione Enter para continuar...";
        // cin.ignore();
        // cin.get();
    }

    // Exibe o resumo final
   
    exibirResumo();

    return 0;
}
