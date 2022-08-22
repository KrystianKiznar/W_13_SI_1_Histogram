#include <iostream>
#include "Histogram.h"
#include "TextReader.h"

int main() {
	std::cout << "No to jedziemy\n";

	//std::string sentence = "Harry Potter and the Sorcerer's Stone Mr. and Mrs. Dursley, of number four, Privet Drive, were proud to say that they were perfectly normal, thank you very much.";

	TextReader tx;
	std::string sentence = tx.read();
	Histogram his;
	his.countAmountOfWords(sentence);
	his.printHistogrm();

	return 0;
}