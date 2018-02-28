  #include <iostream>
using namespace std;

const int SECS_MIN = 60;
const int SECS_HR = 60 * 60;
int main()
{
	int secs;
	int rsecs = 0;  
	int hours, mins; 
	cout << "Enter number of seconds: ";
	cin >> secs;
	cout << secs / SECS_HR << endl;
	if (secs >= SECS_HR) 
  {
			hours = rsecs / SECS_HR;
		rsecs = rsecs % SECS_HR;
		mins = rsecs / SECS_MIN;
		rsecs = rsecs % SECS_MIN;
		cout << "There are " << " << hours << " hours, " << mins
			<< " minutes, and " << rsecs << " seconds in " << secs << " seconds\n";
	}
	else if (secs >= SECS_HR) {
		hours = secs / SECS_HR;
		rsecs = secs % SECS_HR;
		mins = rsecs / SECS_MIN;
		rsecs = rsecs % SECS_MIN;
		cout << "There are " << hours << " hours, " << mins
			<< " minutes, and " << rsecs << " seconds in " << secs << " seconds\n";
	}
	else if (secs >= SECS_MIN) {
		mins = secs / SECS_MIN;
		secs = secs % SECS_MIN;
		cout << "There are " << mins
			<< " minutes, and " << rsecs << " seconds in " << secs << " seconds\n";
	}
	else
		cout << " " << secs << " seconds are less than one minute\n";
	return 0;
}
