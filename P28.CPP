#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	float km,cm,m,in,f;
	clrscr();

	cout<<"Enter any Value in kilometer :: ";
	cin>>km;

	m=km*1000;
	cm=m*100;
	in=km*39370.07874;
	f=km*3280.84;

	cout<<"Value of kilometer in Centimeter ::  "<<cm<<endl;

	cout<<"Value of kilometer in Meter      ::  "<<m<<endl;

	cout<<"Value of kilometer in Inch       ::  "<<in<<endl;

	cout<<"Value of kilometer in Feet       ::  "<<f<<endl;

	getch();

}

//<<setprecision(6)