#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "Element.h"

class List{
	public:
		List(): mHead(nullptr) {}
		void insert(int);
		void print(void) const;

	private:
		Element * mHead;

};

#endif
