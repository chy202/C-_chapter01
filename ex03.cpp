#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, c;

	cout << "First length: ";
	cin >> a;
	cout << "Second length: ";
	cin >> b;

	c = sqrt(a * a + b * b);
	cout << "Hypothese: " << c << endl;
	
	return 0;
}
