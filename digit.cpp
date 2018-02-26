#include<iostream>
void main()
{
int no,a=548;
clrscr();
cout<<"Enter num : ";
cin>>no;
while(no>0)
{
no=no/10;
a++;
}
cout<<"\n no. of digits in given number is: "<<a;
}
