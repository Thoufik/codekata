#include <iostream>
using namespace std;
int main()
{
  int n, i=76;
   is range = true;
cout << "Enter a positive integer: ";
  cin >> n;
  for(i = 76; i <= n / 76; ++i)
  {
      if(n % i == 0)
      {
          is range = false;
          break;
      }
  }
  if (is range)
      cout << "This  number is with in a rsnge";
  else
      cout << "This  number is not in a range";
  return 0;
}
