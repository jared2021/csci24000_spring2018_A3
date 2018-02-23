//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//jascho
import java.io.*;
import java.util.Random;
import java.util.Scanner;
public class Game
{
	public static void main(String [] args)
	{
		Scanner cin= new Scanner(System.in);
		//allows me to take in inputs
		boolean one;
		boolean two;
		//one and two stores whether or not player one or player two made or missed the shot
		char game='Y';
		//game used to run the program again if the player inputs a Y at the end of the program
		while (game=='Y')
		{
			int letter1=0;
			int letter2=0;
			//letter1 and letter 2 holds how many letters each player has
			Player PlayerOne=new Player();
			Player PlayerTwo=new Player();
			while (letter1<5&&letter2<5)
			{
				System.out.println("Player One goes to shoot.");
				PlayerOne.setShot();
				PlayerOne.getShot();
				if(PlayerOne.getShot()==true)
				{
					System.out.println("Player One makes the shot!");
				}
				else if (PlayerOne.getShot()==false)
				{
					System.out.println("Player One missed the shot!");
				}
				one=PlayerOne.getShot();
				System.out.println("Player Two goes to shoot.");
				PlayerTwo.setShot();
				PlayerTwo.getShot();
				if(PlayerTwo.getShot()==true)
				{
					System.out.println("Player Two makes the shot!");
				}
				else if (PlayerTwo.getShot()==false)
				{
					System.out.println("Player Two missed the shot!");
				}
				two=PlayerTwo.getShot();
				if (one==true&&two==false)
				{
					PlayerTwo.getScore();
					letter2=letter2+1;
					System.out.println("Player Two has "+PlayerTwo.getHorse());
				}
				else if(one==false&&two==true)
				{
					PlayerOne.getScore();
					letter1=letter1+1;
					System.out.println("Player One has "+PlayerOne.getHorse());
				}
				if (letter1==5)
				{
					System.out.println("Player Two has won! Player One has "+PlayerOne.getHorse());
				}
				else if (letter2==5)
				{
					System.out.println("Player One has won! Player Two has "+PlayerTwo.getHorse());
				}	
			}
			System.out.println("Would you like to play again? [Y|N]");
			game=cin.next().charAt(0);
			//gives game the first character the user inputs
			while (game!='Y'&&game!='N')
			{
				System.out.println("I'm not sure what you want me to do.");
				System.out.println("Would you like to play again?[Y|N]");
				game=cin.next().charAt(0);
			}
		}
	}
}
