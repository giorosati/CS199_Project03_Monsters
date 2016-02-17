/*********************************************************************
** Program Filename: troll.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Troll class implementation file CS199_400 Project 3
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "monster.hpp"
#include "troll.hpp"

using std::cout;
using std::cin;
using std::endl;

Troll::Troll()
{
	typeOf = "Troll";
	numAttacks = 2;
	strength = 60;
}

Troll::~Troll()
{
	//cout << "troll deconstructor has run";
}

/*********************************************************************
** Function: attack
** Description: Calculates total damage done by calling the function
** once. Total damages are the sum of two "attacks", each is a random
** value of 0 to strength. For each damage amount there is also a 20%
** chance of doing 100 damage instead of the rendomly chosen number.
** a 10% chance of doubling the damages.
** Parameters: n/a
** Pre-Conditions: srand is used to seed the rand function
** Post-Conditions: none
*********************************************************************/
void Troll::attack()
{
	int totalDamage = 0;

	for (int i = 1; i <= numAttacks; i++)
	{
		int rand10 = rand() % 10 + 1;  //generates 1 to 10
		//cout << "rand10 is: " << rand10 << endl;
		int attackValue = rand() % (strength + 1);
		if (rand10 <= 2) attackValue = 100;
		cout << "Troll attacks for " << attackValue << " damage" << endl;
		totalDamage += attackValue;
	}
	cout << "Total Damage: " << totalDamage << endl;
}