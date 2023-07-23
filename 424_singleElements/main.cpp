#include "List.h"
#include <iostream>

int main() {
	std::cout << "Hello, World!" << std::endl;
	int arr[9] = {4, 2, 4, 6, 8, 10, 2, 6, 10};
	List list;
	for (int i = 0; i < 9; ++i) {
		list.insert(arr[i]);
	}
	list.print();
	return 0;
}

