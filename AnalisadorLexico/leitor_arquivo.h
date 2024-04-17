#ifndef LEITOR_ARQUIVO_H
#define LEITOR_ARQUIVO_H

#include <string>

std::string lerArquivo(const std::string& filename);
std::ifstream& openFile(const std::string& filePath, std::ifstream& fileStream);

#endif // LEITOR_ARQUIVO_H
#pragma once
