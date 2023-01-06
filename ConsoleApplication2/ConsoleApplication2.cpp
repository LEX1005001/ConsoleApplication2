#include <iostream>
using namespace std;
int main()
{
	int number, d1, d2, d3, d4;

	cout << "4-number: " "\n";
	cin >> number;//1234

	if (number < 1000 || number > 9999) {
		cout << "wrong nummber :/";
	}
	else {
		cout << "correct number";
	}//1234
	d4 = number % 10;//4
	number = number / 10;//123
	d3 = number % 10;//3
	number = number / 10;//12
	d2 = number % 10;//2
	number = number / 10;//1
	d1 = number % 10;//1
	cout << d2 << d1 << d4 << d3;
	
}
