/*********************************************************************
** Program Filename: dragon.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Dragon class header file CS199_400 Project 3
*********************************************************************/

#ifndef DRAGON_HPP
#define DRAGON_HPP

#include "monster.hpp"

class Dragon : public Monster
{
public:
	Dragon();					//default constructor
	~Dragon();					//deconstructor

	/*********************************************************************
	** Function: attack
	** Description: Calculates total damage done by calling the function
	** once. Total damages = 4 times a random value of 0 to strength, plus
	** a 50% chance of making one additional attack.
	** Parameters: n/a
	** Pre-Conditions: srand is used to seed the rand function
	** Post-Conditions: none
	*********************************************************************/
	virtual void attack();		
};

#endif