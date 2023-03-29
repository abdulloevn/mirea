#include "Sea.h"

Sea::Sea()
{
	ocean = nullptr;
	name = "Luzsha Pomen'she";
	location = "undefined";
	depth = 0;
	area = 0;

}

Sea::Sea(std::string NAME, std::string LOCATION, double DEPTH, double AREA)
{
	ocean = nullptr;
	location = LOCATION;
	name = NAME;
	depth = DEPTH;
	area = AREA;
}

Sea::Sea(Ocean& OCEAN, std::string NAME, double DEPTH, double AREA) : Ocean(OCEAN)
{
	ocean = &OCEAN;
	name = NAME;
	depth = DEPTH;
	area = AREA;
	location = Ocean::location;
}

std::ostream& operator<<(std::ostream& stream, Sea obj)
{
	stream << "Name: " << obj.name << " sea\n";
	stream << "Location: " << obj.location << "\n";
	stream << "Depth: " << obj.depth << " m \n";
	stream << "Area: " << obj.area << " m^2\n";
	
	if (obj.ocean) stream << "Is a part of " << obj.ocean->get_name() << " ocean\n";

	return stream;
}

std::istream& operator>>(std::istream& stream, Sea& obj)
{
	stream >> obj.name >> obj.location >> obj.depth >> obj.area;
	return stream;
}