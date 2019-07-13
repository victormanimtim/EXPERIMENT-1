#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
int x;
int y;
int z;
int w;
int v;

cout << "Ticket A: $250" << endl;
cout << "5750 type A ticket sold" << endl;
x = 250 * 5750;
cout << "Income = " << x <<endl;

cout << "Ticket B: $100 "<< endl;
cout << "28000 type B ticket sold" << endl;
y = 100 * 28000;
cout << "Income = " << y <<endl;

cout << "Ticket C: $50" << endl;
cout << "35750 type C ticket sold" << endl;
z = 50 * 35750;
cout << "Income = " << x <<endl;

cout << "Ticket D: $25" << endl;
cout << "18750 type D ticket sold" << endl;
w = 25 * 18750;
cout << "Income = " << w <<endl;

v = x + y + z + w;
cout << "Total Income = $" << v <<endl;

getch();
return 0;

}