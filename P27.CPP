#include<iostream.h>
#include<conio.h>
enum boolean {f,t};
void main()
{

	clrscr();

	cout<<"AND Gate..."<<endl;

	cout<<"A"<<'\t'<<"B"<<'\t'<<"OUTOUT"<<endl;
	cout<<f<<'\t'<<f<<'\t'<<f*f<<endl;
	cout<<f<<'\t'<<t<<'\t'<<f*t<<endl;
	cout<<t<<'\t'<<f<<'\t'<<t*f<<endl;
	cout<<t<<'\t'<<t<<'\t'<<t*t<<endl;

	getch();

}