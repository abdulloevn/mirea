#pragma once
#include "Ocean.h"
#include "Sea.h"

class Bay : public Ocean, public Sea
{
private:
	std::string name;
	double depth;
	double area;
protected:
	Ocean* ocean;
	Sea* sea;
	std::string location;
public:
	Bay();
	Bay(std::string NAME, std::string LOCATION, double DEPTH, double AREA);
	Bay(Ocean& OCEAN, std::string NAME, double DEPTH, double AREA);
	Bay(Sea& SEA, std::string NAME, double DEPTH, double AREA);

	double get_depth();
	double get_area();
	std::string get_name();
	std::string get_location();

	friend std::ostream& operator<<(std::ostream& stream, Bay obj);
	friend std::istream& operator>>(std::istream& stream, Bay& obj);
};