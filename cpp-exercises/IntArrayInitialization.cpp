/*
#include <iostream>
using namespace std;

int main()
{
	int MyIntArray[10];

	for (int i = 0; i < 10; i++)
	{
		MyIntArray[i] = i;
		cout << MyIntArray[i] << endl;
	}

	cout << "The first element in MyIntArray is: " << MyIntArray[0] << endl;

	cout << "The fifth element in MyIntArray is: " << MyIntArray[4] << endl;

	system("pause");
	return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
	int MyArray[6] = { 1, 23, 5, 4, 9, 6 };

	/*
	cout << "MyArray[0] = " <<MyArray[0] << endl;
	cout << "MyArray[1] = " << MyArray[1] << endl;
	cout << "MyArray[2] = " << MyArray[2] << endl;
	cout << "MyArray[3] = " << MyArray[3] << endl;
	cout << "MyArray[4] = " << MyArray[4] << endl;
	cout << "MyArray[5] = " << MyArray[5] << endl;
	*/

	for (int i = 0; i < 6; i++)
	{
		cout << "MyArray[" << i << "] = " << MyArray[i] << endl;
	}


	system("pause");
	return 0;
}
