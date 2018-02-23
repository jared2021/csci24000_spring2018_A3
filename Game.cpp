//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
#include "Player.h"
#include <iostream>
#include <stdlib.h>
int main()
{
	int letter1=0;
	int letter2=0;
	bool one;
	bool two;
	srand(time(NULL));
	char game[1]={'Y'};
	while (game[0]=='Y'){
		Player* myPlayerone=new Player();
		Player* myPlayertwo=new Player();
		while (letter1<5&&letter2<5){
			std::cout<<"Player One goes to shoot."<<'\n';
			(*myPlayerone).setShot();
			(*myPlayerone).getShot();
			if((*myPlayerone).getShot()==true){
				std::cout<<"Player One makes the shot!"<<'\n';
			}
			else if ((*myPlayerone).getShot()==false){
				std::cout<<"Player One missed the shot!"<<'\n';
			}
			one=(*myPlayerone).getShot();
			std::cout<<"Player Two goes to shoot."<<'\n';
			(*myPlayertwo).setShot();
			(*myPlayertwo).getShot();
			if((*myPlayertwo).getShot()==true){
				std::cout<<"Player Two makes the shot!"<<'\n';
			}
			else if((*myPlayertwo).getShot()==false){
				std::cout<<"Player Two missed the shot!"<<'\n';
			}
			 two=(*myPlayertwo).getShot();
			 if (one==true&&two==false)
			 {
				(*myPlayertwo).getScore();
				letter2=letter2+1;
			 }
			 else if (one==false&&two==true)
			 {
				 (*myPlayerone).getScore();
				 letter1=letter1+1;
			 }
			
			if (letter1==5){
				std::cout<<"Player Two has won! Player One has (*myPlayerone).getHorse"<<(*myPlayerone).getHorse()<<'\n';
			}
			else if (letter2==5){
				std::cout<<"Player One has won! Player Two has (*myPlayertwo).getHorse"<<(*myPlayertwo).getHorse()<<'\n';
			}
		delete myPlayerone;
		delete myPlayertwo;
		}
			std::cout<<"Would you like to play again? [Y|N]";
			std::cin>>game[0];
			if (game[0]!='Y'||game[0]!='N'){
				std::cout<<"I'm not sure what you want me to do.";
				std::cout<<"Would you like to play again? [Y|N]";
			}
			else if (game[0]='N'){
				return 0;	
			}
			}
		}
	
