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
char Player::test()
{
	/*if(this->one==2&&this->two==1)
	{
		this->letter1=this->letter1++;
		if (this->letter1==1)
		{
			this->Horse[0]='H';
		}
		else if(this->letter1==2)
		{
			this->Horse[1]='O';
		}
		else if (this->letter1==3)
		{
			this->Horse[2]='R';
		}
		else if (this->letter1==4)
		{
			this->Horse[3]='S';
		}
		else if (this->letter1==5)
		{
			this->Horse[4]='E'
		}
	}
	else if (this->one==1&&this->two==2)
	{
		this->letter2=this->letter2++;
		if (this->letter2==1)
		{
			this->Horse[0]='H';
		}
		else if (this->letter2==2)
		{
			this->Horse[1]='O';
		}
		else if (this->letter2==3)
		{
			this->Horse[2]='R';
		}
		else if (this->letter2==4)
		{
			this->Horse[3]='S';
		}
		else if (this->letter2==5)
		{
			this->Horse[4]='E';
		}
	}*/
}

