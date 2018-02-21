//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
#ifndef _PLAYER_H
#define _Player_H

class Player
{
	public:
		Player();
		~Player();
		int setScore();
		int setShot();
		int getShot();
	
	private:
		char Horse[5];
		int shot;
		int one;
		int two;
		int letter1;
		int letter2;
};
#endif
