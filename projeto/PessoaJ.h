#ifndef PESSOAJ_H
#define PESSOAJ_H

#include "Pessoa.h"

class PessoaJ : public Pessoa
{
	private:
	    string Cnpj;
	    string InscricaoEstadual;
	    string RazaoSocial;
	
	public:
	    void setCnpj(string _Cnpj);
	    void setInscricaoEstadual(string _InscricaoEstadual);
	    void setRazaoSocial(string _RazaoSocial);
	    string getCnpj();
	    string getInscricaoEstadual();
	    string getRazaoSocial();
	    PessoaJ(string _Nome, string _Endereco, string _Email, string _Cnpj, string _InscricaoEstadual, string _RazaoSocial);
	    void ImprimePessoaJ() const;
		
};

#endif
