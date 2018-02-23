//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
import java.io.*;
import java.util.Random;
import java.lang.String;
public class Player
{ 
	char print;
	//print given the value of the Horse array so I can print it in my main function
	char[] Horse;
	//holds the letters the players acquire
  	int shot;
	//gets a random number to determine whether the player made or missed the shot
	boolean score;
	//gets the value from shot so I can give it to a variable in my main
	public Player()
	{
		Horse = new char[5];
		//setting the character array Horse to something so that I can compare it when I run getScore
		Horse[0]='a';
		Horse[1]='b';
		Horse[2]='c';
		Horse[3]='d';
		Horse[4]='f';
		int shot=0;
		boolean score=false;
	}
	public void setShot()
	{
		//gives a random number to shot to determine whether or not they made the shot
		Random rand= new Random();
		shot=rand.nextInt(2)+1;
		if(shot==1)
		{
			score=true;
		}
		else if (shot==2)
		{
			score=false;
		}

	}
	public boolean getShot()
	{
		//returns whether or not they made the shot so I can give it to a variable in main to use in main
		return score;
	}
	public void getScore()
	{
		//gives the player a letter if they miss the shot
		if (Horse[0]!='H')
		{
			Horse[0]='H';
		}
		else if (Horse[1]!='O')
		{
			Horse[1]='O';
		}
		else if (Horse[2]!='R')
		{
			Horse[2]='R';
		}
		else if (Horse[3]!='S')
		{
			Horse[3]='S';
		}
		else if (Horse[4]!='E')
		{
			Horse[4]='E';
		}
	}
	public String getHorse()
	{
		//returns the letters the players has to main so I can print them
		String print= new String(Horse);
		return print;
	}
}
