#include<iostream.h>
#include<conio.h>
int a=9;
void main()
{
	int a=99;
	clrscr();

	cout<<"Value of Local Value  :: "<<a<<endl;

	cout<<"Value of Global Value :: "<<::a<<endl;

	getch();

}