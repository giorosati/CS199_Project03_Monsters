/*********************************************************************
** Program Filename: firedragon.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: FireDragon class header file CS199_400 Project 3
*********************************************************************/

#ifndef FIRERAGON_HPP
#define FIRERAGON_HPP

#include "monster.hpp"
#include "dragon.hpp"

class FireDragon : public Dragon
{
public:
	FireDragon();				//default constructor
	~FireDragon();				//deconstructor

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
	void attack();				//attack function prototype
};

#endif