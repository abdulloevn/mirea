#include "Ocean.h"

Ocean::Ocean()
{
	name = "Ochen Bol'shaya luzsha";
	location = "undefined";
	depth = 0;
	area = 0;
}

Ocean::Ocean(std::string NAME, std::string LOCACTION, double DEPTH, double AREA)
{
	name = NAME;
	location = LOCACTION;
	depth = DEPTH;
	area = AREA;
}

double Ocean::get_depth()
{
	return depth;
}

double Ocean::get_area()
{
	return area;
}

std::string Ocean::get_name()
{
	return name;
}

std::string Ocean::get_location()
{
	return location;
}

std::ostream& operator<<(std::ostream& stream, Ocean obj)
{
	stream << "Name: " << obj.name << " ocean\n";
	stream << "Location: " << obj.location << "\n";
	stream << "Depth: " << obj.depth << " m \n";
	stream << "Area: " << obj.area << " m^2\n";

	return stream;
}

std::istream& operator>>(std::istream& stream, Ocean& obj)
{
	stream >> obj.name >> obj.location >> obj.depth >> obj.area;
	return stream;
}