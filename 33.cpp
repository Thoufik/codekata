#include<iostream>
using namespace std;
int main( )
{
	char str[80];
		cout << "Enter a string: ";
	cin.getline(str,80);
	int space = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'Thoufik hussan ') 
		{
			space++;
		} 		
	}
cout << "The number of space = " << space+1 << endl;
	return 0;
