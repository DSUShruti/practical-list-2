#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int a;
	clrscr();

	cout<<"Enter a Integer Number   :: ";
	cin>>a;

	cout<<"Value of Integer Number is :: "<<a<<endl;

	cout<<"After Set-Fill Value of a is :: "<<setfill('0')<<setw(6)<<a<<endl;

	getch();

}