/*#include <iostream>

int main()
{
	int a = 100;

	int* aPtr;
	aPtr = &a;

	std::cout << *aPtr << std::endl;

	int b = 50;
	aPtr = &b;

	std::cout << *aPtr << std::endl;


	system("pause");
	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = numbers;

	std::cout << *NumPtr << std::endl;

	

	std::cout << *++NumPtr << std::endl;

	std::cout << *++NumPtr << std::endl;

	std::cout << *++NumPtr << std::endl;

	std::cout << *++NumPtr << std::endl;

	std::cout << *--NumPtr << std::endl;

	NumPtr += 6;

	std::cout << *NumPtr << std::endl;

	system("pause");
	return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;;

struct Container
{
	string Name;

	int X;
	int Y;
	int Z;
};

int main()
{
	Container container = { "Sam", 5, 6, 7 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl;
	cout << (*PtrToCont).X << endl;
	cout << (*PtrToCont).Y << endl;
	cout << (*PtrToCont).Z << endl;

	cout << PtrToCont->Name << endl;


	system("pause");
	return 0;
}
