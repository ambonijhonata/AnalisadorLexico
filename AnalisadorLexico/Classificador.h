#include<iostream>
#include<vector>
#include<string>
#include<list>

struct Lexema {
	int id;
	std::string lexema;
	std::string classificacao;
};

void classificar_tokens(std::ifstream& fileStream, std::list<Lexema>& lexemasDaLinguagens, std::vector<int>& tokens);
void prepararEstruturas(std::list<Lexema>& lexemasDaLinguagens);
void Sintatico();
bool isDouble(const std::string& str);