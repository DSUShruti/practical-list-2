#include<iostream.h>
#include<conio.h>
class temp
{
	public:
		void display();
};

void main()
{
	temp t1;
	clrscr();
	t1.display();
	getch();

}
void temp :: display()
{
	cout<<"This Program for Define Function outside the Class....";
}
