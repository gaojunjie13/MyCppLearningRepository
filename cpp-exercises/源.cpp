#include <iostream>
#include <string>
using namespace std;

struct StarRailPlayer
{
	int UID;
	string RoleName;
	int Level;
	string LifeSeat;
};

void printPlayerInfo(StarRailPlayer);


int main()
{
	StarRailPlayer a = { 113672822, "Firefly", 70, "2+1" };
	StarRailPlayer b = { 123456789, "Silver Wolf", 999, "1+1" };
	 
	printPlayerInfo(a);
	printPlayerInfo(b);

	system("pause");
	return 0;
}

void printPlayerInfo(StarRailPlayer player)
{
	cout << "UID: " << player.UID << endl;
	cout << "RoleName: " << player.RoleName << endl;
	cout << "Level: " << player.Level << endl;
	cout << "LifeSeat: " << player.LifeSeat << endl;
}
