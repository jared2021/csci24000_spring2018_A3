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
		void setShot();
		void getScore();
		bool getShot();
		char* getHorse();
		~Player();
	
	private:
		char* Horse;
		bool score;
		int shot;
};
#endif
