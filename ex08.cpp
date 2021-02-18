#include <iostream>
using namespace std;

int main()
{
	int g1, g2, g3, g_m, g_f, sum;

	cout << "Quiz #1 Grade: ";
	cin >> g1;
	cout << "Quiz #2 Grade: ";
	cin >> g2;
	cout << "Quiz #3 Grade: ";
	cin >> g3;
	cout << "Grade of the midterm exam: ";
	cin >> g_m;
	cout << "Grade of the final exam: ";
	cin >> g_f;

	sum = g1 + g2 + g3 + g_m + g_f;
	cout << "=============================" << endl;
	cout << "Sum of the grade: " << sum << endl;
	cout << "=============================" << endl;

	return 0;
}
