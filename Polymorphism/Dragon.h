#pragma once
#include "Enemy.h" 

class Dragon : public Enemy
{
public:
	Dragon();

	void Move();
	void PrintDescription();

	~Dragon();
};

