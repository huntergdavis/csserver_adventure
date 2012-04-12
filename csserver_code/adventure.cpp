/*
File: adventure.cpp
Programmer: Hunter Davis
Description:

  This is the main program file for csserver adventure.  Csserver adventure is a game project
  with stat based combat.  Adventure.cpp includes the main game loop, the command interpreter
  and the initialization of class variables for the main character, monsters, and combat systems.

last update: 9/14/2002


*/ 
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream> 
#include <cstdio>
#include <string>
#include <time.h>

#include "battle.h"			//Contains the battle mechanics, and recursively includes character and location classes



using namespace std;

int main(int argc, char* argv){



system("clear");			//clears the console of any text

/*
Here is where we introduce the story and character to the player
This is also where the Player inputs thier name
*/

cout << "  Welcome to Evansville Csserver Adventure Version 1.0!" << endl;
cout << "  Are you ready???  Ok then Let's Go!" << endl;
cout << "  Enter Your Character Name "  << endl;
cout << "  It can be anyting!!" << endl;



char thename[200];			//character array for holding player name
cin.get (thename,200);		//snag the player name from the console
Character ThisOne;			//Creates the player of type Character
Position Posit;				//Creates the data class for the player's position text
Posit.MakePosition(0);		//Initializes the position text to the first room
ThisOne.position = 0;		//The player is currently in the first room
ThisOne.Namer(thename);		//The player's name stored


int Level;
Level = ThisOne.CheckPassword();	//calls the player password check function, returns the player level


system("clear");
ThisOne.BaseStatsOnLevel(Level);   //player stats are based on thier current level

cout << " Good then, hit ctrl-c anytime to quit" << endl;
cout << " Hit any key then enter to continue" << endl;


ThisOne.ShowStats(thename);			//current player stats are displayed for the player

/*
here is the initial descriptice text.  After the first round of fighting the player
will see thier position rather than this text
*/
system("clear");
cout << " One day while walking through the halls of Koch Center, " << endl;
cout << " DEMONS ATTACK!!!  Let's get rough." << endl;
cout << " Armed with only your trusty Torque-Wrench of Smiting, you" << endl;
cout << " begin your perilous journey through the bowels of koch center" << endl;


string quit;						//variable to exit while loop
string choice;						//variable to hold player choice 


while(quit != "yes"){

/*
This is the main player menu, after the player exits any of the submenus (i.e. fighting)
the player will see thier position and this menu
*/

cout << Posit.positiontext;			//display current player position
cout << endl;
cout << endl;
cout << " What would you do?" << endl;
cout << " ---------------------------------" << endl;
cout << " M to move to another roon!" << endl;
cout << " 1 Battle, drink beer!!" << endl;
cout << " 2 to check stats" << endl;
cout << " 3 to spend some cash on some beer (heal up)" << endl;
cout << "----------------------------------" << endl;
cout << " 666 to quit" << endl;
cout << " 8 for a basic and vague explanation of this game" << endl;
cout << " 9 to read about this game and the author" << endl;
cout << " ---------------------------------" << endl;
cin  >> choice;


if (choice == "m" || choice == "M")
{

/*
The position feature was added in early 2002.  It allows players to change thier position
in the building, which effectively allows them to choose the level of monsters they fight.
*/


Posit.PositionMenu();						//open the position menu
Posit.MakePosition(Posit.position);			//grabs the player position sets descriptive text
ThisOne.position = Posit.position;			//sets the player position data to the player current position
}

if (choice == "1")
{
Battle NewBattle;							//initialize a battle class
int* checker;								//creates an array to hold battle information
checker = NewBattle.Engage(ThisOne);		//calls the engage function which returns battle information
ThisOne.exp = checker[1];					//sets experience points after the battle
ThisOne.hitpoints = checker[3];				//sets hitpoints after the battle
ThisOne.cash = checker[2];					//sets cast after the battle
ThisOne.beer = checker[0];					//sets beer after the battle

}
if (choice == "2")
{  system("clear");
ThisOne.ShowStats(thename);					//displays the player's stats
}
if (choice == "3")
{ system("clear");
ThisOne.Beer();								//opens up the player's beer buying dialogue
}

if (choice == "666")
{
 system("clear");
cout << "Your new password is: "<< ThisOne.password << " --Write it down!" << endl;	//calls password function, passwords are based on level
cout << " Press any key then enter to continue" << endl;	
cin >> choice;
quit = "yes";
}

if (choice == "8")
{
ThisOne.Explain();							//gives a rudimentary explanation of the game mechanics
}

if (choice == "9")
{
ThisOne.Rant();								//gives a small rant from the author
}


ThisOne.CheckLevel();						//if the player experience is high enough, they level up


 system("clear");

/*this closing bracket is for the main game while loop*/
        }

return 0;
};
/*end of main*/





