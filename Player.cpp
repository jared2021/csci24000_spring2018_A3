//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
#include "Player.h"
#include <stdlib.h>
#include <iostream>
Player::Player()
{
	char Horse[5];		
}
Player::~Player()
{

}
int Player::setShot()
{
	this->shot=rand()%2+1;
}
int Player::getShot()
{
	return this->shot;
}
