// AnalisadorLexico.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

struct Lexema {
	std::string lexema;
	std::string tipo;
};

int main() {
	//fazer para ler varios nomedevariavel
	std::string palavra = "void main void {nome, outro:integer; }";
	std::string lexema = "";
	std::vector<int> tokens;
	std::vector<std::string> lexemas;	
	Lexema lexxema;

	const std::string TIPO_PALAVRA_RESERVADA = "PALAVRA_RESERVADA";


	std::unordered_multimap<int, Lexema> map_lexemas;

	for (size_t i = 0; i < palavra.size(); i++) 
	{	
		//pega cada os identificador para verificar o token depois, fazer todos identificadores possivel no primeiro if
		if (palavra[i] == '{')
		{
			lexema = palavra[i];
		}
		else if (palavra[i] != ' ') 
		{
			lexema += palavra[i];
		}
		else {
			lexema = "";
		}
		
		if (lexema == "while") 
		{			
			
			tokens.push_back(1);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		} 
		else if (lexema == "void") 
		{
			lexxema.lexema = lexema;
			lexxema.tipo = TIPO_PALAVRA_RESERVADA;
			map_lexemas.insert(std::make_pair(2, lexxema));

			tokens.push_back(2);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "string")
		{
			tokens.push_back(3);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "return")
		{
			tokens.push_back(4);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		} 
		else if (lexema == "numerointeiro")
		{
			tokens.push_back(5);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "numerofloat")
		{
			tokens.push_back(6);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "nomevariavel")
		{
			tokens.push_back(7);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "nomedochar")
		{
			tokens.push_back(8);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "nomedavariavel")
		{
			tokens.push_back(9);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "nomedastring")
		{
			tokens.push_back(10);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "main")
		{
			lexxema.lexema = lexema;
			lexxema.tipo = TIPO_PALAVRA_RESERVADA;
			map_lexemas.insert(std::make_pair(11, lexxema));

			tokens.push_back(11);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "literal")
		{
			tokens.push_back(12);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "integer")
		{
			tokens.push_back(13);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "inicio")
		{
			tokens.push_back(14);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "if")
		{
			tokens.push_back(15);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "î")
		{
			tokens.push_back(16);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "for")
		{
			tokens.push_back(17);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "float")
		{
			tokens.push_back(18);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "fim")
		{
			tokens.push_back(19);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "else")
		{
			tokens.push_back(20);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "do")
		{
			tokens.push_back(21);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "cout")
		{
			tokens.push_back(22);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "cin")
		{
			tokens.push_back(23);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "char")
		{
			tokens.push_back(24);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "callfuncao")
		{
			tokens.push_back(25);
			lexemas.push_back(lexema);			
		}
		else if (lexema == ">>")
		{
			tokens.push_back(26);
			lexemas.push_back(lexema);			
		}
		else if (lexema == ">=")
		{
			tokens.push_back(27);
			lexemas.push_back(lexema);			
		}
		else if (lexema == ">")
		{
			tokens.push_back(28);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "==")
		{
			tokens.push_back(29);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "=")
		{
			tokens.push_back(30);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "<=")
		{
			tokens.push_back(31);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "<<")
		{
			tokens.push_back(32);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "<")
		{
			tokens.push_back(33);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "++")
		{
			tokens.push_back(34);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "+")
		{
			tokens.push_back(35);
			lexemas.push_back(lexema);			
		}
		else if (lexema == "}")
		{
			tokens.push_back(36);
			lexemas.push_back(lexema);			
			lexema = "";
		}
		else if (lexema == "{")
		{
			tokens.push_back(37);
			lexemas.push_back(lexema);			
			lexema = "";
		}
		else if (lexema == ";")
		{
			tokens.push_back(38);
			lexemas.push_back(lexema);			
			lexema = "";
		}
		else if (lexema == ":")
		{
			tokens.push_back(39);
			lexemas.push_back(lexema);			
			lexema = "";
		}
		else if (lexema == "/")
		{
			tokens.push_back(40);
			lexemas.push_back(lexema);		
			lexema = "";
			continue;
		}
		else if (lexema == ",")
		{
			tokens.push_back(41);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "*")
		{
			tokens.push_back(42);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == ")")
		{
			tokens.push_back(43);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "(")
		{
			tokens.push_back(44);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "$")
		{
			tokens.push_back(45);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "!=")
		{
			tokens.push_back(46);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "--")
		{
			tokens.push_back(47);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}
		else if (lexema == "-")
		{
			tokens.push_back(48);
			lexemas.push_back(lexema);			
			lexema = "";
			continue;
		}

		//verifica se é o nome de uma variável
		if (palavra[i + 1] == ':' || palavra[i + 1] == ',')
		{
			tokens.push_back(7);
			lexemas.push_back(lexema);
			lexema = "";
		}		
		
	}

	std::cout << lexema << std::endl;
	

	return 0;
}