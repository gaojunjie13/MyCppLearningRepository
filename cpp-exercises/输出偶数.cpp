#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter the starting number" << endl;

	int a; cin >> a;

	cout << "Please enter the ending number" << endl;

	int b; cin >> b;

	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			cout << "The even numbers between your two numbers are: " << i << endl;
		}
	}

	system("pause");
	return 0;
}