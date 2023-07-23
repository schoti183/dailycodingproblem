#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include "Node.h"
#include <ostream>

class Tree {
	public:
		Tree(): mRoot(nullptr) {}
		void insert(int);
		void print(void);
		int maxDepth();
		void lvlsum(int []);

	private:
		Node * mRoot;
};

#endif
