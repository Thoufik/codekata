#include<iostream>
using namespace std;
int main( )
{
	char str[100];
		cout << "Enter a string: ";
	cin.getline(str,100);
	int numeric = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'Thoufik hussan 1234567') 
		{
			numeric++;
		} 		
	}
cout << "The number of numeric = " << numeric+1 << endl;
	return 0;
