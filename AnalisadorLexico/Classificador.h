#include<iostream>
#include<vector>
#include<string>
#include<list>

struct Lexema {
	int id;
	std::string lexema;
	std::string classificacao;
};

void classificar_tokens(std::ifstream& fileStream, std::list<Lexema>& lexemasDaLinguagens);
void prepararEstruturas(std::list<Lexema>& lexemasDaLinguagens);