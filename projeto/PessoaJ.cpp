#include "PessoaJ.h"


void PessoaJ::setCnpj(string _Cnpj) {
    Cnpj = _Cnpj;
}

void PessoaJ::setInscricaoEstadual(string _InscricaoEstadual) {
    InscricaoEstadual = _InscricaoEstadual;
}

void PessoaJ::setRazaoSocial(string _RazaoSocial) {
    RazaoSocial = _RazaoSocial;
}

string PessoaJ::getCnpj() {
    return Cnpj;
}

string PessoaJ::getInscricaoEstadual() {
    return InscricaoEstadual;
}

string PessoaJ::getRazaoSocial() {
    return RazaoSocial;
}

PessoaJ::PessoaJ(string _Nome, string _Endereco, string _Email, string _Cnpj, string _InscricaoEstadual, string _RazaoSocial) : Pessoa(_Nome, _Endereco, _Email) {
    Cnpj = _Cnpj;
    InscricaoEstadual = _InscricaoEstadual;
    RazaoSocial = _RazaoSocial;
}

void PessoaJ::ImprimePessoaJ() const{
    cout << "Nome:----------------- " << Nome << endl;
    cout << "Endereço:------------- " << Endereco << endl;
    cout << "Email:---------------- " << Email << endl;
    cout << "CNPJ:----------------- " << Cnpj << endl;
    cout << "Inscricao Estadual:--- " << InscricaoEstadual << endl;
    cout << "Razao Social:--------- " << RazaoSocial << endl;
    cout << endl;
}
