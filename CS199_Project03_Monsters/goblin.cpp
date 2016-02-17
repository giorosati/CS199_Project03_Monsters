/*********************************************************************
** Program Filename: goblin.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Monster class implementation file CS199_400 Project 3
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "monster.hpp"
#include "goblin.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Goblin::Goblin()
{
	typeOf = "Goblin";
	numAttacks = 1;
	strength = 30;
}

Goblin::~Goblin()
{
	//cout << "goblin deconstructor has run";
}

/*********************************************************************
** Function: attack
** Description: Calculates total damage done by calling the function
** once. Total damages are a random value of 0 to strength, plus
** a 10% chance of doubling the damages.
** Parameters: n/a
** Pre-Conditions: srand is used to seed the rand function
** Post-Conditions: none
*********************************************************************/
void Goblin::attack()
{
	int rand10 = rand() % 10 + 1;  //generates 1 to 10
	int totalDamage = 0;
	int attackValue = rand() % (strength + 1);
	if (rand10 == 1) attackValue = attackValue * 2;
	cout << "Goblin attacks for " << attackValue << " damage" << endl;
	totalDamage += attackValue;
	cout << "Total Damage: " << totalDamage << endl;
}