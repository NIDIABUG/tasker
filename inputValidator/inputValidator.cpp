#include"inputValidator.h"
#include<iostream>
#include<string>

bool isNumber(const std::string& p_input){ // working
	if(p_input.empty()) return false;

	for(size_t i = 0; i < p_input.length(); i++)
		if(!std::isdigit(p_input[i])) return false;
	return true;
}
bool isAlphabet(const std::string& p_input){ // working
	if(p_input.empty()) return false;

	for(char character : p_input)
		if(!std::isalpha(character)) return false;
	return true;
}

bool isSpecialCharacter(const std::string& p_input){
	if(p_input.empty()) return false;

	for(char character : p_input)
		if(std::isalnum(character) || std::isspace(character)) return false;
	return true;
}

std::string getInput(const std::string p_prompt){
	std::string input;
	std::cout << p_prompt;
	std::getline(std::cin, input);
	return input;
}
// ASCII character reference
//  !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_abcdefghijklmnopqrstuvwxyz{|}~
// !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
