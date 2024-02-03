#ifndef PESSOAF_H
#define PESSOAF_H

#include "Pessoa.h"

class PessoaF : public Pessoa
{
	private:
	    string Cpf;
	    string DataNascimento;
	    string EstadoCivil;
	
	public:
	    void setCpf(string _Cpf);
	    void setDataNascimento(string _DataNascimento);
	    void setEstadoCivil(string _EstadoCivil);
	    string getCpf();
	    string getDataNascimento();
	    string getEstadoCivil();
	    PessoaF(string _Nome, string _Endereco, string _Email, string _Cpf, string _DataNascimento, string _EstadoCivil);
	    void ImprimePessoaF() const;
};

#endif
