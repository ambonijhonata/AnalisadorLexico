#include<iostream>
#include<vector>
#include<string>

struct Lexema {
	int cod;
	std::string lexema;
	std::string classificacao;
};

void classificar_tokens(std::vector<int>* tokens, std::vector<Lexema>* lexemas, std::string palavra);