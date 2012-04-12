/*
This is the file that has class character in it
programmer Hunter Davis

This class contains all character data, and functions to access that data, as well as
the core game functions that check the player level and password, give game instruction, 
and allow the character to buy refreshment

*/ 
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <string>
#include <time.h>
#include "position.h"


class Character
{
public:

int exp;
int level;
char  *name;
int hitpoints;
int hitpointsfull;
int strength;
int constitution;
int speed;
int wisdom;
string password;
int cash;
int beer;
int position;

Character::Character(){;}

void Character::Namer(char *Nom){
	name = Nom;
}


int Character::CheckPassword(){
system("clear");
cout << " Enter Your Special Password, If it is not found..." << endl;
cout << " a new level 0 Character will be made for you." << endl;
cin >> password;
cout << endl;

 if(password == "morse")
 {return 1;}

 if(password == "hwang")
 {return 2;}

 if(password == "blandford")
 {return 3;}


 if(password == "mitchell")
 {return 4;}

 if(password == "davis")
 {return 5;}

 if(password == "badow")
 {return 6;}

 if(password == "squizah")
 {return 7;}

 if(password == "gettingclose")
 {return 8;}

 if(password == "smokin")
 {return 9;}

 if(password == "hunterrocks")
 {return 10;}

 else
 {return 0;}
                   }
int Character::ForNextLevel(int exp){
int temp;

temp = (100*level) + 100 - exp;
if(exp >= 999)
{temp = 100000 - exp;}

return temp;



                                    }

void Character::BaseStatsOnLevel(int lvl){
level = lvl;
hitpoints = (level * 2) + 20;
hitpointsfull = hitpoints;
strength = level + 10;
constitution = level + 11;
speed = level + 10;
wisdom = level + 10;
exp = level * 100;
cash = (level * 10) + 50;
beer = 0;

if(lvl == 1)
 { 
   password = "morse";
   }

if(lvl == 2)
 { 
   password = "hwang";
 }

if(lvl == 3)
 {
   password = "blandford";
 }

if(lvl == 4)
 {
   password = "mitchell";
 }


if(lvl == 5)
 { 
   password = "davis";
 }


if(lvl == 6)
 {
   password = "badow";
 }

if(lvl == 7)
 { 
   password = "squizah";
 }

if(lvl == 8)
 { 
   password = "gettinclose";
 }

if(lvl == 9)
 { 
   password = "smokin";
 }

if(lvl == 10)
 { 
   password = "hunterrocks";
 }


                                  }

void ShowStats(char heroname[200]) {
system("clear");

cout << "  STATS for " << heroname << ":" << endl;
cout << "          Level: " << level << endl;
cout << "      Hitpoints: " << hitpoints << endl;
cout << "  Max Hitpoints: " << hitpointsfull << endl;
cout << "       Strength: " << strength << endl;
cout << "   Constitution: " << constitution << endl;
cout << "          Speed: " << speed << endl;
cout << "         Wisdom: " << wisdom << endl;
cout << "            Exp: " << exp << endl;
cout << " Next level in : " << ForNextLevel(exp) << endl;
cout << "     You've got: " << cash << " dollars" << " and " << beer << " beers" << endl;
cout << "press any key, then enter to continue" << endl;
string something;
cin >> something;
system("clear");
                 }


void Character::Beer(){
string choice;
int costofbeer;
costofbeer = 20 + (10*level);
while (choice != "n" || choice != "no") {
cout << endl;

cout << " You Have " << cash << " dollars" << " and " << beer << " beers" << endl;
cout << " All we've got right now is keg-beer" << endl;
cout << " It's " << costofbeer << " per beer (we gotta make a profit)" << endl;
cout << " You can use one in battle to heal up to full hp" << endl;
cout << endl << " You want one? y/n or yes/no? (lowercase only)" << endl;
cin >> choice;

if (choice == "yes" && cash < costofbeer || choice == "y" && cash < costofbeer)
 {system("clear");cout << " Sorry man, you don't have enough cash for beer" << endl;}

if (choice == "yes" && cash >= costofbeer || choice == "y" && cash >= costofbeer)
 {system("clear"); cout << " Party-on, you buy a beer and prepare to smash" << endl;
  cash = cash - costofbeer; beer++;
  hitpoints = hitpointsfull;
 }
if (choice == "no" || choice == "n")
 {system("clear");break;}
system("clear");

                                         }


system("clear");
/*ending bracked for beer*/
                        }

void Character::CheckLevel(){
if(exp/100 >= level + 1){
cout << " You Have Gained a Level, your stats increase," << endl;
cout << " This may or may not cost you money,as the gods are fickle" << endl;
cout << " You drink all your beer in celebration!" << endl;
level = level + 1;
position = (position - 0);
BaseStatsOnLevel(level);
                   }
                            }


void Character::Rant(){
system("clear");
cout << " About The Author" << endl;
cout << endl << " Hunter Davis is a 4th year CS Majro at UE who just got" << endl;
cout << " tired of demons attacking whenever he was working on a cs project." << endl;
cout << " Quotes Hunter: 'DAMNDED DIRTY DEMONS, they're always ruining my cs projects...'" << endl;
cout << " This game is a sort of stress relief for Hunter, who always Hated fighting" << endl;
cout << " demons in the middle of test time" << endl;
cout << " No offence is meant towards the parties that the hero of the game kills " << endl;
cout << " It's not the author's fault that they were possessed by demons!" << endl;
cout << " Killing them was and is the only humane thing to do considering the demon issue" << endl;
cout << " So let's bust some heads!" << endl;
cout << endl << endl << endl << " Goemon_h@yahoo.com, hd8@evansville.edu" << endl;
cout << " This game is a constant work in progress" << endl;
cout << " Check csserver.evansville.edu/~hd8/ for updates and other programs" << endl << endl;
char choice;
cout << "       Hit any key then enter to continue" << endl;
cin >> choice;
system("clear");
                       }


void Character::Explain(){
system("clear") ;
cout << " Csserver Adventure Game Manual -Hunter Davis " << endl;
cout << endl << endl;
cout << " Follow the directions onscreen" << endl << endl;
cout << " You will only be able to fight 10 enemies to begin with " << endl;
cout << " as you progress in koch center the enemy roster will increase to 50" << endl;
cout << endl;
cout << " The highest level you can reach in this beta is 10, meaning" << endl;
cout << " You can't earn more than 999 exp. " << endl;
cout << " Level progression will be slow at first, but it will soon pick up!" << endl;
cout << " IF YOU QUIT, YOUR EXPERIENCE WILL RESET TO THE BEGINING OF YOUR LAST ATTAINED LEVEL" << endl;
cout << "  for instance: you quit with 930 exp, when you come back you will have 900" << endl;
cout << " If all goes well in this beta i will release more monsters, graphics, a plot, and" << endl;
cout << " more locations.  this is only if this beta goes well." << endl;
cout << " I appreciate any comments you may have about the game, and if you want to add a monster" << endl;
cout << " Just send me the name and the stats you think it should have and i'll consider it." << endl;
cout << " please report any bugs to hd8@evansville.edu or goemon_h@yahoo.com " << endl;
cout << " Thank you for playing my game --HD" << endl;
char choice;
cout << "       Hit any key then enter to continue" << endl;
cin >> choice;
system("clear");
                         }

/*This is the ending bracket for the entire class*/
};




