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
	std::vector<std::string> lexemas;

	classificar_tokens(&tokens, &lexemas, palavra);

	std::cout << lexema << std::endl;

	return 0;
}