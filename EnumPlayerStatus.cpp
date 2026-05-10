#include <iostream>
#include <string>
using namespace std;

// 定义 枚举类型：PlayerStatus（玩家状态）
// 枚举用来表示固定的几种状态，替代难懂的数字
enum PlayerStatus
{
	PS_Runing,         // 枚举常量：0 代表 跑步状态
	PS_Walking,        // 枚举常量：1 代表 行走状态
	PS_Crouching,      // 枚举常量：1 代表 行走状态
};


// 定义 浮点常量（const=常量，值不可修改）
// .f 表示这是 float 类型（单精度浮点数，游戏开发常用）
const float RunSpeed = 800.f;      // 跑步速度：800
const float Walking = 500.f;       // 行走速度：500
const float Crouching = 200.f;     // 蹲下速度：200

// 函数声明：根据输入的整数，用switch判断并输出文字
void SwitchOnInt(int a);


// 函数声明：告诉编译器有这个函数，实现写在后面
// 功能：根据玩家状态，更新移动速度
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

int main()
{
	// 定义浮点变量：存储最终的玩家移动速度
	float MovementSpeed;

	// 定义枚举变量 status，赋值为 PS_Crouching（蹲下状态）
	PlayerStatus status = PS_Crouching;

	// 调用函数：传入 玩家状态 和 速度变量
	// float& speed 是引用传参：函数内修改速度，主函数的变量也会变
	UpdateMovementSpeed(status, MovementSpeed);

	// 输出最终的移动速度
	cout << "Movement Speed = " << MovementSpeed << endl;

	// 输出提示文字：请输入一个整数
	cout << "Please enter an integer: \n";

	// 定义整型变量，接收用户输入的数字,从控制台读取用户输入的整数，存入变量 integer
	int integer;
	cin >> integer;

	// 调用函数：把用户输入的数字传进去，用switch判断
	SwitchOnInt(integer);

	// 系统暂停：防止控制台窗口一闪而过（Windows专用）
	system("pause");
	return 0;
}

// 函数实现：根据玩家状态设置速度
// 参数1：P_Status 玩家状态（枚举类型）
// 参数2：speed 引用传参，修改主函数的变量
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	/*if (P_Status == PS_Runing)
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_Walking)
	{
		speed = Walking;
	}
	else if (P_Status == PS_Crouching)
	{
		speed = Crouching;
	}
	*/

	// switch 语句：专门用来判断 固定值（枚举/整数），比 if-else 更简洁
	switch (P_Status)
	{
		// 如果状态是 跑步
	case PS_Runing:
		speed = RunSpeed;      // 赋值跑步速度 800
		break;                 // break：跳出switch，不执行后面的代码
	case PS_Walking:
		speed = Walking;
		break;
	case PS_Crouching:
		speed = Crouching;
	}
}

// 函数实现：用switch判断整数，输出对应文字
// 参数 a：用户输入的整数
void SwitchOnInt(int a)
{
	// 判断变量 a 的值
	switch (a)
	{
	case 0:
		cout << "Your number is zero. \n";
		break;
	case 1:
		cout << "Your number is one. \n";
		break;
	case 2:
		cout << "Your number is two. \n";
		break;

		// 默认情况：如果 a 不是 0、1、2，执行这里
	default:
		cout << "Your nubmer is not 0, 1, or 2. \n";
	}
}
