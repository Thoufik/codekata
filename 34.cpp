#include<iostream>
using namespace std;
int main( )
{
	char str[100];
		cout << "Enter a string: ";
	cin.getline(str,80);
	int paragraph = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'Thoufik hussan ''prveen kumar''santhosh') 
		{
			paragraph++;
		} 		
	}
cout << "The number of paragraph = " << paragraph+1 << endl;
	return 0;
