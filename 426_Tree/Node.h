#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <ostream>

class Node {
	friend std::ostream & operator<<(std::ostream &, Node &);
	friend std::ostream & operator<<(std::ostream &, Node *);
	friend class Tree;
	friend int getDepth(Node *);
	friend void recursive_sum(int [], int, Node *);
	private:
		Node(int number): mNumber(number), mLeft(nullptr), mRight(nullptr) {}
		int mNumber;
		Node * mLeft;
		Node * mRight;
};
#endif
