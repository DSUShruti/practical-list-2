#include<iostream.h>
#include<conio.h>
inline int cube(int);
void main()
{
	clrscr();

	cout<<cube(2)<<endl;

	cout<<cube(3)<<endl;

	cout<<cube(9)<<endl;

	getch();

}
inline int cube(int a)
{
	return (a*a*a);
}