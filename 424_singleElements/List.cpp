#include <iostream>

#include "List.h"

void List::insert(int n) {
	if (!(this->mHead)) {mHead = new Element(n); return;}
	Element * p = this->mHead;
	while (p) {
		if (n < p->mNumber) {
			Element * tmp = new Element(n, nullptr, p);
			if (p->mPrevious) {
				tmp->mPrevious = p->mPrevious;
				tmp->mPrevious->mNext = tmp;
			}
			else mHead = tmp;
			p->mPrevious = tmp;
			return;
		}
		if (p->mNumber == n) {
			if (!p->mPrevious) {
				mHead = p->mNext;
				delete p;
				return;
			}
			if (!p->mNext) {
				if (!p->mPrevious) mHead = nullptr;
				else p->mPrevious->mNext = nullptr;
				delete p;
				return;
			}
			std::cout << n << std::endl;
			p->mPrevious->mNext = p->mNext;
			p->mNext->mPrevious = p->mPrevious;
			delete p;
			return;
		}
		if (!p->mNext) {
			p->mNext = new Element(n, p);
			return;
		}
		else {p = p->mNext;}
	}
}

void List::print(void) const {
	for (Element * p = mHead; p; p = p->mNext) {
		std::cout << p->mNumber << "\t";
	}
}
