#include<iostream>
using namespace std;
void display_time(int hours,int min);
int main()
{
	int hours,min;
	cout << "Enter the number of hours:" << endl;
	cin >> hours;
	cout << "Enter the number of minutes:" << endl;
	cin >> min;
	display_time(hours,min);
	return 0;
}

void display_time(int hours,int min)
{
	cout << "Time: " << hours << ":" << min << endl;
}
