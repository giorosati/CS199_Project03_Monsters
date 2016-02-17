/*********************************************************************
** Program Filename: firedragon.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: FireDragon class implementation file CS199_400 Project 3
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "monster.hpp"
#include "dragon.hpp"
#include "firedragon.hpp"

using std::cout;
using std::cin;
using std::endl;

FireDragon::FireDragon()
{
	typeOf = "Fire Dragon";
	numAttacks = 4;
	strength = 100;
}

FireDragon::~FireDragon()
{
	//cout << "dragon deconstructor has run";
}

/*********************************************************************
** Function: attack
** Description: Calculates total damage done by calling the function
** once. Total damages = 4 times a random value of 0 to strength, plus
** a 50% chance of making one additional attack. Additionally, after the
** four (possibly 5) damages are done, there is a 50% chance of repeating
** the entire "attack" series with another 4 (possibly 5) damages added to
** the total damages.
** Parameters: n/a
** Pre-Conditions: srand is used to seed the rand function
** Post-Conditions: none
*********************************************************************/
void FireDragon::attack()
{
	int totalDamage = 0;
	int rand20 = rand() % 20 + 1;  //generates 1 to 20
	int repeat = 0;
	if (rand20 <= 10) repeat = 1;
	for (int j = 0; j <= repeat; j++)
	{
		if (j > 0) cout << "Fire Dragon gets to attack ALL OVER AGAIN!" << endl;
		int attacksToMake = numAttacks;

		int rand10 = rand() % 10 + 1;  //generates 1 to 10
		//cout << "rand10 is: " << rand10 << endl;
		if (rand10 <= 5) attacksToMake += 1;

		for (int i = 1; i <= attacksToMake; i++)
		{
			if (i > numAttacks) cout << "Fire Dragon gains an extra attack!" << endl;
			//cout << "attacksToMake is: " << attacksToMake << endl;
			int attackValue = rand() % (strength + 1);
			cout << "Fire Dragon attacks for " << attackValue << " damage" << endl;
			totalDamage += attackValue;
		}
	}
	cout << "Total Damage: " << totalDamage << endl;
}