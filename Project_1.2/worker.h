#pragma once

#include "header.h"

class Worker
{
private:
	string name;
	string post;
	int year;
public:
	Worker();
	void set(string name, string post, int year);
	string get_name();
	string get_post();
	int get_year();
};