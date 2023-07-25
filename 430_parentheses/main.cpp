#include <cstdlib>
#include <iostream>
#include <ostream>

int checkParentheses(std::string input) {
	int counter = 0;
	for (char letter:input) {
		if ('(' == letter) ++counter;
		if (')' == letter) --counter;
		if (counter < 0) return -1;
	}
	return counter; 
}
int main(int argc, const char *argv[]) {
	if (argc != 2) {
		std::cout << argv[0] << ": \"enter string\"" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string input;
	char output = ' ';
	input = argv[1];	
	int counter = checkParentheses(input);
	while (counter < 0) {
		input = '(' + input;
		counter = checkParentheses(input);
	}
	for (int i = 0; i < abs(counter); ++i) {
		input += ')';
	}
	
	std::cout << input << std::endl;
	return 0;
}
