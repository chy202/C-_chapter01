#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Age: ";
	cin >> age;

	age = age + 10;
	cout << "After 10 years, you will become a " << age << "years old." << endl;

	return 0;
}
