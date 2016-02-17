/*********************************************************************
** Program Filename: icedragon.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: IceDragon class header file CS199_400 Project 3
*********************************************************************/

#ifndef ICEDRAGON_HPP
#define ICEDRAGON_HPP

#include "monster.hpp"
#include "dragon.hpp"

class IceDragon : public Dragon
{
public:
	IceDragon();				//default constructor
	~IceDragon();				//deconstructor
	
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
	void attack();
};

#endif