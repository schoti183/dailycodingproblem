#include <iostream>
#include <iterator>
#include <ctime>

#include "Node.h"
#include "Tree.h"

int main() {
	srand(time(nullptr));
	Tree test;
	for (unsigned int i = 0; i < 20; ++i) {
		int r = rand() % 100;
		std::cout << r << "\t"; 
		test.insert(r);
	}
	std::cout << std::endl;
	test.print();
	std::cout << test.maxDepth(test.mRoot) << std::endl;
	return 0;
}
