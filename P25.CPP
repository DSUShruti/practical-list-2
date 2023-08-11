#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	float b;
	clrscr();

	cout<<"Enter a Float Number   :: ";
	cin>>b;

	cout<<"Value of Float Number is :: "<<b<<endl;

	cout<<"After Set-Pricision Value of a is :: "<<setprecision(3)<<b<<endl;

	getch();

}