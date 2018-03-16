#include<iostream>
#include <bits/stdc++>
using namespace std;
const int MAX_CHAR = 26;
 void findAndPrintUncommonChars(string str1, string str2)
{
    int present[MAX_CHAR];
    for (int i=0; i<MAX_CHAR; i++)
        present[i] = 0;
    int l1 = str1.size();
    int l2 = str2.size();
    for (int i=0; i<l1; i++)
        present[str1[i] - 'a'] = 1;
    for (int i=0; i<l2; i++)
    {
        if (present[str2[i] - 'a'] == 1
            || present[str2[i] - 'a'] == -1)
            present[str2[i] - 'a'] = -1;
        else
            present[str2[i] - 'a'] = 2;
    }
    for (int i=0; i<MAX_CHAR; i++)
        if (present[i] == 1 || present[i] == 2 )
            cout << (char(i + 'a')) << " ";
}
int main()
{
    string str1 = "tamil nadu";
    string str2 = "kerala";
    findAndPrintUncommonChars(str1, str2);
    return 0;
}
