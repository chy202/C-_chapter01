#include <iostream>
using namespace std;

int main()
{
	double s, m, h, t;

	cout << "Hour: ";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
	cout << "Second: ";
	cin >> s;

	m = s * 60;
	h = s * 60 * 60;
	t = s + m + h;

	cout << "Total second: " << t << endl;

	return 0;
}
