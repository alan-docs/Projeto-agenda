#include "Agenda.h"


void Agenda::AdicionaPessoaF() {
    string Nome, Endereco, Email, Cpf, DataNascimento, EstadoCivil;
    cout << "Digite o nome do contato: ";
    cin >> Nome;
    cout << endl;
    cout << "Digite o endere�o do contato: ";
    cin >> Endereco;
    cout << endl;
    cout << "Digite o Email do contato: ";
    cin >> Email;
    cout << endl;
    cout << "Digite o Cpf do contato: ";
    cin >> Cpf;
    cout << endl;
    cout << "Digite a Data de Nascimento do contato: ";
    cin >> DataNascimento;
    cout << endl;
    cout << "Digite o estado civil do contato: ";
    cin >> EstadoCivil;
    cout << endl;

    PessoaF p1 = PessoaF(Nome, Endereco, Email, Cpf, DataNascimento, EstadoCivil);
    VectorPSF.push_back(p1);
}

void Agenda::AdicionaPessoaJ() {
    string Nome, Endereco, Email, Cnpj, InscricaoEstadual, RazaoSocial;
    cout << "Digite o nome do contato: ";
    cin >> Nome;
    cout << endl;
    cout << "Digite o endere�o do contato: ";
    cin >> Endereco;
    cout << endl;
    cout << "Digite o Email do contato: ";
    cin >> Email;
    cout << endl;
    cout << "Digite o Cnpj do contato: ";
    cin >> Cnpj;
    cout << endl;
    cout << "Digite a Inscri��o Estadual do contato: ";
    cin >> InscricaoEstadual;
    cout << endl;
    cout << "Digite a Raz�o Social do contato: ";
    cin >> RazaoSocial;
    cout << endl;

    PessoaJ p1 = PessoaJ(Nome, Endereco, Email, Cnpj, InscricaoEstadual, RazaoSocial);
    VectorPSJ.push_back(p1);
}

PessoaF Agenda::BuscaNomePSF(string _Nome) {
    if (VectorPSF.empty()) {
        cout << "N�o existe Pessoas Fisicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaF p1 = PessoaF("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
    } else {
        int TamanhoVectorF;
        TamanhoVectorF = VectorPSF.size();
        for (int i = 0; i < TamanhoVectorF; i++) {
            if (VectorPSF.at(i).getNome() == _Nome) {
                return VectorPSF.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaF p1 = PessoaF("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
    }
    // Tratamento de erro, por exemplo, exce��o aqui.
    PessoaF p1 = PessoaF("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
}

PessoaJ Agenda::BuscaNomePSJ(string _Nome) {
    if (VectorPSJ.empty()) {
        cout << "N�o existe Pessoas Juridicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaJ p1 = PessoaJ("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
        
    } else {
        int TamanhoVectorJ;
        TamanhoVectorJ = VectorPSJ.size();
        for (int i = 0; i < TamanhoVectorJ; i++) {
            if (VectorPSJ.at(i).getNome() == _Nome) {
                return VectorPSJ.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaJ p1 = PessoaJ("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
        
    }
    // Tratamento de erro, por exemplo, exce��o aqui.
    PessoaJ p1 = PessoaJ("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
    return p1;
    
}

PessoaF Agenda::BuscaCpf(string _Cpf) {
    if (VectorPSF.empty()) {
        cout << "N�o existe Pessoas Fisicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaF p1 = PessoaF("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
    } else {
        int TamanhoVectorF;
        TamanhoVectorF = VectorPSF.size();
        for (int i = 0; i < TamanhoVectorF; i++) {
            if (VectorPSF.at(i).getCpf() == _Cpf) {
                return VectorPSF.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaF p1 = PessoaF("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
    }
    // Tratamento de erro, por exemplo, exce��o aqui.
    PessoaF p1 = PessoaF("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
}

PessoaJ Agenda::BuscaCnpj(string _Cnpj) {
    if (VectorPSJ.empty()) {
        cout << "N�o existe Pessoas Juridicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaJ p1 = PessoaJ("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
        
    } else {
        int TamanhoVectorJ;
        TamanhoVectorJ = VectorPSJ.size();
        for (int i = 0; i < TamanhoVectorJ; i++) {
            if (VectorPSJ.at(i).getCnpj() == _Cnpj) {
                return VectorPSJ.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exce��o aqui.
        PessoaJ p1 = PessoaJ("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
        return p1;
        
    }
    // Tratamento de erro, por exemplo, exce��o aqui.
    PessoaJ p1 = PessoaJ("Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada","Pessoa n�o encontrada");
    return p1;
    
}

void Agenda::ExcluiPessoaF(string _Nome) {
	vector<PessoaF>::iterator tempVector;
    for (tempVector = VectorPSF.begin(); tempVector != VectorPSF.end(); ++tempVector) {
        if (tempVector->getNome() == _Nome) {
            VectorPSF.erase(tempVector);
            cout << "Contato exclu�do com sucesso." << endl;
            return;
        }
    }
    cout << "Contato n�o encontrado." << endl;
}

void Agenda::ExcluiPessoaJ(string _Nome) {
	vector<PessoaJ>::iterator it;
    for (it = VectorPSJ.begin(); it != VectorPSJ.end(); ++it) {
        if (it->getNome() == _Nome) {
            VectorPSJ.erase(it);
            cout << "Contato exclu�do com sucesso." << endl;
            return;
        }
    }
    cout << "Contato n�o encontrado." << endl;
}

void Agenda::ImprimeContatos() const{
    cout << "Contatos Pessoas F�sicas:" << endl;
	for (int i = 0; i < VectorPSF.size(); i++){
        VectorPSF[i].ImprimePessoaF();
        cout << endl;
    }
	cout << "------------------------------------------------" << endl;
	cout << endl;
    cout << "Contatos Pessoas Jur�dicas:" << endl;
    for (int i = 0; i < VectorPSJ.size(); i++){
        VectorPSJ[i].ImprimePessoaJ();
        cout << endl;
    }
}

