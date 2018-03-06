#include <iostream>
#include <string>
#include <vector>
using namespace std;
string getMinRemoveK(const string& num, int k)
{
	string result = num;
	if( k <= 0 )
	return num;
	else if( num.size() > 0 && num.size() > k )
	{
		int i;
		for( i = 0; i < k; i++ )
		{
			int digit_index;
			for(digit_index = 0; digit_index < result.size()-1; digit_index++ )
			{
				if( result[digit_index] > result[digit_index+1] )
				{
					result.erase(result.begin() + digit_index);
					break;
				}
			}
			if( digit_index == result.size()-1 )
			{
				result.erase(result.end()-1);
			}
		}
	}
	return result;
}

int main()
{
	cout << getMinRemoveK("6236554", 2) << endl;
	cout << getMinRemoveK("8361957", 3) << endl;
	cout << getMinRemoveK("13", 1) << endl;
	return 0;
}
