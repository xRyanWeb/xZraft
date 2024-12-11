#include "numeric"

std::string NamesRandOne() {

	std::vector<std::string> names;

	names.push_back("James");
	names.push_back("John");
	names.push_back("Joey");
	names.push_back("Mike");
	names.push_back("Matt");


	for (size_t i = 0; i < 1; i++) {

		for (auto& a : names) {

			srand(time(0));

			int randomNameTwo = rand() % 4 + 1;
			return names[randomNameTwo];

		};


	}


	srand(time(0));

	int randomNameTwo = rand() % 4 + 1;
	return names[randomNameTwo];

};

std::string NamesRandTwo() {

	std::vector<std::string> names;

	names.push_back("Luke");
	names.push_back("Peter");
	names.push_back("Kyle");
	names.push_back("Pat");
	names.push_back("Justin");


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

