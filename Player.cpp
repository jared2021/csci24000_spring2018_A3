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
	//initializes the variables and giving them starting values
	Horse= new char[5];
	this->shot = 0;
	this->score = false;
}
Player::~Player()
{
	delete [] Horse;
}
void Player::setShot()
{
	//gives a random number to determine whether they made or missed the shot
	this->shot=rand()%2+1;
	if (this->shot==1)
	{
		this->score=true;	
	}
	else if(this->shot==2)
	{
		this->score=false;
	}
}
bool Player::getShot()
{
	//returns score so I can give that value to a variable in my main function
	return this->score;
}
void Player::getScore()
{
	//gives the player a letter when they miss and the other player hits the shot
	if(this->Horse[0]!='H')
	{
		this->Horse[0]='H';
	}
	else if(this->Horse[1]!='O')
	{
		this->Horse[1]='O';
	}
	else if(this->Horse[2]!='R')
	{
		this->Horse[2]='R';
	}
	else if (this->Horse[3]!='S')
	{
		this->Horse[3]='S';
	}
	else if (this->Horse[4]!='E')
	{
		this->Horse[4]='E';
	}
}		
char* Player::getHorse()
{
	//returns the array Horse so I can print it when needed
	return Horse;
}

