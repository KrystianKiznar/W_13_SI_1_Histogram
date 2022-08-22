#include "TextReader.h"
#include <fstream>

std::string TextReader::read()
{
	std::fstream path;
	path.open("text.txt");
	std::string line = "";

	while (true) {
		std::getline(path, line);
		if (line != "")
			mySentence = line;
		else
			break;
	}
	path.close();
	return mySentence;
}
