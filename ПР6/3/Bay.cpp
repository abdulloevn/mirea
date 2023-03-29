#include "Bay.h"

Bay::Bay()
{
	ocean = sea = nullptr;
	name = "Melkaya Luzsha";
	location = "undefined";
	depth = 0;
	area = 0;
}

Bay::Bay(std::string NAME, std::string LOCATION, double DEPTH, double AREA)
{
	ocean = sea = nullptr;
	name = NAME;
	location = LOCATION;
	depth = DEPTH;
	area = AREA;
}

Bay::Bay(Ocean& OCEAN, std::string NAME, double DEPTH, double AREA)
{
	ocean = &OCEAN;
	sea = nullptr;
	name = NAME;
	location = Ocean::location;
	depth = DEPTH;
	area = AREA;
}

Bay::Bay(Sea& SEA, std::string NAME, double DEPTH, double AREA) : Sea(SEA)
{
	ocean = nullptr;
	sea = &SEA;
	name = NAME;
	location = Sea::location;
	depth = DEPTH;
	area = AREA;
}

double Bay::get_depth()
{
	return depth;
}

double Bay::get_area()
{
	return area;
}

std::string Bay::get_name()
{
	return name;
}

std::string Bay::get_location()
{
	return location;
}

std::ostream& operator<<(std::ostream& stream, Bay obj)
{
	stream << "Name: " << obj.name << " bay\n";
	stream << "Location: " << obj.location << "\n";
	stream << "Depth: " << obj.depth << " m \n";
	stream << "Area: " << obj.area << " m^2\n";

	if (obj.ocean) stream << "Is a part of " << obj.ocean->get_name() << " ocean\n";
	if (obj.sea) stream << "Is a part of " << obj.ocean->get_name() << " sea\n";

	return stream;
}

std::istream& operator>>(std::istream& stream, Bay& obj)
{
	stream >> obj.name >> obj.location >> obj.depth >> obj.area;
	return stream;
}