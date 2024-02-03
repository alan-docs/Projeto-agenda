#include <iostream>
#include "Pessoa.h"
#include "PessoaF.h"
#include "PessoaJ.h"
#include "Agenda.h"
#include <locale.h>


int main() {
    setlocale (LC_ALL, "Portuguese");
    Agenda agenda;
    // criando e inicializando os objetos Pessoa Fisica e Pessoa Juridica pelos construtures, posteriormente esses valores ser�o substituidos conforme as entradas do usuario
    PessoaF pessoaF("ExemploNome", "ExemploEndereco", "ExemploEmail", "ExemploCpf", "ExemploDataNascimento", "ExemploEstadoCivil");
    PessoaJ pessoaJ("ExemploNome", "ExemploEndereco", "ExemploEmail", "ExemploCnpj", "ExemploInscricaoEstadual", "ExemploRazaoSocial");
    
    //variaveis usadas como parametro para os metodos de busca
    string NomeContato;
    string CpfContato;
    string CnpjContato;
    
    //variaveis para menu de sele��o
    int opcao;
    int opcao1;
    int opcao2;
    int opcao3;

    do {
        // Mostra o menu
        cout << endl;
        cout << "---------------------MENU-----------------------" << endl;
        cout << "1. Op��o 1: Adicionar contato a Agenda" << endl;
        cout << "2. Op��o 2: Buscar por contato na Agenda" << endl;
        cout << "3. Op��o 3: Excluir contato da Agenda" << endl;
	    cout << "4. Op��o 4: imprimir todos os contatos da Agenda" << endl;
        cout << "5. Sair" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Escolha uma op��o: ";
        
        // Verifica se a entrada � v�lida
        if (!(cin >> opcao)) {
            cout << "Op��o inv�lida. Por favor, insira um n�mero." << endl;
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inv�lida
            continue; // Reinicia o loop
        }

        // Executa a op��o escolhida
        switch (opcao) {
            case 1:
            	cout << endl;
                cout << "--------------Adicionar contato-----------------" << endl;
                cout << endl;
                // a��es para a op��o 1
                cout << "1.- Adicionar pessoa f�sica" << endl;
                cout << "2.- Adicionar pessoa Juridica" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Escolha uma op��o (1 ou 2): ";
                cin >> opcao1;
                
                 // Verifica a op��o escolhida usando if-else
                if (opcao1 == 1) {
                	cout << endl;
                    cout << "Adicionando Pessoa F�sica." << endl;
                    cout << endl;
                    // a��es para a op��o 1
                    agenda.AdicionaPessoaF();
                    
                } else if (opcao1 == 2) {
                	cout << endl;
                    cout << "Adicionando Pessoa Juridica." << endl;
                    cout << endl;
                    // a��es para a op��o 2
                    agenda.AdicionaPessoaJ();
                    
                } else {
                	cout << endl;
                    cout << "Op��o inv�lida. Escolha uma op��o de 1 ou 2." << endl;
                }
                break;
            case 2:
            	cout << endl;
                cout << "----------------Buscar contato------------------" << endl;
                cout << endl;
                // a��es para a op��o 2

                do {
                    // menu de sele��o do m�todo de busca
                    cout << "Selecione a maneira como deseja fazer a busca" << endl;
                    cout << "1. Por nome de pessoa f�sica" << endl;
                    cout << "2. Por nome de pessoa Juridica" << endl;
                    cout << "3. por CPF" << endl;
            	    cout << "4. Por CNPJ" << endl;
                    cout << "5. Sair" << endl;
                    cout << "------------------------------------------------" << endl;
                    cout << "Escolha uma op��o: ";
                    cin >> opcao2;
                
                    // Executa a op��o escolhida
                    switch (opcao2) {
                
                        case 1:
                            cout << "Buscando por nome de Pessoas F�sicas." << endl;
                            cout << endl;
                            // a��es para a op��o 1
                            cout <<"informe o nome que ser� buscando ";
                            
                            cin >> NomeContato;
                            cout << endl;
                            pessoaF = agenda.BuscaNomePSF(NomeContato);
                            pessoaF.ImprimePessoaF();
                            
                            break;
                        case 2:
                            cout << "Buscando por nome de Pessoas Jur�dicas." << endl;
                            cout << endl;
                            // a��es para a op��o 2
                            cout <<"informe o nome que ser� buscando ";
                            cin >> NomeContato;
                            cout << endl;
                            pessoaJ = agenda.BuscaNomePSJ(NomeContato);
                            pessoaJ.ImprimePessoaJ();
                            
                            break;
                        case 3:
                            cout << "Buscando por CPF de Pessoas F�sicas." << endl;
                            cout << endl;
                            // a��es para a op��o 3
                            cout <<"informe o CPF que ser� buscando ";
                            cin >> CpfContato;
                            pessoaF = agenda.BuscaCpf(CpfContato);
                            pessoaF.ImprimePessoaF();
                            
                            break;
            	        case 4:
                            cout << "Buscando por CNPJ de Pessoas Jur�dicas." << endl;
                            cout << endl;
                            // a��es para a op��o 4
                            cout <<"informe o CNPJ que ser� buscando ";
                            cin >> CnpjContato;
                            pessoaJ = agenda.BuscaCnpj(CnpjContato);
                            pessoaJ.ImprimePessoaJ();
                            
                            break;
                        case 5:
                        	cout << endl;
                            cout << "Retornando ao menu anterior" << endl;
                            cout << endl;
                            
                            break;
                        default:
                            cout << "Op��o inv�lida. Escolha uma op��o de 1 a 5." << endl;
                            break;
                    }

                } while (opcao2 != 5); // Repete o menu at� o usu�rio escolher a op��o de sair (5)

                break;
            case 3:
            	cout << endl;
                cout << "----------------Excluir contato-----------------" << endl;
                cout << endl;
                // a��es para a op��o 3
                cout << "1.- Para Excluir contato pessoa f�sica" << endl;
                cout << "2.- Para Excluir contato pessoa Juridica" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Escolha uma op��o (1 ou 2): ";
                cin >> opcao3;
                
                if (opcao3 == 1) {
                	cout << endl;
                    cout << "Excluindo contato pessoa f�sica." << endl;
                    cout << endl;
                    // a��es para a op��o 1
                    cout << "informe o nome do contato que deseja Excluir: " << endl;
                    cin >> NomeContato;
                    agenda.ExcluiPessoaF(NomeContato);
                    
                } else if (opcao3 == 2) {
                	cout << endl;
                    cout << "Excluindo contato pessoa Juridica." << endl;
                    cout << endl;
                    // a��es para a op��o 2
                    cout << "informe o nome do contato que deseja Excluir: " << endl;
                    cin >> NomeContato;
                    agenda.ExcluiPessoaJ(NomeContato);
                    
                } else {
                    cout << "Op��o inv�lida. Escolha uma op��o de 1 ou 2." << endl;
                }
                
                break;
	        case 4:
                cout << "----------imprimir todos os contatos------------" << endl;
                cout << endl;
                // a��es para a op��o 4
                agenda.ImprimeContatos();
                cout << endl;
                cout << "------------------------------------------------" << endl;
                break;
            case 5:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Op��o inv�lida. Escolha uma op��o de 1 a 5." << endl;
                break;
        }

    } while (opcao != 5); // Repete o menu at� o usu�rio escolher a op��o de sair (5)
    
    
    return 0;
}

