#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

//classe pai
class Pessoa
{
	protected:
	    string Nome;
	    string Endereco;
	    string Email;
	
	public:
	    void setNome(string _Nome);
	    void setEndereco(string _Endereco);
	    void setEmail(string _Email);
	    string getNome();
	    string getEndereco();
	    string getEmail();
	    Pessoa(string _Nome, string _Endereco, string _Email);
};

#endif
