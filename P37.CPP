#include<iostream.h>
#include<conio.h>
#define PI 3.14
int vol(int);
float vol(float,float,float);
float vol(float,float);
void main()
{
	int s;
	float l,b,h_r,h_c,r;
	clrscr();

	cout<<"Enter the Length of Rectangle :: ";
	cin>>l;

	cout<<"Enter the Breath of Rectangle :: ";
	cin>>b;

	cout<<"Enter the Height of Rectangle :: ";
	cin>>h_r;

	cout<<"Enter the Side of Square      :: ";
	cin>>s;

	cout<<"Enter the Radius of Cylinder    :: ";
	cin>>r;

	cout<<"Enter the Height of Rectangle :: ";
	cin>>h_c;

	cout<<"Volume of Rectangle is :: "<<vol(l,b,h_r)<<endl;

	cout<<"Volume of Square is    :: "<<vol(s)<<endl;

	cout<<"Volume of Cylinder is  :: "<<vol(r,h_c)<<endl;

	getch();

}
int vol(int s)
{
	return s*s*s;
}
float vol(float l,float b,float h)
{
	return l*b*h;
}
float vol(float r,float ht)
{
	return PI*r*r*ht;
}
