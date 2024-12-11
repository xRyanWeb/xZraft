#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "MathFunctionsVoid.hpp"
#include "RandomNumbers.hpp"
#include "MathOperators.hpp"
#include "WordProblems.hpp"
#include "FruitNames.hpp"

using std::cout;
using std::cin;													
using std::endl;
using std::vector;



static void isEqual(std::string a) {

	if (a != "") {

		cout << "Command is: " << a;
	}
}

static void listCommands() {

	vector<std::string> commands = { 
		"Commands", 
		"Home",
		"Math"
	};

	for (size_t i = 0; i < commands.size(); i++) {
		cout << " " << (i + 1) << " | " << ": " << commands[i] << endl;
	}


}



int main() {

	MathFunctionVoid M;
	Numbers Nums;
	Operators op;

	int answer;
	listCommands();

	std::string command;
	cout << "" << endl;

	cout << "Enter Command: ";
	cin >> command;

	long num1 = 10;
	long num2 = 1;

	long num3 = 5;
	long num4 = 10;



	if (command == "Math") {


		long Number_1 = Nums.randomNumbers(num1, num2);
		long Number_2 = Nums.randomNumbers(num3, num4);

		std::cout << Number_1 << " " << op.randomOps() << " " << Number_2 << endl;

		cout << "Enter Answer: " << endl;
		cin >> answer;


		if (op.randomOps() == "+" && answer 
			== M.Add(Number_1, Number_2)) {

			cout << "Your Correct :) Congrats Your Learning Math";

		}

		if (op.randomOps() == "-" && answer
			== M.Sub(Number_1, Number_2)) {

			cout << "Your Correct :) Congrats Your Learning Math";

		}

		if (op.randomOps() == "*" && answer
			== M.Mul(Number_1, Number_2)) {

			cout << "Your Correct :) Congrats Your Learning Math";

		}

	}

	if (command == "Word") {

		try {

			cout << "Name 1 Picked: " <<  NamesRandOne() << endl;
			cout << "Name 2 Picked: " <<  NamesRandTwo() << endl;

			cout << "Fruit Name 1: " << NamesFruitRandOne() << endl;
			cout << "Fruit Name 2: " << NamesFruitRandTwo() << endl;


		}
		catch (const std::exception& e) {
			cout << "Message: " << e.what() << endl;
		}
	}

	if (command == "Home") {

		listCommands();
	}
 


	system("pause > 0");
	exit(EXIT_SUCCESS);
	return 0;
}