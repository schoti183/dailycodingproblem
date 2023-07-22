#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <ostream>

class Node {
	friend std::ostream & operator<<(std::ostream &, Node &);
	friend std::ostream & operator<<(std::ostream &, Node *);
	friend class Tree;
	private:
		Node(int number): mNumber(number), mLeft(nullptr), mRight(nullptr) {}
		int mNumber;
		Node * mLeft;
		Node * mRight;

};
#endif
