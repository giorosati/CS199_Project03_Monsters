/*********************************************************************
** Program Filename: troll.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Troll class header file CS199_400 Project 3
*********************************************************************/

#ifndef TROLL_HPP
#define TROLL_HPP

#include "monster.hpp"

class Troll : public Monster
{
public:
	Troll();				//default constructor
	~Troll();				//deconstructor
	void attack();			//attack function prototype
};

#endif