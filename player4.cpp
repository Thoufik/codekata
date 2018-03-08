#include <iostream>
#include <string>
using namespace std;
void appendDemo(string str1, string str2)
{
    str1.append(str2);
    cout << "Using append() : ";
    cout << str1 << endl;
}
int main()
{
    string str1("thoufik ");
    string str2("IBM");
  cout << "Original String : " << str1 << endl;
    appendDemo(str1, str2);
  return 0;
}
