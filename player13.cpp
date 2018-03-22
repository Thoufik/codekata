#include<iostream>
 using namespace std;
 int main()
{
    unsigned long n,i,sum=0,d;
    cout<<"Enter any number:";
    cin>>n;
  for(i=1;i<=n;++i)
    {
        d=i*i;
        sum+=d;
    }
    cout<<"Sum="<<sum;
    return 0;
}
