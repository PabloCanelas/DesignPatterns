#pragma once
#include "EnemyDecorator.h"


class GoldArmorDecorator : public EnemyDecorator
{
public:
	GoldArmorDecorator(Enemy* E) :EnemyDecorator(E) {

	}
	int takeDamage() {
		int damage = this->E->takeDamage() - 10;
		E->life = E->life-damage;
		return damage;
	}

};

