/*********************************************************************
** Program Filename: monster.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Monster class implementation file CS199_400 Project 3
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "monster.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Monster::~Monster()
{
	//cout << "monster deconstructor has run" << endl;;
}

string Monster::getTypeOf()
{
	return typeOf;
}