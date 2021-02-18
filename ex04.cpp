#include <iostream>
using namespace std;

int main()
{
	double l, w, h, v, a;

	cout << "Length: ";
	cin >> l;
	cout << "Width: ";
	cin >> w;
	cout << "Height: ";
	cin >> h;

	v = l * w * h;
	cout << "Volume of the box: " << v << endl;

	a = 2 * ((l * w) + (w * h) + (h * l));
	cout << "Area of the box: " << a << endl;

	return 0;
}
