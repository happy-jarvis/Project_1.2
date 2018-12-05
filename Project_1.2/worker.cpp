#include "worker.h"

Worker::Worker()
{
	name = "empty";
	post = "empty";
	year = 0;
}

void Worker::set(string name, string post, int year)
{
	this->name = name;
	this->post = post;
	this->year = year;
}

string Worker::get_name()
{
	return name;
}

string Worker::get_post()
{
	return post;
}

int Worker::get_year()
{
	return year;
}
