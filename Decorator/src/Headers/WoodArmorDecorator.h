#pragma once
#include "EnemyDecorator.h"


class WoodArmorDecorator : public EnemyDecorator
{
public:
	WoodArmorDecorator(Enemy* E) :EnemyDecorator(E) {

	}
	int takeDamage() {
		int damage = this->E->takeDamage() - 5;
		return damage;
	}

private:
};

