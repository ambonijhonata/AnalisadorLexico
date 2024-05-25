#include<iostream>
#include<vector>
#include<string>
#include<list>

struct Lexema {
	int id;
	std::string lexema;
	std::string classificacao;
	int linha;
};

void classificar_tokens(std::ifstream& fileStream, std::list<Lexema>& lexemasDaLinguagens, std::vector<std::vector<int>>& tokens);
void prepararEstruturas(std::list<Lexema>& lexemasDaLinguagens);
void Sintatico(std::vector<std::vector<int>> tokens);
bool isDouble(const std::string& str);