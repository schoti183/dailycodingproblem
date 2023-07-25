#include <cstdlib>
#include <iostream>
#include <ostream>

int main(int argc, const char *argv[]) {
	if (argc != 2) {
		std::cout << argv[0] << ": \"enter string\"" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string input;
	char output = ' ';
	int counter = 0;
	input = argv[1];	
	for (char letter:input) {
		if ('(' == letter) ++counter;
		if (')' == letter) --counter;
	}
	if (counter > 0) output = ')';
	if (counter < 0) output = '(';
	for (int i = 0; i < abs(counter); ++i) {
		input += output;
	}
	
	std::cout << input << std::endl;
	return 0;
}
