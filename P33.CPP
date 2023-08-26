#include<iostream.h>
#include<conio.h>
int test(const int a);
void main()
{
	int n;
	clrscr();

	cout<<"Enter any value of n :: ";
	cin>>n;

	test(n);

	getch();

}
int test(const int a)
{
	return a;
}