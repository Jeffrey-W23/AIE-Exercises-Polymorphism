#include <iostream>
#include "Unicorn.h"

using namespace std;


Unicorn::Unicorn()
{
}

void Unicorn::Move()
{
	cout << "the enemy gallops towards you" << endl;
}

void Unicorn::PrintDescription()
{
	cout << "Unicorn" << endl;
}

Unicorn::~Unicorn()
{
}
