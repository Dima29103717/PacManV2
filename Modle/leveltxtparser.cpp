#include "leveltxtparser.h"

LevelTxtParser::LevelTxtParser()
{
}

LevelTxtParser::~LevelTxtParser()
{
}

filestructs::LevelInfo LevelTxtParser::parser(std::vector<std::string>)
{
	return filestructs::LevelInfo();
}

std::vector<std::string> LevelTxtParser::_split_line(std::string line)
{
	std::vector<std::string> tokens;
	std::stringstream ss(line);
	std::string token;
	while (std::getline(ss, token, SPLIT_CHAR))
		tokens.push_back(token);

	return tokens;
}
