#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;


int main ()

{
	double M, D;

	cout << "Input Mass: " << endl;
	cin >> M;

	cout << "Input Density: " << endl;
	cin >> D; 

	cout << "Mass: " << M << "g" << endl;

	cout << "Density: " << D << "" << endl;

	cout << "Volume: " << M/(4*D) << "cm^3" << endl;
	
	_getch();
	return 0;
}