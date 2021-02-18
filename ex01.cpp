#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, v, o, s1;

	cout << "Subject: ";
	cin >> s;
	cout << "Verb: ";
	cin >> v;
	cout << "Object: ";
	cin >> o;

	s1 = s + " "  + v + " a " + o;
	cout << s1 << endl;

	return 0;
}
