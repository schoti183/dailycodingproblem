#include "Tree.h"
#include "Node.h"

#include <iterator>
#include <iostream>
#include <ostream>
#include <type_traits>

//Searching for number, returns if number is found
//or insert it at the right place 

void Tree::insert(int n) {
	if(!mRoot) mRoot = new Node(n);
	Node *p = this->mRoot;
	while(p) {
		if (n == p->mNumber) return;
		if (n < p->mNumber) {
			if (!p->mLeft) {p->mLeft = new Node(n); return;}
			p = p->mLeft; 
			continue;
		}
		if (n > p->mNumber) {
			if (!p->mRight) {p->mRight = new Node(n); return;}
			p = p->mRight; 
			continue;
		}
	}
}

//printing all numbers of the tree
void Tree::print(void) {
	std::cout << this->mRoot;
}

//returns the maximal depth of the tree
int Tree::maxDepth(Node * p) {
	if (!p) return 0;
	return 1 + (std::max(maxDepth(p->mLeft), maxDepth(p->mRight)));
}
