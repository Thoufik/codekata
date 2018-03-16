#include<iostream>
using namespace std;
void main()
{
	clrscr();
	int start, end, l, r, count=0;
		cout<<"Enter starting number : ";
	cin>>start;
	cout<<"Enter ending number : ";
	cin>>end;
	cout<<"Prime Number Between "<<start<<" and "<<end<<" is :\n";
	for(l=start; l<=end; l++)
	{
		count=0;
		for(r=2; r<i; r++)
		{
			if(i%r==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<l<<" ";
		}
	}
	getch();
}
