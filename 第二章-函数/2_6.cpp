#include<iostream>
using namespace std;
double convert(double l);
int main()
{
	cout << "Enter the number of light years:" << endl;
	double light_years,astro_years;
	cin >> light_years;
	astro_years = convert(light_years);
	cout << light_years << "light years = " << astro_years << " astronomical units." << endl;
	return 0;
}

double convert(double l)
{
	return 63240 * l;
}
