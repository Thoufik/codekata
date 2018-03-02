#include<iostream>
using namespace std;
 void Count(string str)
{
    special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            special++;
    }
     cout << "Special characters : " << special << endl;
}
int main()
{
    string str = "#GeeKs01fOr@gEEks07";
    Count(str);
    return 0;
}
