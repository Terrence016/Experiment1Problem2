#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;


int main ()

{
	double Mass, Density;

	cout << "Input Mass: " << endl;
	cin >> Mass;

	cout << "Input Density: " << endl;
	cin >> Density; 

	cout << "Mass: " << M << "g" << endl;

	cout << "Density: " << D << "" << endl;

	cout << "Volume: " << M/(4*D) << "cm^3" << endl;
	
	_getch();
	return 0;
}