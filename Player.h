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
		//setShot function will determine whether or not the player makes the shot
		void getScore();
		// getScore will give them a letter when they miss depending on what letters they have already acquired
		bool getShot();
		//this will return score (whether or not they made the shot or not) to be used in the main function of Game.cpp
		char* getHorse();
		// this function returns the character array Horse so I can print it out for certain conditions in the main function of Game.cpp
		~Player();
	
	private:
		char* Horse;
		//holds the letters each player has acquired
		bool score;
		//holds whether they made or missed the shot to be passed to main
		int shot;
		//holds whether they made or missed the shot to be passed to score
};
#endif
