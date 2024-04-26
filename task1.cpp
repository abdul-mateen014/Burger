
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
	
	
	for (i = 1; i <= num; i++)
	{
		cout << "\t";

		for (j = 1; j <= num; j++)
		{
			cout << "X";
		}
		cout << endl;
	}

	return 0;

}