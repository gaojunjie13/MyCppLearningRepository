#include <iostream>
#include <string>
using namespace std;

// 定义一个【位置向量】结构体：专门存储三维坐标（x/y/z）
// 结构体 = 自定义的"数据模板"，用来打包一组相关的数据
struct LocationVector
{
	float x;
	float y;
	float z;
};

// 定义一个【玩家】结构体：模拟游戏里的玩家
struct Player
{
	// ===== 成员变量（玩家的【属性】）=====
	int Level;
	float Health;
	float Damage;
	float Stamina;

	// 嵌套结构体：玩家的位置，默认初始化为(0,0,0)
	// 0.f 表示浮点数0，f是float的标识（必须写，区分整数）
	LocationVector Location = { 0.f, 0.f, 0.f };

	// ===== 成员函数（玩家的【行为/功能】）=====
	// 函数功能：玩家受到伤害，参数dmg=受到的伤害值
	void TakeDamage(float dmg)
	{
		// 核心逻辑：血量 = 原血量 - 受到的伤害
		Health -= dmg;
	}

	// 函数功能：获取玩家等级，返回值是int类型（等级）
	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "You Level is greater than 10! \n";
		}

		cout << "Player Level is : ";

		// 返回玩家的等级值（函数执行完，把Level带回调用处）
		return Level;
	}

	// 函数功能：打印玩家的三维坐标
	void DisplayLocation()
	{
		cout <<"Location.X = " << Location.x << endl;
		cout << "Location.Y = " << Location.y << endl;
		cout << "Location.Z = " << Location.z << endl;
	}
};

// 主函数：程序的【入口】，所有代码从这里开始执行
int main()
{
	// 1. 创建第一个玩家对象：p_1（用Player模板造一个具体玩家）
	Player p_1;
	// 给p_1的属性赋值
	p_1.Level = 11;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	// 调用p_1的GetLevel函数：打印等级并返回值，cout输出返回值
	cout << p_1.GetLevel() << endl;
	 
	// 调用p_1的受伤函数：受到40点伤害
	p_1.TakeDamage(40.f);

	// 打印伤害信息和当前血量
	cout << "Player takes " << 40.f << " damge! \n" << "Player Health is : " << p_1.Health << endl;

	// 调用p_1的函数：打印默认位置(0,0,0)
	p_1.DisplayLocation();

	// 2. 创建第二个玩家对象：p_2（【直接初始化】，不用逐个赋值）
	// 顺序严格对应Player结构体的成员：等级、血量、攻击、体力、位置(x,y,z)
	Player p_2 = { 1, 50.f, 40.f, 35.54f, {35.5f, 20.9f, 9.f} };

	// 调用p_2的函数：打印自定义位置
	p_2.DisplayLocation();

	// 暂停控制台窗口，防止运行后直接关闭（Windows系统专用）
	system("pause");
	return 0;
}
