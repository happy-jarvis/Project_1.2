#pragma once

#include "worker.h"

class List
{
private:
	class Node
	{
	public:
		Worker data;
		Node *ptrNext;

		Node(Worker data = Worker(), Node *ptrNext = nullptr);
	};
	int length;
	Node *head;
	Node *tail;

public:
	List();
	~List();
	void create(int length);
	void push();
	void fill(string name, string post, int year, int ID);
	void show(int ID);
	void sorting();
	void swap(Worker &object_1, Worker &object_2);
};