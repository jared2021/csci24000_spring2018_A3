//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
#include "Player.h"
#include <iostream>
#include <stdlib.h>
int letter1=0;
int letter2=0;
int main()
{
	srand(time(NULL));
	char game[1]={'Y'};
	while (game[0]=='Y'){
		while (letter1<5&&letter2<5){
			Player* myPlayerone= new Player();
			Player* myPlayertwo= new Player();
			std::cout<<"Player One goes to shoot.";
			(*myPlayerone).setShot();
			if((*myPlayerone).getShot()==1){
				std::cout<<"Player One makes the shot!"<<'\n';
			}
			else if ((*myPlayerone).getShot()==2){
				std::cout<<"Player One missed the shot!"<<'\n';
			}
			int one=(*myPlayerone).getShot();
			(*myPlayertwo).setShot();
			(*myPlayertwo).getShot();
			if((*myPlayertwo).getShot()==1){
				std::cout<<"Player Two makes the shot!"<<'\n';
			}
			else if((*myPlayertwo).getShot()==2){
				std::cout<<"Player Two missed the shot!"<<'\n';
			}
			int two=(*myPlayertwo).getShot();
			if (one==1&&two==1){
				letter1=letter1;
				letter2=letter2;
			}
			else if (one==2&&two==2){
				letter1=letter1;
				letter2=letter2;
			}
			else if (one==1&&two==2){
				letter1=letter1;
				letter2=letter2+1;
				if (letter2==1){
					(*myPlayertwo).Horse[0]='H';
				}
				else if(letter2==2){
					(*myPlayertwo).Horse[1]='O';
				}
				else if (letter2==3){
					(*myPlayertwo).Horse[2]='R';
				}
				else if(letter2==4){
					(*myPlayertwo).Horse[3]='S';
				}
				else if (letter2==5){
					(*myPlayertwo).Horse[4]='E';
				}
			std::cout<<"Player Two has (*myPlayertwo).Horse[]"<<(*myPlayertwo).Horse[4]<<'\n';
			}
			else if (one==2&&two==1){
				letter1=letter1+1;
				letter2=letter2;
				if (letter1==1){
					(*myPlayerone).Horse[0]='H';
				}
				else if (letter1==2){
					(*myPlayerone).Horse[1]='O';
				}
				else if (letter1==3){
					(*myPlayerone).Horse[2]='R';
				}
				else if (letter1==4){
					(*myPlayerone).Horse[3]='S';
				}
				else if (letter1==5){
					(*myPlayerone).Horse[4]='E';
				}
			std::cout<<"Player One has (*myPlayerone).Horse[]"<<(*myPlayerone).Horse[4]<<'\n';
			}
			if (letter1==5){
				std::cout<<"Player Two has won! Player One has (*myPlayerone).Horse[]"<<(*myPlayerone).Horse[4]<<'\n';
			}
			else if (letter2==5){
				std::cout<<"Player One has won! Player Two has (*myPlayertwo).Horse[]"<<(*myPlayertwo).Horse[4]<<'\n';
			}
		delete myPlayerone;
		delete myPlayertwo;
		}
		while(game[0]!='Y'||game[0]!='N'){
			std::cout<<"Would you like to play again? [Y|N]";
			std::cin>>game[0];
			if (game[0]!='Y'||game[0]!='N'){
			std::cout<<"I'm not sure what you want me to do.";
			}						
			}
		}
	return 0;
	}
