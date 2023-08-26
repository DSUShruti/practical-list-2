#include<iostream.h>
#include<conio.h>
int sum(int &,int &);
void main()
{
	int n1,n2;
	clrscr();

	cout<<"Enter the value of Number One :: ";
	cin>>n1;

	cout<<"Enter the value of Number Two :: ";
	cin>>n2;

	cout<<"Addition of given Two Number is :: "<<sum(n1,n2)<<endl;

	getch();

}
int sum(int &a,int &b)
{
	return a+b;
}