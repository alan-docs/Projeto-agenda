#include <iostream>
#include "Pessoa.h"
#include "PessoaF.h"
#include "PessoaJ.h"
#include "Agenda.h"
#include <locale.h>


int main() {
    setlocale (LC_ALL, "Portuguese");
    Agenda agenda;
    // criando e inicializando os objetos Pessoa Fisica e Pessoa Juridica pelos construtures, posteriormente esses valores serão substituidos conforme as entradas do usuario
    PessoaF pessoaF("ExemploNome", "ExemploEndereco", "ExemploEmail", "ExemploCpf", "ExemploDataNascimento", "ExemploEstadoCivil");
    PessoaJ pessoaJ("ExemploNome", "ExemploEndereco", "ExemploEmail", "ExemploCnpj", "ExemploInscricaoEstadual", "ExemploRazaoSocial");
    
    //variaveis usadas como parametro para os metodos de busca
    string NomeContato;
    string CpfContato;
    string CnpjContato;
    
    //variaveis para menu de seleção
    int opcao;
    int opcao1;
    int opcao2;
    int opcao3;

    do {
        // Mostra o menu
        cout << endl;
        cout << "---------------------MENU-----------------------" << endl;
        cout << "1. Opção 1: Adicionar contato a Agenda" << endl;
        cout << "2. Opção 2: Buscar por contato na Agenda" << endl;
        cout << "3. Opção 3: Excluir contato da Agenda" << endl;
	    cout << "4. Opção 4: imprimir todos os contatos da Agenda" << endl;
        cout << "5. Sair" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Escolha uma opção: ";
        
        // Verifica se a entrada é válida
        if (!(cin >> opcao)) {
            cout << "Opção inválida. Por favor, insira um número." << endl;
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inválida
            continue; // Reinicia o loop
        }

        // Executa a opção escolhida
        switch (opcao) {
            case 1:
            	cout << endl;
                cout << "--------------Adicionar contato-----------------" << endl;
                cout << endl;
                // ações para a opção 1
                cout << "1.- Adicionar pessoa física" << endl;
                cout << "2.- Adicionar pessoa Juridica" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Escolha uma opção (1 ou 2): ";
                cin >> opcao1;
                
                 // Verifica a opção escolhida usando if-else
                if (opcao1 == 1) {
                	cout << endl;
                    cout << "Adicionando Pessoa Física." << endl;
                    cout << endl;
                    // ações para a opção 1
                    agenda.AdicionaPessoaF();
                    
                } else if (opcao1 == 2) {
                	cout << endl;
                    cout << "Adicionando Pessoa Juridica." << endl;
                    cout << endl;
                    // ações para a opção 2
                    agenda.AdicionaPessoaJ();
                    
                } else {
                	cout << endl;
                    cout << "Opção inválida. Escolha uma opção de 1 ou 2." << endl;
                }
                break;
            case 2:
            	cout << endl;
                cout << "----------------Buscar contato------------------" << endl;
                cout << endl;
                // ações para a opção 2

                do {
                    // menu de seleção do método de busca
                    cout << "Selecione a maneira como deseja fazer a busca" << endl;
                    cout << "1. Por nome de pessoa física" << endl;
                    cout << "2. Por nome de pessoa Juridica" << endl;
                    cout << "3. por CPF" << endl;
            	    cout << "4. Por CNPJ" << endl;
                    cout << "5. Sair" << endl;
                    cout << "------------------------------------------------" << endl;
                    cout << "Escolha uma opção: ";
                    cin >> opcao2;
                
                    // Executa a opção escolhida
                    switch (opcao2) {
                
                        case 1:
                            cout << "Buscando por nome de Pessoas Físicas." << endl;
                            cout << endl;
                            // ações para a opção 1
                            cout <<"informe o nome que será buscando ";
                            
                            cin >> NomeContato;
                            cout << endl;
                            pessoaF = agenda.BuscaNomePSF(NomeContato);
                            pessoaF.ImprimePessoaF();
                            
                            break;
                        case 2:
                            cout << "Buscando por nome de Pessoas Jurídicas." << endl;
                            cout << endl;
                            // ações para a opção 2
                            cout <<"informe o nome que será buscando ";
                            cin >> NomeContato;
                            cout << endl;
                            pessoaJ = agenda.BuscaNomePSJ(NomeContato);
                            pessoaJ.ImprimePessoaJ();
                            
                            break;
                        case 3:
                            cout << "Buscando por CPF de Pessoas Físicas." << endl;
                            cout << endl;
                            // ações para a opção 3
                            cout <<"informe o CPF que será buscando ";
                            cin >> CpfContato;
                            pessoaF = agenda.BuscaCpf(CpfContato);
                            pessoaF.ImprimePessoaF();
                            
                            break;
            	        case 4:
                            cout << "Buscando por CNPJ de Pessoas Jurídicas." << endl;
                            cout << endl;
                            // ações para a opção 4
                            cout <<"informe o CNPJ que será buscando ";
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
                            cout << "Opção inválida. Escolha uma opção de 1 a 5." << endl;
                            break;
                    }

                } while (opcao2 != 5); // Repete o menu até o usuário escolher a opção de sair (5)

                break;
            case 3:
            	cout << endl;
                cout << "----------------Excluir contato-----------------" << endl;
                cout << endl;
                // ações para a opção 3
                cout << "1.- Para Excluir contato pessoa física" << endl;
                cout << "2.- Para Excluir contato pessoa Juridica" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Escolha uma opção (1 ou 2): ";
                cin >> opcao3;
                
                if (opcao3 == 1) {
                	cout << endl;
                    cout << "Excluindo contato pessoa física." << endl;
                    cout << endl;
                    // ações para a opção 1
                    cout << "informe o nome do contato que deseja Excluir: " << endl;
                    cin >> NomeContato;
                    agenda.ExcluiPessoaF(NomeContato);
                    
                } else if (opcao3 == 2) {
                	cout << endl;
                    cout << "Excluindo contato pessoa Juridica." << endl;
                    cout << endl;
                    // ações para a opção 2
                    cout << "informe o nome do contato que deseja Excluir: " << endl;
                    cin >> NomeContato;
                    agenda.ExcluiPessoaJ(NomeContato);
                    
                } else {
                    cout << "Opção inválida. Escolha uma opção de 1 ou 2." << endl;
                }
                
                break;
	        case 4:
                cout << "----------imprimir todos os contatos------------" << endl;
                cout << endl;
                // ações para a opção 4
                agenda.ImprimeContatos();
                cout << endl;
                cout << "------------------------------------------------" << endl;
                break;
            case 5:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida. Escolha uma opção de 1 a 5." << endl;
                break;
        }

    } while (opcao != 5); // Repete o menu até o usuário escolher a opção de sair (5)
    
    
    return 0;
}

