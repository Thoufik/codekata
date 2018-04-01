#include<iostream>
using namespace std;
long long getSmallestDivNum(long long n)
{
    bool found = true;
    int i = 2;
    while(1)
    {
        long long r = n*i;
        found = true;
        for(int j=2;j<=n;j++)
        {
            if( r % j != 0)
            {
                found  = false;
            }
        }
        if(found != true)
        {
            i++;
        }
        else
        {
            return r;
        }
    }
}
