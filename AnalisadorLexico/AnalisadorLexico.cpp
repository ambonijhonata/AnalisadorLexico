// AnalisadorLexico.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include<iostream>
#include<vector>
#include<string>
#include "leitor_arquivo.h"
#include "Classificador.h"

int main() {
	//fazer para ler varios nomedevariavel
	std::string filename = "Codigo.txt";
	std::string palavra = lerArquivo(filename);
	std::string lexema = "";
	std::vector<int> tokens;
	std::vector<Lexema> lexemas;

	classificar_tokens(&tokens, &lexemas, palavra);

	for (const auto& lexema : lexemas) {
		std::cout << "Lexema: " << lexema.lexema << ", Classificação: " << lexema.classificacao << std::endl;
	}

	return 0;
}