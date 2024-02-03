#include "PessoaF.h"


void PessoaF::setCpf(string _Cpf) {
    Cpf = _Cpf;
}

void PessoaF::setDataNascimento(string _DataNascimento) {
    DataNascimento = _DataNascimento;
}

void PessoaF::setEstadoCivil(string _EstadoCivil) {
    EstadoCivil = _EstadoCivil;
}

string PessoaF::getCpf() {
    return Cpf;
}

string PessoaF::getDataNascimento() {
    return DataNascimento;
}

string PessoaF::getEstadoCivil() {
    return EstadoCivil;
}

PessoaF::PessoaF(string _Nome, string _Endereco, string _Email, string _Cpf, string _DataNascimento, string _EstadoCivil) : Pessoa(_Nome, _Endereco, _Email) {
    Cpf = _Cpf;
    DataNascimento = _DataNascimento;
    EstadoCivil = _EstadoCivil;
}

void PessoaF::ImprimePessoaF() const{
    cout << "Nome:----------------- " << Nome << endl;
    cout << "Endereço:------------- " << Endereco << endl;
    cout << "Email:---------------- " << Email << endl;
    cout << "CPF:------------------ " << Cpf << endl;
    cout << "Data de Nascimento:--- " << DataNascimento << endl;
    cout << "Estado Civil:--------- " << EstadoCivil << endl;
    cout << endl;
}
