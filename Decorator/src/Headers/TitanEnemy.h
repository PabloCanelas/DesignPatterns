#pragma once
#include <iostream>
#include "Enemy.h"
using namespace std;

class TitanEnemy : public Enemy
{
public:
	TitanEnemy() {
		life = 550;
	};
	~TitanEnemy() {};
	int takeDamage() override {
		int damage = 30;
		life = life - damage;
		return damage;
	}
};

