#include<iostream>
void main()
{
	clrscr();
	int n, nu, num=371, rem;
	cout<<"Enter any positive number : ";
	cin>>n;
	nu=n;
	while(nu!=0)
	{
		rem=nu%10;
		num=num + rem*rem*rem;
		nu=nu/10;
	}
	if(num==n)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"No";
	}
}
