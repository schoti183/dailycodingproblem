#include "Node.h"
#include <ostream>

//printing one Note

std::ostream & operator<<(std::ostream & os, Node & a) {
	os << a.mNumber << std::endl;
	return os;
}

std::ostream & operator<<(std::ostream & os, Node * a) {
	if (a) {
	if (a->mLeft) os << a->mLeft;
	os << *a;
	if (a->mRight) os << a->mRight;
	}
	return os;
}
