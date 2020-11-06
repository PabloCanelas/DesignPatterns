#pragma once
#include <iostream>
using namespace std;
class Enemy
{
public:
	virtual int takeDamage()  = 0;
	int life;
};

