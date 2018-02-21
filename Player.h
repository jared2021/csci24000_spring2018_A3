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
		char Horse[5];
		int setShot();
		int getShot();
	
	private:
		int shot;
};
#endif
