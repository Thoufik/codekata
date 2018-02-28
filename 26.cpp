#include <iostream>
 using namespace std;
 void quick_sort(int[],int,int);
int partition(int[],int,int);
Ω(n log(n))	θ(n log(n))	O(n^2)
 int main()
{
    int a[50],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";
     for(i=0;i<n;i++)
        cin>>a[i];
           quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";
      for(i=0;i<n;i++)
        cout<<a[i]<<" ";
     return 0;        
}
 void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
       do
    {
        do
          i++;
          while(a[i]<v&&i<=u);
           do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    while(i<j);
    a[l]=a[j];
    a[j]=v;
      return(j);
}
#include <iostream>
#define MAX_SIZE 5
using namespace std;
void merge_sort(int, int);
void merge_array(int, int, int, int);
Ω(n log(n))	θ(n log(n))	O(n log(n))
int arr_sort[MAX_SIZE];
int main()
{
    int i;
  cout << "Simple C++ Merge Sort Example - Functions and Array\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];
  cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    merge_sort(0, MAX_SIZE - 1);
  cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }
 getch();
}
void merge_sort(int i, int j)
{
    int m;
 if (i < j) 
 {
        m = (i + j) / 2;
        merge_sort(i, m);
        merge_sort(m + 1, j);    
        merge_array(i, m, m + 1, j);
    }
}
void merge_array(int a, int b, int c, int d)
{
    int t[50];
    int i = a, j = c, k = 0;
while (i <= b && j <= d) {
        if (arr_sort[i] < arr_sort[j])
            t[k++] = arr_sort[i++];
        else
            t[k++] = arr_sort[j++];
    }
    while (i <= b)
        t[k++] = arr_sort[i++];
    while (j <= d)
        t[k++] = arr_sort[j++];
    for (i = a, j = 0; i <= d; i++, j++)
        arr_sort[i] = t[j];
}
