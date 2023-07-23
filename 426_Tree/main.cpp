#include <iostream>
#include <iterator>
#include <ctime>

#include "Node.h"
#include "Tree.h"

int main() {
	srand(time(nullptr));
	Tree test;
	std::cout << "Generating random numbers: " << std::endl;
	for (unsigned int i = 0; i < 10; ++i) {
		int r = rand() % 100;
		std::cout << r << "\t"; 
		test.insert(r);
	}
	std::cout << std::endl;
	std::cout << "Printing Tree: " << std::endl;
	test.print();
	std::cout << std::endl;
	int depth = test.maxDepth();
	std::cout << "Maximal depth: " << depth << std::endl;

	int * lvlsums = new int [depth+1];
	test.lvlsum(lvlsums);
	for (int i = 0; i < depth+1; ++i) {
		std::cout << i << ": " << lvlsums[i] << std::endl;
	}
	return 0;
}
