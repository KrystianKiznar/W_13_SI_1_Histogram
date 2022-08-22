#include "Histogram.h"
#include <iostream>


Histogram::Histogram() {
	amountOf13Words = 0;
	amountOf46Words = 0;
	amountOf79Words = 0;
	counter = 0;
}

void Histogram::countAmountOfWords(std::string sentence) {

	sentence += ' ';
	for (int i = 0; i <= sentence.size(); i++) {
		if ((sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122)) {
			counter++;
		}
		else if (sentence[i] == ' ') {
			putAmount(counter);
			counter = 0;
		}
		else
			continue;
	}
}

void Histogram::putAmount(int counter) {
	if (counter >= 1 && counter <= 3)
		amountOf13Words++;
	else if (counter >= 4 && counter <= 6)
		amountOf46Words++;
	else if (counter >= 7 && counter <= 9)
		amountOf79Words++;
}

void Histogram::printHistogrm() {
	std::cout << "1  - 3 | ";
	printStars(amountOf13Words);

	std::cout << "4  - 6 | ";
	printStars(amountOf46Words);

	std::cout << "7  - 9 | ";
	printStars(amountOf79Words);
}

void Histogram::printStars(int amount) {
	for (int i = 0; i < amount; i++) {
		std::cout << '*';
	}
	std::cout << std::endl;
}
