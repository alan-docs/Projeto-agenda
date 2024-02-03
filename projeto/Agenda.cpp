#include "Agenda.h"


void Agenda::AdicionaPessoaF() {
    string Nome, Endereco, Email, Cpf, DataNascimento, EstadoCivil;
    cout << "Digite o nome do contato: ";
    cin >> Nome;
    cout << endl;
    cout << "Digite o endereço do contato: ";
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
    cout << "Digite o endereço do contato: ";
    cin >> Endereco;
    cout << endl;
    cout << "Digite o Email do contato: ";
    cin >> Email;
    cout << endl;
    cout << "Digite o Cnpj do contato: ";
    cin >> Cnpj;
    cout << endl;
    cout << "Digite a Inscrição Estadual do contato: ";
    cin >> InscricaoEstadual;
    cout << endl;
    cout << "Digite a Razão Social do contato: ";
    cin >> RazaoSocial;
    cout << endl;

    PessoaJ p1 = PessoaJ(Nome, Endereco, Email, Cnpj, InscricaoEstadual, RazaoSocial);
    VectorPSJ.push_back(p1);
}

PessoaF Agenda::BuscaNomePSF(string _Nome) {
    if (VectorPSF.empty()) {
        cout << "Não existe Pessoas Fisicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaF p1 = PessoaF("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
    } else {
        int TamanhoVectorF;
        TamanhoVectorF = VectorPSF.size();
        for (int i = 0; i < TamanhoVectorF; i++) {
            if (VectorPSF.at(i).getNome() == _Nome) {
                return VectorPSF.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaF p1 = PessoaF("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
    }
    // Tratamento de erro, por exemplo, exceção aqui.
    PessoaF p1 = PessoaF("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
}

PessoaJ Agenda::BuscaNomePSJ(string _Nome) {
    if (VectorPSJ.empty()) {
        cout << "Não existe Pessoas Juridicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaJ p1 = PessoaJ("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
        
    } else {
        int TamanhoVectorJ;
        TamanhoVectorJ = VectorPSJ.size();
        for (int i = 0; i < TamanhoVectorJ; i++) {
            if (VectorPSJ.at(i).getNome() == _Nome) {
                return VectorPSJ.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaJ p1 = PessoaJ("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
        
    }
    // Tratamento de erro, por exemplo, exceção aqui.
    PessoaJ p1 = PessoaJ("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
    return p1;
    
}

PessoaF Agenda::BuscaCpf(string _Cpf) {
    if (VectorPSF.empty()) {
        cout << "Não existe Pessoas Fisicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaF p1 = PessoaF("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
    } else {
        int TamanhoVectorF;
        TamanhoVectorF = VectorPSF.size();
        for (int i = 0; i < TamanhoVectorF; i++) {
            if (VectorPSF.at(i).getCpf() == _Cpf) {
                return VectorPSF.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaF p1 = PessoaF("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
    }
    // Tratamento de erro, por exemplo, exceção aqui.
    PessoaF p1 = PessoaF("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
}

PessoaJ Agenda::BuscaCnpj(string _Cnpj) {
    if (VectorPSJ.empty()) {
        cout << "Não existe Pessoas Juridicas registradas na agenda";
        cout << endl;
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaJ p1 = PessoaJ("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
        
    } else {
        int TamanhoVectorJ;
        TamanhoVectorJ = VectorPSJ.size();
        for (int i = 0; i < TamanhoVectorJ; i++) {
            if (VectorPSJ.at(i).getCnpj() == _Cnpj) {
                return VectorPSJ.at(i);
            }
        }
        // Tratamento de erro, por exemplo, exceção aqui.
        PessoaJ p1 = PessoaJ("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
        return p1;
        
    }
    // Tratamento de erro, por exemplo, exceção aqui.
    PessoaJ p1 = PessoaJ("Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada","Pessoa não encontrada");
    return p1;
    
}

void Agenda::ExcluiPessoaF(string _Nome) {
	vector<PessoaF>::iterator tempVector;
    for (tempVector = VectorPSF.begin(); tempVector != VectorPSF.end(); ++tempVector) {
        if (tempVector->getNome() == _Nome) {
            VectorPSF.erase(tempVector);
            cout << "Contato excluído com sucesso." << endl;
            return;
        }
    }
    cout << "Contato não encontrado." << endl;
}

void Agenda::ExcluiPessoaJ(string _Nome) {
	vector<PessoaJ>::iterator it;
    for (it = VectorPSJ.begin(); it != VectorPSJ.end(); ++it) {
        if (it->getNome() == _Nome) {
            VectorPSJ.erase(it);
            cout << "Contato excluído com sucesso." << endl;
            return;
        }
    }
    cout << "Contato não encontrado." << endl;
}

void Agenda::ImprimeContatos() const{
    cout << "Contatos Pessoas Físicas:" << endl;
	for (int i = 0; i < VectorPSF.size(); i++){
        VectorPSF[i].ImprimePessoaF();
        cout << endl;
    }
	cout << "------------------------------------------------" << endl;
	cout << endl;
    cout << "Contatos Pessoas Jurídicas:" << endl;
    for (int i = 0; i < VectorPSJ.size(); i++){
        VectorPSJ[i].ImprimePessoaJ();
        cout << endl;
    }
}

