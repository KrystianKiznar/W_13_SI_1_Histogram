#pragma once
#include <string>


class Histogram {
private:
	int amountOf13Words;
	int amountOf46Words;
	int amountOf79Words;
	int counter;
public:
	Histogram();
	void countAmountOfWords(std::string sentence);
	void putAmount(int counter);
	void printHistogrm();
	void printStars(int amount);
};

