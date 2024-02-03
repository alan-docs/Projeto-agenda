#ifndef AGENDA_H
#define AGENDA_H
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Pessoa.h"
#include "PessoaF.h"
#include "PessoaJ.h"


using namespace std;
class Agenda
{
	private:
	    vector<PessoaF> VectorPSF;
	    vector<PessoaJ> VectorPSJ;
	
	public:
	    void AdicionaPessoaF();
	    void AdicionaPessoaJ();
	    PessoaF BuscaNomePSF(string _Nome);
	    PessoaJ BuscaNomePSJ(string _Nome);
	    PessoaF BuscaCpf(string _Cpf);
	    PessoaJ BuscaCnpj(string _Cnpj);
	    void ExcluiPessoaF(string _Nome);
	    void ExcluiPessoaJ(string _Nome);
	    void ImprimeContatos() const;
		
};

#endif
