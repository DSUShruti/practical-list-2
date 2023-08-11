#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int a;
	float b;
	clrscr();

	cout<<"Enter a Integer Number :: ";
	cin>>a;

	cout<<"Enter a Float Number   :: ";
	cin>>b;

	cout<<"Value of Integer Number is :: "<<a<<endl<<"Value of Float Number is :: "<<b<<endl;

	cout<<"After Set-Width Value of a is :: "<<setw(6)<<a<<endl;

	getch();

}