#include "leitor_arquivo.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include "FileOpenException.cpp"


std::string lerArquivo(const std::string& filename) {
	std::ifstream file(filename);
	std::stringstream buffer;

	if (!file.is_open()) {
		std::cerr << "Erro ao abrir o arquivo " << filename << std::endl;
		return "";
	}

	std::string line;
	while (std::getline(file, line)) {
		buffer << line << std::endl;
	}

	file.close();

	return buffer.str();
}

std::ifstream& openFile(const std::string& filePath, std::ifstream& fileStream)
{
	fileStream.open(filePath);
	if (!fileStream.is_open()) {
		throw FileOpenException(filePath);
	}
	return fileStream;
}

