#pragma once
#include "Enemy.h"

class Unicorn : public Enemy
{
public:
	Unicorn();

	void Move();
	void PrintDescription();

	~Unicorn();
};

