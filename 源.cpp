#include <iostream>
using namespace std;

int main()
{
	int a;

	string result;

	cout <<"Please enter an integer: " << endl;

	cin >> a;

	switch (a)
	{
	case 1: result = "Monday"; break;
	case 2: result = "Tuesday"; break;
	case 3: result = "Wednesday"; break;
    case 4: result = "Thursday"; break;
	case 5: result = "Friday"; break;
	case 6: result = "Saturday"; break;
    case 7: result = "Sunday"; break;
	default:
		cout << "Invalid input! Please enter an integer between 1 and 7.";
		break;
	}

	cout << "The day of the week is: " << result << endl;

	system("pause");
	return 0;
}