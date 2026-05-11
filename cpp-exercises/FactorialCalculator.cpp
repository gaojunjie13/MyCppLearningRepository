#include <iostream>
using namespace std;

int main()
{
	int n;
	long long result = 1;

	cout << "Enter a positive integer: ";

	cin >> n;

	if (n < 0)
	{
		cout << "Error: Input must be a positive integer." << endl;
		return 1;
	}

	for (int i = 1; i <= n; i++)
	{
		result = result * i;     //result *= i
	}

	cout << n << " ! = " << result << endl;

	system("pause");
	return 0;
}
