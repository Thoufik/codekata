#include <iostream>
using namespace std; 
int main()
{ 
	int integer1, integer2, integer3, integer4, integer5, median;
std::cout << "Enter the first integer: "; 
std::cin >> integer1; 
std::cout << "Enter the second integer: "; 
std::cin >> integer2; 
std::cout << "Enter the third integer: "; 
std::cin >> integer3; 
std::cout << "Enter the fourth integer:";
std::cin >> integer4;
std::cout << "Enter the fifth integer:";
std::cin >> integer5;
std::array<int, 5> array = {integer1, integer2, integer3, integer4, integer5}; 
std::sort(array.begin(), array.end());
for (int a : array) {
		std::cout << a << " ";
}

