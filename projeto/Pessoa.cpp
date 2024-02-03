#include "Pessoa.h"

void Pessoa::setNome(string _Nome) {
    Nome = _Nome;
}

void Pessoa::setEndereco(string _Endereco) {
    Endereco = _Endereco;
}

void Pessoa::setEmail(string _Email) {
    Email = _Email;
}

string Pessoa::getNome() {
    return Nome;
}

string Pessoa::getEndereco() {
    return Endereco;
}

string Pessoa::getEmail() {
    return Email;
}

Pessoa::Pessoa(string _Nome, string _Endereco, string _Email) {
    Nome = _Nome;
    Endereco = _Endereco;
    Email = _Email;
}
