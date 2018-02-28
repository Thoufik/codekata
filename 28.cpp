#include <iostream>
#include <array>
int main ()
{
  std::array<int,5> myints;
  std::cout << "size of myints: " << myints.size() << std::endl;
  std::cout << "sizeof(myints): " << sizeof(myints) << std::endl;
  return 0;
}
int[] Array = { 5, 8, 3, 7 };
int Element = 7;
int Index;
for (int i = 0; i < Array.Length; i++)
{
     if (Element == Array[i])
     {
         Index = i;
     }
}
