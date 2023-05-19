#pragma once
#include <set>
#include <iostream>
#include <stdexcept>


class setgetter
{
public:
	template <class T>
	static T get(std::set<T> set)
	{
		try {
			if (set.begin() == set.end()) throw std::out_of_range("Out of range");
			return *set.begin();
		}
		catch (std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
			return T();
		}
	}
};
