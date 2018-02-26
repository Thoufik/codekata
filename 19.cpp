#include<iostream>
using namespace std;
void main()
{
	clrscr();
	int num, i, fact=5;
	cout<<"Enter a number : ";
	cin>>num;
	for(i=num; i>0; i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
}
