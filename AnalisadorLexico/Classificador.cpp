#include<iostream>
#include <fstream>
#include<vector>
#include<string>
#include "Classificador.h"

void prepararEstruturas(std::list<Lexema>& lexemasDaLinguagens) {	

	Lexema lexema;

	/*ADICIONA O WHILE*/
	lexema.id = 1;
	lexema.lexema = "while";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O VOID*/
	lexema.id = 2;
	lexema.lexema = "void";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA A STRING*/
	lexema.id = 3;
	lexema.lexema = "string";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O RETURN*/
	lexema.id = 4;
	lexema.lexema = "return";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O NUMEROINTEIRO*/
	lexema.id = 5;
	lexema.lexema = "numerointeiro";
	lexema.classificacao = "NUMERO INTEIRO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O NUMEROFLOAT*/
	lexema.id = 6;
	lexema.lexema = "numerofloat";
	lexema.classificacao = "NUMERO REAL";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O NOMEVARIAVEL*/
	lexema.id = 7;
	lexema.lexema = "nomevariavel";
	lexema.classificacao = "VARIAVEL";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O NOMEDOCHAR*/
	lexema.id = 8;
	lexema.lexema = "nomedochar";
	lexema.classificacao = "CHAR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O NOMEDASTRING*/
	lexema.id = 10;
	lexema.lexema = "nomedastring";
	lexema.classificacao = "STRING";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O MAIN*/
	lexema.id = 11;
	lexema.lexema = "main";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O LITERAL*/
	lexema.id = 12;
	lexema.lexema = "literal";
	lexema.classificacao = "LITERAL";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O INTEGER*/
	lexema.id = 13;
	lexema.lexema = "integer";
	lexema.classificacao = "TIPO DE DADO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O INTEGER*/
	lexema.id = 14;
	lexema.lexema = "inicio";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O IF*/
	lexema.id = 15;
	lexema.lexema = "if";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O �*/
	lexema.id = 16;
	lexema.lexema = "�";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O FOR*/
	lexema.id = 17;
	lexema.lexema = "for";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O FLOAT*/
	lexema.id = 18;
	lexema.lexema = "float";
	lexema.classificacao = "TIPO DE DADO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O FIM*/
	lexema.id = 19;
	lexema.lexema = "fim";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O ELSE*/
	lexema.id = 20;
	lexema.lexema = "else";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O DO*/
	lexema.id = 21;
	lexema.lexema = "do";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O COUT*/
	lexema.id = 22;
	lexema.lexema = "cout";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O CIN*/
	lexema.id = 23;
	lexema.lexema = "cin";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O CHAR*/
	lexema.id = 24;
	lexema.lexema = "char";
	lexema.classificacao = "TIPO DE DADO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O CALLFUNCAO*/
	lexema.id = 25;
	lexema.lexema = "callfuncao";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O >>*/
	lexema.id = 26;
	lexema.lexema = ">>";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O >=*/
	lexema.id = 27;
	lexema.lexema = ">=";
	lexema.classificacao = "OPERADOR DE COMPARACAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O >*/
	lexema.id = 28;
	lexema.lexema = ">";
	lexema.classificacao = "OPERADOR DE COMPARACAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O ==*/
	lexema.id = 29;
	lexema.lexema = "==";
	lexema.classificacao = "OPERADOR DE COMPARACAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O =*/
	lexema.id = 30;
	lexema.lexema = "=";
	lexema.classificacao = "OPERADOR DE ATRIBUICAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O =*/
	lexema.id = 30;
	lexema.lexema = "=";
	lexema.classificacao = "OPERADOR DE ATRIBUICAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O <=*/
	lexema.id = 31;
	lexema.lexema = "<=";
	lexema.classificacao = "OPERADOR DE COMPARACAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O <<*/
	lexema.id = 32;
	lexema.lexema = "<<";
	lexema.classificacao = "IDENTIFICADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O <*/
	lexema.id = 33;
	lexema.lexema = "<";
	lexema.classificacao = "OPERADOR DE COMPARACAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O ++*/
	lexema.id = 34;
	lexema.lexema = "++";
	lexema.classificacao = "OPERADOR DE INCREMENTO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O +*/
	lexema.id = 35;
	lexema.lexema = "+";
	lexema.classificacao = "OPERADOR ARITMETICO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O }*/
	lexema.id = 36;
	lexema.lexema = "}";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O {*/
	lexema.id = 37;
	lexema.lexema = "{";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O ;*/
	lexema.id = 38;
	lexema.lexema = ";";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O :*/
	lexema.id = 39;
	lexema.lexema = ":";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O /*/
	lexema.id = 40;
	lexema.lexema = "/";
	lexema.classificacao = "OPERADOR ARITMETICO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O ,*/
	lexema.id = 41;
	lexema.lexema = ",";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O **/
	lexema.id = 42;
	lexema.lexema = "*";
	lexema.classificacao = "OPERADOR ARITMETICO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O )*/
	lexema.id = 43;
	lexema.lexema = ")";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O (*/
	lexema.id = 44;
	lexema.lexema = "(";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O $*/
	lexema.id = 45;
	lexema.lexema = "$";
	lexema.classificacao = "PARENTESIADOR";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O !=*/
	lexema.id = 46;
	lexema.lexema = "!=";
	lexema.classificacao = "OPERADOR DE COMPARACAO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O --*/
	lexema.id = 47;
	lexema.lexema = "--";
	lexema.classificacao = "OPERADOR DE DECREMENTO";
	lexemasDaLinguagens.push_back(lexema);

	/*ADICIONA O --*/
	lexema.id = 48;
	lexema.lexema = "-";
	lexema.classificacao = "OPERADOR ARITMETICO";
	lexemasDaLinguagens.push_back(lexema);
}

void classificar_tokens(std::ifstream& fileStream, std::list<Lexema>& lexemasDaLinguagens, std::vector<int> tokens) {
	std::string line;
	std::string lexema;

	while (std::getline(fileStream, line)) {

		for(int i = 0; i < line.size(); i++) {		
			if (line[i] == ' ') {
				continue;
			}

			lexema += line[i];

			if (line[i + 1] == ',' || line[i + 1] == ':') {
				tokens.push_back(7);
				lexema = "";
				continue;
			}
			else if ((i + 1) < line.size()) {
				if (line[i + 2] == ',' || line[i + 2] == ':') {
					tokens.push_back(7);
					lexema = "";
					continue;
				}
			}


			for (Lexema l : lexemasDaLinguagens) {
				if (l.lexema._Equal(lexema)) {					
					tokens.push_back(l.id);
					lexema = "";
					break;
				}
			}
			std::cout << lexema << std::endl;
		}
		std::cout << line << std::endl;		


	}
}