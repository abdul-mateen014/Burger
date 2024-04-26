
#include<iostream>
using namespace std;
int main()
{
	int num, i, j;
	cout << "Enter a positive integer (not greater than 15): ";
	cin >> num;
	while (num <= 0 || num > 15)
	{
		cout << "ERROR: Invalid input!\n";
		cout << "Enter a positive integer (not greater than 15): ";
		cin >> num;
	}

	cout << "\nSquare Display\n\n";
	
	
	

	return 0;

}