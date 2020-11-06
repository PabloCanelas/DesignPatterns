#include <iostream>
using namespace std;
#include"Enemy.h"
#include"BaseEnemy.h"
#include "TitanEnemy.h"
#include "GoldArmorDecoratorh.h"
#include "WoodArmorDecorator.h"

int main() {
	//Base Enemy
	Enemy* baseEnemy = new BaseEnemy;
	
	//Base Enemy decorated with Wooden Armor for more protection
	Enemy* woodEnemy = new WoodArmorDecorator(baseEnemy);

	//Base Enemy with gold for the most protection
	Enemy* goldEnemy= new GoldArmorDecorator(baseEnemy);

	//Base enemies damage received when attacked, with and without armor decorators
	cout << "Standard enemy damage taken: " << baseEnemy->takeDamage() << endl;
	cout << "Standard enemy with Wood Armor damage taken: " << woodEnemy->takeDamage() << endl;
	cout << "Standard enemy with Gold Armor damage taken: " << goldEnemy->takeDamage() << endl;

	//Titan Enemy
	Enemy* titanEnemy = new TitanEnemy;

	//Base Enemy decorated with Wooden Armor for more protection
	Enemy* woodTitan = new WoodArmorDecorator(titanEnemy);

	//Base Enemy with gold for the most protection
	Enemy* goldTitan = new GoldArmorDecorator(titanEnemy);

	//Titan enemies damage received when attacked, with and without armor decorators
	cout << "Titan enemy damage taken: " << titanEnemy->takeDamage() << endl;
	cout << "Titan enemy with Wood Armor damage taken: " << woodTitan->takeDamage() << endl;
	cout << "Titan enemy with Gold Armor damage taken: " << goldTitan->takeDamage() << endl;


	getchar();
	return 0;
}