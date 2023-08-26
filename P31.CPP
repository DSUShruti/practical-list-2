#include<iostream.h>
#include<conio.h>
int &test();
int x=5;
void main()
{
	test()=99;
	clrscr();

	cout<<x<<endl;

	getch();

}
int &test()
{
	return x;
}