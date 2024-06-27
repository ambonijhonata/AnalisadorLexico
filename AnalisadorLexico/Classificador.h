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

struct Item {

	std::string nome;
	int tipo;
	std::string categoria;
	int nivel;
};

void classificar_tokens(std::ifstream& fileStream, std::list<Lexema>& lexemasDaLinguagens, std::vector<std::vector<int>>& tokens, std::vector<std::string> nomevariaveis);
void prepararEstruturas(std::list<Lexema>& lexemasDaLinguagens);
void Sintatico(std::vector<std::vector<int>> tokens, std::vector<std::string> nomevariaveis);
bool Semantico(std::vector<Item> itens, std::vector<std::vector<int>> tokens, int* nfuncao, int* nchave, std::vector<std::string> nomevariaveis);
bool isDouble(const std::string& str);
