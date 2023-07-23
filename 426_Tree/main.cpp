#include <algorithm>
#include <iostream>
#include <iterator>
#include <ctime>

#include "Node.h"
#include "Tree.h"

int main() {
	srand(time(nullptr));
	Tree test;
	std::cout << "Generating random numbers: " << std::endl;
	for (unsigned int i = 0; i < 5; ++i) {
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
	int min_lvl[2] = {0, 100000};
	for (int i = 1; i < depth+1; ++i) {
		std::cout << i << ": " << lvlsums[i] << std::endl;
		if (lvlsums[i] < min_lvl[1]) {min_lvl[0] = i; min_lvl[1] = lvlsums[i];}
	}
	std::cout << "Minimum level sum: " << min_lvl[0] << " (" << min_lvl[1] << ")" << std::endl;
	return 0;
}
