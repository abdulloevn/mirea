#include "Cone.h"
#include "Frustum.h"
#include <iostream>

int main()
{
	using namespace std;

	//1
	Frustum* tr_cones = new Frustum[4]();
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter r1, r2 & h for Cone #" << i + 1 << ": ";
		cin >> tr_cones[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cout << tr_cones[i] << endl;
	}
	cout << endl << endl;

	//2
	cout << "And finally, look how you can create ";
	cout << "Frustums based on an existing cone :D" << endl;
	Cone* le_cone = new Cone(5, 2);
	Frustum* troncc1 = new Frustum(*le_cone, 10);
	Frustum* troncc2 = new Frustum(*le_cone, 100);
	Frustum* troncc3 = new Frustum(*le_cone, 50);

	cout << *troncc1 << endl;
	cout << *troncc2 << endl;
	cout << *troncc3 << endl;

	cout << "A few examples of comparison of frustams:" << endl;
	cout << "F1 > F2: " << (*troncc1 > *troncc2) << endl;
	cout << "F2 > F3: " << (*troncc2 > *troncc3) << endl;
	cout << "F3 == F3: " << (*troncc3 == *troncc3) << endl;
}
