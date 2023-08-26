#include<iostream.h>
#include<conio.h>
inline int sqr(int);
void main()
{
	int num,ans;
	clrscr();

	cout<<"Enter any Number to find Cube :: ";
	cin>>num;

	ans=sqr(num);

	cout<<"Square of given Number is :: "<<ans;

	getch();

}
inline int sqr(int a)
{
	return (a*a);
}