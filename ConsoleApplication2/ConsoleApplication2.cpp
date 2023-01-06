#include <iostream>
using namespace std;
int main()
{
	int number, d1, d2, d3, d4, d5, d6, sum1, sum2;

	cout << " 6-digit number:\n";
	cin >> number;//123456
	if (number / 100000 < 1)
	{
		cout << "Your number includes less than "
			"6 digits!\n";
	}
	else if (number / 100000 > 9)
	{
		cout << "Your number includes more than "
			"6 digits!\n";
	}
	else
	{
		cout << "Your number includes exactly "
			"6 digits!\n";
	}

	
	d6=number % 10; //6
	number = number / 10;//12345

	d5 = number % 10;//5
	number = number / 10;//1234

	d4 = number % 10;//4
	number = number / 10;//123

	d3 = number % 10;//3
	number = number / 10;//12

	d2 = number % 10;//2
	number = number / 10;//1

	d1 = number % 10;//1
	
	sum1 = d1 + d2 + d3;
	sum2 = d4 + d5 + d6;

	if (sum1 == sum2) {
		cout << "correct number, you are lucky!! :)";
	}
	else {
		cout << "you didn't guess the number";
	}

}
