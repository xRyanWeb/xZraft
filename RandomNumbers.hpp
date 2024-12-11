#include <iostream>
#include <time.h>


using std::cout;
using std::cin;
using std::endl;


class Numbers {
public:

	long randomNumbers(long a, long b) {
		srand(time(0));

		return rand() % a + b + 1;
	}


};