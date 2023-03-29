#pragma once
#include <iostream>
#include <string>

class Ocean
{
private:
	std::string name;
	double depth;
	double area;
protected:
	std::string location;
public:
	Ocean();
	Ocean(std::string NAME, std::string LOCACTION, double DEPTH, double AREA);

	double get_depth();
	double get_area();
	std::string get_name();
	std::string get_location();

	friend std::ostream& operator<<(std::ostream& stream, Ocean obj);
	friend std::istream& operator>>(std::istream& stream, Ocean& obj);
};