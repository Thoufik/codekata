#include <iostream>
using namespace std;
void relationalOperation(string s1, string s2)
{
 if (s1 != s2)
        cout << s1 << " is not equal to "
             << s2 << endl;
    if (s1 > s2)
        cout << s1 << " is greater than "
             << s2 << endl;
    else
        cout << s2 << " is greater than "
             << s1 << endl;
}
int main()
{
    string s1("science");
    string s2("computer science");
    relationalOperation(s1, s2);
    return 0;
}
