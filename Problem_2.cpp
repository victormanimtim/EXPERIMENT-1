#include<iostream>
#include<conio.h>
#include<iomanip> 

using namespace std;

int main()
{
int x;
int y;
double z;
cout << fixed << showpoint << setprecision(2);
cout << "Density of an object using G's formula" << endl;
cout << "Provide the needed values for the equation"<< endl;

cout << "mass(g): ";
cin >> x; 

cout << "volume(g/cm^3): ";
cin >> y;

z = ( 1 / (4 * x) ) / y;

cout << "Density = " << z << endl;

getch();
return 0;
}
