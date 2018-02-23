#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int yr;
	cout<<"Enter year=2016:";
	cin>>yr;
	if((yr%4==0) && (yr%100!=0))
	{
		cout<<"This is a Leap Year";
	}
	else if(yr%100==0)
	{
		cout<<"This is not a Leap Year";
	}
	else if(yr%400==0)
	{
		cout<<"This is a Leap Year";
	}
	else
	{
		cout<<"This is not a Leap Year";
	}
	getch();
}
