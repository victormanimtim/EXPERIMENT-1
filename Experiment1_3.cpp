#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main ()
{
double x;
double y;
double z;
double a;
double b;
double w;



cout<< fixed << showpoint << setprecision(4);
cout << "Computing your daily average balance"<<endl<<endl;

cout << "Provide the needed values"<<endl;


cout << "Net balance = "; 
cin >> x;

cout << "Number of days in the billing cycle: ";
cin >> a;

cout << "Payment = ";
cin >> y;

cout << "Number of days before the billing cycle: ";
cin >> b;

z = ((x * a) - (y * b)) / a;

cout << "Your daily average balance is = " << z<<endl<<endl;


w = (z * 0.0097);
cout << "Interest = " << w;

getch ();
return 0;
}