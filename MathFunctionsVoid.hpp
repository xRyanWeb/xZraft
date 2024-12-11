#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class MathFunctionVoid {

public:

	long Sub(int a, int b) {
		return static_cast<int> (a - b);

	};

	long Add(int a, int b) {
		return static_cast<int>(a + b);
	}


	long Mul(int a, int b) {
		return static_cast<int>(a * b);
	}

};