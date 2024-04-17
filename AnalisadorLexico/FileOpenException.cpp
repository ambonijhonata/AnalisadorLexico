#include <stdexcept>

class FileOpenException : public std::runtime_error {
public:
	FileOpenException(const std::string& filePath)
		: std::runtime_error("Erro ao abir o arquivo: " + filePath) {}
};