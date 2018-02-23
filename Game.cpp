//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
#include "Player.h"
#include <ctime>
#include <iostream>
#include <stdlib.h>
int main()
{
	bool one;
	bool two;
	srand(time(NULL));
	char* game= new char[1];
	game[0] = 'Y';
	while (game[0]=='Y'){
		int letter1=0;
		int letter2=0;
		Player* myPlayerone=new Player();
		Player* myPlayertwo=new Player();
		while (letter1<5&&letter2<5){
			std::cout<<"Player One goes to shoot."<<'\n';
			(*myPlayerone).setShot();
			if((*myPlayerone).getShot()==true){
				std::cout<<"Player One makes the shot!"<<'\n';
			}
			else if ((*myPlayerone).getShot()==false){
				std::cout<<"Player One missed the shot!"<<'\n';
			}
			one=(*myPlayerone).getShot();
			std::cout<<"Player Two goes to shoot."<<'\n';
			(*myPlayertwo).setShot();
			if((*myPlayertwo).getShot()==true){
				std::cout<<"Player Two makes the shot!"<<'\n';
			}
			else if((*myPlayertwo).getShot()==false){
				std::cout<<"Player Two missed the shot!"<<'\n';
			}
			 two=(*myPlayertwo).getShot();
			 if (one && !two)
			 {
				(*myPlayertwo).getScore();
				letter2=letter2+1;
				std::cout<<"Player Two has "<<(*myPlayertwo).getHorse()<<'\n';
			 }
			 else if (!one && two)
			 {
				 (*myPlayerone).getScore();
				 letter1=letter1+1;
				 std::cout<<"Player One has "<<(*myPlayerone).getHorse()<<'\n';
			 }
			 else if (!one && ! two)
			 {
				 letter1=letter1;
				 letter2=letter2;
				 std::cout<<"Player One and Two both missed the shot."<<'\n';
			 }
			 else if (one && two)
			 {
				 letter1=letter1;
				 letter2=letter2;
				 std::cout<<"Player One and Two both made the shot."<<'\n';
			 }
			
			if (letter1==5){
				std::cout<<"Player Two has won! Player One has "<<(*myPlayerone).getHorse()<<'\n';
			}
			else if (letter2==5){
				std::cout<<"Player One has won! Player Two has "<<(*myPlayertwo).getHorse()<<'\n';
			}
		}
		delete myPlayerone;
		delete myPlayertwo;
		
			std::cout<<"Would you like to play again? [Y|N]"<<'\n';
			std::cin>>game;
			while (game[0]!='Y'&&game[0]!='N'){
				std::cout<<"I'm not sure what you want me to do."<<'\n';
				std::cout<<"Would you like to play again? [Y|N]"<<'\n';
				std::cin>>game;
			}
		}
	return 0;
	
}
	
