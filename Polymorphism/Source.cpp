#include <iostream>
#include "Enemy.h"

using namespace std;

void main()
{
	Enemy** ppEnemyList = new Enemy*[10];
	
	for (int i = 0; i < 10; ++i)
	{
		ppEnemyList[i] = new Enemy();
	}

	system("pause");
}