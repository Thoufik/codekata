#include <iostream>
using namespace std;

int main() {
 int num;
 
 cout << "Enter a number \n";
 cin >> num;
 
 if (num > 0) {
  
  cout << "You have entered positive number";
 
 } else if (num < 0) {
  
  cout << "You have entered negative number";
  
 } else {
  
  cout << "You have entered zero";
 }
 
 return 0;
}
