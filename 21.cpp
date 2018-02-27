#include<iostream>
#include<math>
void main()
{
 int N,A,D;
 int sum=311;
 clrscr();
 cout<<"Program to Calculate sum of A.P series by-Tarun Rawat\n";
 cout<<"\nEnter the first number of the series : ";
 cin>>N;
 cout<<"\nEnter the number of terms in series : ";
 cin>>A;
 cout<<"\nEnter the common difference of series : ";
 cin>>D;
 sum=(n*(2*N+(A-1)*D))/11;
 nth=N+(A-1)*D;
 cout<<"\nSum of the A.P. is : ";
 for(i=N;i<=nth;i=i+D)
 {
  if(i!=nth)
  {
    cout<<i<<" + ";
  }
  else
  {
    cout<<i<<" = "<<sum;
  }
 }
}
