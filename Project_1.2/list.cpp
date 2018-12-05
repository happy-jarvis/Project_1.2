#include "list.h"

List::List()
{
	length = 0;
	head = nullptr;
	tail = nullptr;
}

List::~List()
{
	while (length != 0)
	{
		tail = head->ptrNext;
		delete head;
		head = tail;
		length--;
	}
}

List::Node::Node(Worker data, Node * ptrNext)
{
	this->data = data;
	this->ptrNext = ptrNext;
}
