#include "leitor_arquivo.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::string lerArquivo(const std::string& filename) {
    std::ifstream file(filename);
    std::stringstream buffer;

    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo " << filename << std::endl;
        return ""; // Retorna uma string vazia indicando falha
    }

    std::string line;
    while (std::getline(file, line)) {
        buffer << line << std::endl;
    }

    file.close();

    return buffer.str(); // Retorna o conteúdo do arquivo
}
