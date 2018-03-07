#include<iostream>
using namespace std;
int minOps(string& x, string& y)
{
 int m = x.length(), n = y.length();
    if (n != m)
       return -1;
    int count[256];
    memset(count, 0, sizeof(count));
    for (int i=0; i<n; i++)   
       count[y[i]]++;
    for (int i=0; i<n; i++)   
       count[x[i]]--;         
    for (int i=0; i<256; i++) 
      if (count[i])
         return -1;
    int res = 0;
    for (int i=n-1, j=n-1; i>=0; )
    {
               while (i>=0 && x[i] != y[j])
        {
            i--;
            res++;
        }
 
               if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}


}
int lcs(string str1, string str2, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
      else if (str1.at(i-1) == str2.at(j-1))
         L[i][j] = L[i-1][j-1] + 1;
   else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}
void printMinDelAndInsert(string str1, string str2)  
{
    int m = str1.size();
    int n = str2.size();
       int len = lcs(str1, str2, m, n);
      cout << "Minimum number of deletions = "
         << (m - len) << endl;
      cout << "Minimum number of insertions = "  
         << (n - len) << endl;  
}
int main()
{
  string str1 = "thoufik";
  string str2 = "hussan";  
  printMinDelAndInsert(str1, str2); 
  return 0;
} 
