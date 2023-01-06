#include <iostream>
using namespace std;
int main()
{
	int hour1, min1, sec1, hour2, min2, sec2, price;
	float t1, t2, t, money;
	price = 2;
	cout << "start time "
		"of the trip:\n";
	cout << "enter hours:\n";
	cin >> hour1;
	cout << "enter minutes:\n";
	cin >> min1;
	cout << "enter seconds:\n";
	cin >> sec1;
	cout << "end time "
		"of the trip:\n";
	cout << "enter hours:\n";
	cin >> hour2;
	cout << "enter minutes:\n";
	cin >> min2;
	cout << "enter seconds:\n";
	cin >> sec2;
	t1 = hour1 * 60 + min1 + sec1 / 60;
	t2 = hour2 * 60 + min2 + sec2 / 60;
	t = t2 - t1;
	money = price * t;
	cout << "You have to pay: " << money << "hr";
}
