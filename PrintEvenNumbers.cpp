#include <iostream>//引入输入输出库
using namespace std;

int main()
{
	for (int i = 1; i <= 100;i++)//用一个循环来遍历1到100的数
	{
		if (i % 2 == 0)//如果这个数是偶数
		{
			cout << i << endl;//输出这个数
		}
	}

	system("pause");
	return 0;
}
