#pragma once

class Enemy
{
public:
	Enemy();

	virtual void Move();
	virtual void PrintDescription() = 0;
	
	~Enemy();
};