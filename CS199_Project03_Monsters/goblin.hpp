/*********************************************************************
** Program Filename: goblin.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Goblin class header file CS199_400 Project 3
*********************************************************************/

#ifndef GOBLIN_HPP
#define GOBLIN_HPP

class Goblin : public Monster
{
public:
	Goblin();			//default constructor
	~Goblin();			//deconstructor

	/*********************************************************************
	** Function: attack
	** Description: Calculates total damage done by calling the function
	** once. Total damages are a random value of 0 to strength, plus
	** a 10% chance of doubling the damages.
	** Parameters: n/a
	** Pre-Conditions: srand is used to seed the rand function
	** Post-Conditions: none
	*********************************************************************/
	void attack();		
};

#endif