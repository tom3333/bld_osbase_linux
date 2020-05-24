/*
 * main.c
 *
 *  Created on: May 31, 2018
 *      Author: thomas
 */
#include <iostream>
#include "Maze.hpp"
#include "Wall.hpp"

using namespace std;
int main (void)
{
	Maze* aMaze = new Maze;
	Room* r1 = new Room(1);
	Room* r2 = new Room(2);
	//Door* theDoor = new Door(2);
	Door* theDoor = new Door(r1, r2);

	aMaze->AddRoom(r1);
	aMaze->AddRoom(r2);

	aMaze->PrintList();

	r1->SetSide(North, new Wall);
	r1->SetSide(East, theDoor);
	r1->SetSide(South, new Wall);
	r1->SetSide(West, new Wall);

	r2->SetSide(North, new Wall);
	r2->SetSide(East, new Wall);
	r2->SetSide(South, new Wall);
	r2->SetSide(West, theDoor);

}
