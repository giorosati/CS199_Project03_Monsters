#include <iostream>
#include <cstdlib>
#include "myll.hpp"
#include "monster.hpp"

#include "goblin.hpp"
#include "troll.hpp"
#include "dragon.hpp"
#include "icedragon.hpp"
#include "firedragon.hpp"

#include <time.h>	//added so srand could be used with time

void displayMenu();
int getInput();
Monster* addMonster();

int main() {
	srand(time(0));		//added monster attack functions
  myLL list;
  bool done = false;
  int choice = 0;
  Monster *tempMonster = NULL;
  while(done != true) {
    displayMenu();
    choice = getInput();
    switch(choice) {
    case 1:
      list.displayList();
      break;
    case 2:
      tempMonster = addMonster();
      list.addValue(tempMonster);
      break;
    case 3:
      list.removeLast();
      break;
    case 4:
      std::cout << std::endl;
      list.attack();
      break;
    case 5:
      done = true;
      break;
    default:
      std::cout << "Not a valid choice" << std::endl;
      break;
    }
  }
}


void displayMenu() {
  std::cout << std::endl;
  std::cout << "What would you like to do?" << std::endl;
  std::cout << "1) Display list" << std::endl;
  std::cout << "2) Add Monster" << std::endl;
  std::cout << "3) Remove Last Monster" << std::endl;
  std::cout << "4) Monsters Attack!" << std::endl;
  std::cout << "5) Quit" << std::endl;
}

int getInput() {
  int choice;
  std::cout << "Choice: ";
  std::cin >> choice;
  return choice;
}

Monster* addMonster() {
  int monsterType;
  Monster *temp = NULL;
  std::cout << "What type of Monster do you wish to add?" << std::endl;
  std::cout << "1) Goblin" << std::endl;
  std::cout << "2) Troll" << std::endl;
  std::cout << "3) Dragon" << std::endl;
  std::cout << "4) Ice Dragon" << std::endl;
  std::cout << "5) Fire Dragon" << std::endl;

  do {
    std::cout << "Choice: ";
    std::cin >> monsterType;
    switch(monsterType) {
    case 1:
      return new Goblin;
    case 2:
      return new Troll;
    case 3:
      return new Dragon;
    case 4:
      return new IceDragon;
    case 5:
      return new FireDragon;
    default:
      std::cout << "Not a valid choice, try again" << std::endl;
      break;
    }
  }while(true);
}
