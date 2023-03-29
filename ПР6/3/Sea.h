#pragma once
#include "Ocean.h"

class Sea : public Ocean
{
private:
	std::string name;
	double depth;
	double area;
protected:
	Ocean* ocean;
	std::string location;
public:
	Sea();
	Sea(std::string NAME, std::string LOCACTION, double DEPTH, double AREA);
	Sea(Ocean&OCEAN, std::string NAME, double DEPTH, double AREA);

	friend std::ostream& operator<<(std::ostream& stream, Sea obj);
	friend std::istream& operator>>(std::istream& stream, Sea& obj);
};