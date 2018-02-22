//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
#ifndef _PLAYER_H
#define _PLAYER_H

class Player
{
	public:
		Player();
		int setShot();
		char test();
		int getShot();
		~Player();
	
	private:
		char Horse[5];
		int shot;
		int one;
		int two;
		int letter1=0;
		int letter2=0;
};
#endif
