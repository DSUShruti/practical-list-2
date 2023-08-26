#include<iostream.h>
#include<conio.h>
int sum(int &,int &);

void main()
{
	int x,y,result;
	clrscr();

	cout<<"Enter the value of x :: ";
	cin>>x;

	cout<<"Enter the value of y :: ";
	cin>>y;

	result=sum(x,y);

	cout<<result<<endl;

	getch();

}
int sum(int &a,int &b)
{
	return a+b;
}