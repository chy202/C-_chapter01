#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double r, a, v;

	cout << "Radius; ";
	cin >> r;

	a = 4 * 3.141592 * pow(r, 2);
	cout << "Area: " << a << endl;

	v = 4 / 3 * 3.141592 * pow(r, 3);
	cout << "Volume: " << v << endl;

	return 0;
}
