#include <iostream>
#include "Dragon.h"

using namespace std;

Dragon::Dragon()
{
}

void Dragon::Move()
{
	cout << "the enemy flies above you" << endl;
}

void Dragon::PrintDescription()
{
	cout << "Dragon" << endl;
}

Dragon::~Dragon()
{
}