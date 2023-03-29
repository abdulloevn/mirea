#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

void pause()
{
	system("pause");
	system("cls");
}

int main()
{
	using namespace std;
	Ocean ocean1 = Ocean("Pacific", "Don't know, Earth probably", 4280, 165250000);
	cout << ocean1;
	cout << "\nWe offer you to enter some data for an ocean you know.\n";

	Ocean ocean2 = Ocean();
	cout << "(NAME, LOCATION, DEPTH, AREA): ";
	cin >> ocean2;

	cout << "\nHere's what I've managed to form:\n";
	cout << ocean2;

	pause();

	std::cout << "\nGood job! I have no idea what this ocean is since I don't know geography.\n";
	std::cout << "\nI think that Laptev sea is a part of the ocean you just entered:\n";
	Sea sea1 = Sea(ocean2, "Laptev", 578, 700000);
	cout << sea1;

	pause();

	cout << endl;
	Bay bay1 = Bay(ocean1, "Kamchatka", 2000, rand());
	cout << bay1;
	std::cout << "\nI can also use the base class methods in order to";
	std::cout << "\naccess the values separately: \n";
	std::cout << "The name is " << bay1.get_name() << " and the depth is " << bay1.get_depth();

	pause();

	std::cout << "And finally, an object like sea doesn't necessarily have to ";
	std::cout << "be a part of any ocean:\n\n";
	Sea sea2 = Sea("Caspian", "Eastern Europe", 211, 371000);
	cout << sea2;
}
