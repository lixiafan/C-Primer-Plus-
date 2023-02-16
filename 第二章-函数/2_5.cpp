#include<iostream>
using namespace std;

double convert(double c);

int main()
{
	double c,f;
	cout << "Please enter a Celsius value:";
	cin >> c;
	f = convert(c);	
	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit." << endl;
	return 0;

}

double convert(double c)
{
	return 1.8 * c + 32.0;
}
