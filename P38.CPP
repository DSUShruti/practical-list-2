#include<iostream.h>
#include<conio.h>
float area(float r, float PI=3.14);
void main()
{
	float r;
	clrscr();

	cout<<"Enter Radius of given Circle :: ";
	cin>>r;

	area(r);

	getch();

}
float area(float r, float PI)
{
	cout<<PI*r*r;
}