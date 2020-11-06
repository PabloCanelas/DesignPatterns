#pragma once
#pragma once
#include <iostream>
#include "Enemy.h"
using namespace std;

class EnemyDecorator : public Enemy
{
protected:
 Enemy *E;
public:
	EnemyDecorator(Enemy *enemy){
		E = enemy;
	}
	int takeDamage() override 
	{
		return E->takeDamage();
	};

};

