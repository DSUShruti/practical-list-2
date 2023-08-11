#include<iostream.h>
#include<conio.h>
class temp
{
	public:
		static int a;
};
int temp :: a=9;
voidmain()
{
	clrscr();

	cout<<"Value of Global Value :: "<<temp::a<<endl;

	temp :: a=99;

	cout<<"Value of Local Value  :: "<<temp::a<<endl;

	getch();

}