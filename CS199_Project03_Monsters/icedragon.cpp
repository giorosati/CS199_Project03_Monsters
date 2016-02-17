/*********************************************************************
** Program Filename: icedragon.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: IceDragon class implementation file CS199_400 Project 3
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "monster.hpp"
#include "dragon.hpp"
#include "icedragon.hpp"

using std::cout;
using std::cin;
using std::endl;

IceDragon::IceDragon()
{
	typeOf = "Ice Dragon";
	numAttacks = 4;
	strength = 100;
}

IceDragon::~IceDragon()
{
	//cout << "dragon deconstructor has run";
}

/*********************************************************************
** Function: attack
** Description: Calculates total damage done by calling the function
** once. Total damages = 4 times a random value of 0 to strength, plus
** a 50% chance of making one additional attack. Additionally, after the
** four (possibly 5) damages are added up, there is a 50% chance of the
** total damages being doubled.
** Parameters: n/a
** Pre-Conditions: srand is used to seed the rand function
** Post-Conditions: none
*********************************************************************/
void IceDragon::attack()
{
	int attacksToMake = numAttacks;
	int totalDamage = 0;
	int rand10 = rand() % 10 + 1;  //generates 1 to 10
	//cout << "rand10 is: " << rand10 << endl;
	if (rand10 <= 5) attacksToMake += 1;

	for (int i = 1; i <= attacksToMake; i++)
	{
		if (i > numAttacks) cout << "Ice Dragon gains an extra attack!" << endl;
		//cout << "attacksToMake is: " << attacksToMake << endl;
		int attackValue = rand() % (strength + 1);
		cout << "Ice Dragon attacks for " << attackValue << " damage" << endl;
		totalDamage += attackValue;
	}
	int rand20 = rand() % 20 + 1; //generates 1 to 20
	if (rand20 <= 10)
	{
		cout << "Ice Dragon DOUBLES damage!" << endl;
		totalDamage = totalDamage * 2;
	}
	cout << "Total Damage: " << totalDamage << endl;
}