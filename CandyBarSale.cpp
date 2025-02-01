// Candy Bar Sales
// This Program calculates how much a student orginization earns during its fund-raising candy sale. 
// The Program should promt the user to enter the number of candy bars sold and the amount the 
// organization ears for each bar sold. It should then calculate and display the total amount earned. 

#include <iostream>
using namespace std;

int main() {
	int candy;
	int money;
	int total;

	cout << "How many candy bars have been sold?" << endl;
	cin >> candy;
	cout << "How much was each candy bar?" << endl;
	cin >> money;
	total = candy * money;
	cout << "The total profit is: $" << total << endl;

	return 0;
}
