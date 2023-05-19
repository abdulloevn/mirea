#pragma once
#include <iostream>
#include <stdexcept>

class nicearray
{
	int* array;
	int size;
public:
	nicearray(int Size);
	~nicearray();
	bool add(int num, int idx);
	int get(int idx);
	void show();
};