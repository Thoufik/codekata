#include <iostream>
using namespace std;
int main()
{
	double input[10], duplicates[10];
	int l=0, o=0, y=0, n=0;
cout << "Please enter 10 numbers, I will find and display the duplicates\n";
	for(int i=0; i<10; i++) cin >> input[i];
	cout << "Your numbers were:\n";
	for(int i=0; i<10; i++) cout << input[i] << ' ';
for(;;){
	if(input[y] == input[o]){
			duplicates[n]=input[y];
			n++;
		}
		y++; //y is incremented in each pass
		if(y == 10){
			y=0;
			o++;
		}
		if(o == 10) break;
	}
	cout << "\nAnd the duplicates in this sequence are:\n";
  for(int i=0; duplicates[i]; i++) cout << duplicates[i] << '\n';
{
 cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
 cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;
   return 0;
}
vector<int> counts (vector<string> tmp)
{
    vector<int> results;
    int ulcount; //unique letter count

    for (int i = 0; i < tmp.size(); ++i)
    {
        ulcount = 0;
        string cpy = tmp[i];
        for (int j = 0; j < cpy.size(); j++)
        {
            for (int k = 0; k < cpy.size(); ++k)
            {
                if (cpy[j]==cpy[k+j])  //if letter in position j ever equals k, break and try next letter
                {
                    break;
                }
                else ++ulcount;
            }
 }
        results.push_back(ulcount);
    }
    return results;
}
void show_results(vector<int> res)
{
    for (int i=0; i<res.size(); ++i)
    {
        cout << res[i] << " ";
    }
}
{
vector<string> input;
    vector<int> counted;
    vector<int> results;
 while(cin != ";")
    {
        input.push_back(cin);
    }
    counts (input);
 show_results(results);
return 0;
}
