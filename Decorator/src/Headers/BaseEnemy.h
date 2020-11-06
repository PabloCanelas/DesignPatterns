#pragma once
#include <iostream>
#include "Enemy.h"
using namespace std; 

class BaseEnemy : public Enemy
{
public:
	BaseEnemy() {
		life = 250;
	};
	~BaseEnemy() {};
	int takeDamage() override {
		int damage = 60;
		life = life - damage;
		return damage;
	}
};

