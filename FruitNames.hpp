#include "numeric"
#include <time.h>
#include <vector>
#include <string>

std::string NamesFruitRandOne() {

	std::vector<std::string> fruitName;

	fruitName.push_back("Lemon");
	fruitName.push_back("Pear");
	fruitName.push_back("Mango");
	fruitName.push_back("Kiwi");
	fruitName.push_back("Strawberry");


	for (size_t i = 0; i < 1; i++) {

		for (auto& a : fruitName) {

			srand(time(0));

			int randomNameTwo = rand() % 4 + 1;
			return fruitName[randomNameTwo];

		};


	}


	srand(time(0));

	int randomNameTwo = rand() % 4 + 1;
	return fruitName[randomNameTwo];

};

std::string NamesFruitRandTwo() {

	std::vector<std::string> names;

	names.push_back("Grape");
	names.push_back("Plum");
	names.push_back("Blueberry");
	names.push_back("Watermelon");
	names.push_back("App");


	for (size_t i = 0; i < 1; i++) {

		for (auto& a : names) {

			srand(time(0));

			int randomNameTwo = rand() % 4 + 1;
			return names[randomNameTwo];
		};


	}


	int randomNameTwo = rand() % 4 + 1;
	return names[randomNameTwo];


}

