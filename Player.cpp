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
	Horse= new char[5];
	this->shot = 0;
	this->score = false;
}
Player::~Player()
{
	delete [] Horse;
}
int Player::setShot()
{
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
	return this->score;
	//if shot equals one make it true
	//if shot equals two make it false
	//if(this->shot==1){
	//	bool variable=True;
	//}
	//if(this->shot==2){
	//	bool variable=False;
	//}
}
void Player::getScore()
{
	//pass the values of shot to one and two 
	//and use that to determine what they get
	//if one is true and two is false
	//Player two gets an H unless he already has it then he gets a O and so on and so forth
	//if(bool variable==False)
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
	return Horse;
}

