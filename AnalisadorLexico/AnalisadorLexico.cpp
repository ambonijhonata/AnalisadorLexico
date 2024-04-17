// AnalisadorLexico.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include "leitor_arquivo.h"
#include "Classificador.h"
#include "FileOpenException.cpp"

int main() {
	//fazer para ler varios nomedevariavel
	std::string filename = "Codigo.txt";

	std::ifstream file;
	std::string lexema = "";
	std::vector<int> tokens;
	std::vector<Lexema> lexemas;
	std::string linha;
	std::list<Lexema> lexemasDaLinguagens;

	try {
		openFile(filename, file);
		prepararEstruturas(lexemasDaLinguagens);
		classificar_tokens(file, lexemasDaLinguagens, tokens);

		file.close();
	}
	catch (const FileOpenException ex) {
		std::cerr << ex.what() << std::endl;
		return 1;
	}


	return 0;


	//classificar_tokens(&tokens, &lexemas, palavra);

	/*for (const auto& lexema : lexemas) {
		std::cout << "Lexema: " << lexema.lexema << ", Classificação: " << lexema.classificacao << std::endl;
	}

	return 0;*/
}