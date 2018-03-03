#include<iostream.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void main()
{
 char str[100],temp;
 int i,j=0;
 clrscr();
 cout<<"thoufikhussan:";
 gets(str); 
 i=0;
 j=strlen(str)-1;
  while(i<j)
   {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i++;
   j--;
   }
 cout<<"Reverse string is: "<<str;
}
