#include <iostream>
#include <vector>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


class Operators {

public:

	std::string randomOps() {

		vector<string> MathOp = { "+", "-", "*" };

		auto randomOp = rand() % 2 + 1;
		return MathOp[randomOp];

	}
};