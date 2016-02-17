/*********************************************************************
** Program Filename: myll.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-17
** Description: myLL class implementation file CS199_400 Project 3
*********************************************************************/

#include "myll.hpp"
#include "node.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;


myLL::myLL()			//default constructor
{
	head = NULL;
}


myLL::~myLL()			//deconstructor
{
	//cout << "myLL deconstructor has run" << endl;
}


/*********************************************************************
** Function: displayList
** Description: If there are no elements in the list, outputs
** "There are no items in the list."
** Otherwise it iterates through the entire list outputing
** each monster's name on a new line.
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
void myLL::displayList()
{
	if (head == NULL)
	{
		cout << "There are no items in the list." << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		Node* tempNode = head;
		cout << tempNode->mPointer->getTypeOf() << endl;	//outputs monster name
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;						//set tempNode to the next node
			cout << tempNode->mPointer->getTypeOf() << endl;//outputs nodes after head 
		}
		cout << endl;
	}
}


/*********************************************************************
** Function: addValue
** Description: Adds a new node for a monster added to the list
** and updates all necessary pointers.
** Pre-Conditions: monster pointer argument received
** Post-Conditions: the list will have an additinal node at the end.
*********************************************************************/
void myLL::addValue(Monster* mPointerIn)
{
	if (head == NULL)		//case where no nodes exist
	{
		head = new Node;
		head->mPointer = mPointerIn;
		head->next = NULL;
		cout << endl;
	}
	else					//adds a node to the end of the list
	{
		Node* lastNode = findLast(head);
		lastNode->next = new Node;
		lastNode->next->mPointer = mPointerIn;
		lastNode->next->next = NULL;
		cout << endl;
	}
}


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
void myLL::removeLast()
{
	if (head == NULL)
	{
		cout << "You cannot remove an element from an empty list!" << endl;
		cout << endl;
	}
	else
	{
		Node* tempNode = head;
		if (tempNode->next == NULL)	//case where only one node exists
		{
			head = NULL;
			delete tempNode;
		}
		else if (tempNode->next->next == NULL)	//case where only two nodes exits
		{
			tempNode->next = NULL;
			delete tempNode->next;
		}
		else
		{
			{
				while (tempNode->next->next != NULL)
					tempNode = tempNode->next;
			}
			tempNode->next = NULL;
			delete tempNode->next;
		}
	}
	cout << endl;
}


/*********************************************************************
** Function: attack
** Description: If the list is empty outputs:
** "There are no monsters in the list."
** Othersie iterates through the entire list calling the attack
** function for each monster in the list. 
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
void myLL::attack()
{
	if (head == NULL)
	{
		cout << "There are no monsters in the list." << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		Node* tempNode = head;
		tempNode->mPointer->attack();		//outputs monster name
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;		//set tempNode to the next node
			tempNode->mPointer->attack();	//outputs nodes after head 
		}
		cout << endl;
	}
}

/*********************************************************************
** Function: findLast
** Description: Finds the last node in the list by searching for the node
** with next = NULL.
** Pre-Conditions: none
** Post-Conditions: returns the pointer to the last node in the list
*********************************************************************/
Node*  myLL::findLast(Node* head)
{
	Node* tempNode = head;
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}
	return tempNode;
}
