#include <iostream>
using namespace std;

int main()
{
	int foundTreasureChest;
	bool treasureChestArray[5] = { false, false, false, false, false };

	//We ask the user which chest they found first 1-5
	cout << "You Have Entered the dungeon." << endl;
	cout << "There are five Chest in this dungeon, Only one has a level up token." << endl;
	cout << "Guess which chest. Input a number between 1 and 5." << endl;
	cin >> foundTreasureChest;

	*(treasureChestArray + (foundTreasureChest - 1)) = true;

	while (*(treasureChestArray + 4) == false)
	{

		cout << "No token! Try again. Input a number (1-5) of the number of found chest." << endl;
		cin >> foundTreasureChest;

		*(treasureChestArray + (foundTreasureChest - 1)) = true;
	}

	cout << "Congradts! You've beaten the dungeon and found the level-up token!!" << endl;

	return 0;
}