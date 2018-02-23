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
		void getScore();
		bool getShot();
		int getOne();
		int getTwo();
		int getLetter1();
		int getLetter2();
		char* getHorse();
		~Player();
	
	private:
		char* Horse;
		bool score;
		int shot;
		int one;
		int two;
		int letter1;
		int letter2;
};
#endif
