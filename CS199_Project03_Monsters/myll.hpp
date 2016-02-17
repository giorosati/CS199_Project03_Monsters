/*********************************************************************
** Program Filename: myll.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-17
** Description: myLL class header file CS199_400 Project 3
*********************************************************************/

#ifndef MYLL_HPP
#define MYLL_HPP

#include "node.hpp"

class myLL
{
private:
	Node* head;

protected:


public:
	myLL();					//default constructor
	~myLL();				//deconstructor

	/*********************************************************************
	** Function: displayList
	** Description: If there are no elements in the list, outputs
	** "There are no items in the list."
	** Otherwise it iterates through the entire list outputing
	** each monster's name on a new line.
	** Pre-Conditions: none
	** Post-Conditions: none
	*********************************************************************/
	void displayList();

	/*********************************************************************
	** Function: addValue
	** Description: Adds a new node for a monster added to the list
	** and updates all necessary pointers.
	** Pre-Conditions: monster pointer argument received
	** Post-Conditions: the list will have an additinal node at the end.
	*********************************************************************/
	void addValue(Monster*);

	/*********************************************************************
	** Function: removeLast
	** Description: If the list is empty outputs:
	** "You cannot remove an element from an empty list!"
	** Othersie uses findLast to locate the last node, deletes the last node
	** and updates the next pointer on the new last node.
	** Pre-Conditions: none
	** Post-Conditions: if the list was not empty, the list will be one node
	** shorter.
	*********************************************************************/
	void removeLast();

	/*********************************************************************
	** Function: attack
	** Description: If the list is empty outputs:
	** "There are no monsters in the list."
	** Othersie iterates through the entire list calling the attack
	** function for each monster in the list.
	** Pre-Conditions: none
	** Post-Conditions: none
	*********************************************************************/
	void attack();

	/*********************************************************************
	** Function: findLast
	** Description: Finds the last node in the list by searching for the node
	** with next = NULL.
	** Pre-Conditions: none
	** Post-Conditions: returns the pointer to the last node in the list
	*********************************************************************/
	Node* findLast(Node* head);
};

#endif