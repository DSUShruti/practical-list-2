#include<iostream.h>
#include<conio.h>
#define PI 3.14
float area(float,float);
float area(int);
float area(float);
void main()
{
	int s;
	float l,b,r;
	clrscr();

	cout<<"Enter the Length of Rectangle :: ";
	cin>>l;

	cout<<"Enter the Breath of Rectangle :: ";
	cin>>b;

	cout<<"Enter the Side of Square      :: ";
	cin>>s;

	cout<<"Enter the Radius of Circle    :: ";
	cin>>r;

	cout<<"Area of Rectangle :: "<<area(l,b)<<endl;

	cout<<"Area of Square    :: "<<area(s)<<endl;

	cout<<"Area of Circle    :: "<<area(r)<<endl;

	getch();

}
float area(float l,float b)
{
	return l*b;
}
float area(int s)
{
	return s*s;
}
float area(float r)
{
	return PI*r*r;
}