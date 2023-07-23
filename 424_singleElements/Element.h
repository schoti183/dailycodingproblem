#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED

class Element{
	friend class List;
	private:
		Element(int n, Element * prev = nullptr, Element * next = nullptr): mNumber(n), mNext(next) {}
		int mNumber;
		Element * mPrevious;
		Element * mNext;

};

#endif
