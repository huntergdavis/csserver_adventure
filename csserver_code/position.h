/*
This is the file that has class position in it
positional information
programmer Hunter Davis
I added the position class to the game when people began complaining that
they couldn't fight tougher monsters until they had leveled up.  This class
includes the position selection menu and the descriptive text for positions 
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <string.h>
#include <time.h>

using namespace std;

class Position
{
public:

int position;			//the position number
char *positiontext;		//the position descriptive text


void Position::PositionMenu(){

string choice;
string quit;
quit = "no";


while(quit != "yes"){
system("clear");
cout << " Choose Your Destination!" << endl;
cout << "   The monsters get tougher the higher up you go" << endl;
cout << "   in the list (i.e. big numbers = big monsters)!!" << endl;
cout << endl;
cout << "  1. Play around in the Cs Lab! " << endl;
cout << "  2. Hide in the hall closet! "   << endl;
cout << "  3. Fight back in the main hallway! "    << endl;
cout << "  4. Stink up the Biology Lab! "    << endl;
cout << "  5. Shingle the roof in blood! "    << endl;
cout << "  6. Fill the crawl spaces with gore! "     << endl;
cout << "  7. Bust some heads in the lower labs!"     << endl;
cout << "  8. Blow some monsters up in the Chemistry labs!"     << endl;
cout << "  9. Fight through the secret exit!"     << endl;
cout << " 10. Get your ass kicked by badass monsters outside!"    << endl;
cin >> choice;

if (choice == "1")
{position = 0;quit = "yes";}

if (choice == "2")
{position = 1;quit = "yes";}

if (choice == "3")
{position = 2;quit = "yes";}

 if (choice == "4")
{position = 3;quit = "yes";}

if (choice == "5")
{position = 4;quit = "yes";}

if (choice == "6")
{position = 5;quit = "yes";}

if (choice == "7")
{position = 6;quit = "yes";}

if (choice == "8")
{position = 7;quit = "yes";}

if (choice == "9")
{position = 8;quit = "yes";}

if (choice == "10")
{position = 9;quit = "yes";}

}
/*ending bracket for while loop*/


}
/*ending bracket for menu function*/


void Position::MakePosition(int pos){
position = pos;

if (position == 0)
{
positiontext = " You are in the Cs Lab, this seems to be the outer fringe of Demon Society, just like in real society!  The monsters are weak here";
}

if (position == 1)
{
positiontext = " You are in the closet, it is apparently a dimentional portal to hell!  It is obviously not large enough for higher level demons to enter";

}


if (position == 2)
{
positiontext = " You are in main hallway, demons are running down the stairs in an attempt to clobber you. The really large ones do not seem interested in you right now";
}

if (position == 3)
{
positiontext = " You are slowly working your way up the back stairs, the funky smell of demons mixes with the pungent smell of biology majors, fear for your soul, and you olfactory glands! Larger monsters are appearing now";
}

if (position == 4)
{
positiontext = " You begin to work your way up to the roof, in a feeble attempt to get away.  The demons are getting increasingly larger.";
}

if (position == 5)
{
positiontext = " You worm your way through some crawl spaces towards the underground tunnels you've heard about.  The demons are expecially smelly here, but not much larger than the roof";
}

if (position == 6)
{
positiontext = " Having Failed with the underground tunnel, you desperately search for a way to stop the maddness in the lower labs, As much as you enjoy killing things, these demons are getting big!";
}

if (position == 7)
{
positiontext = " All kissing aside, the blood on your clothes is never going to come out!!  You begin to head on down to the chem labs to sort out some chemicals, the monsters here have apparently also found the chemicals and are quite large...";
}

if (position == 8)
{
positiontext = " Shit's getting nasty!  The monsters here are top notch, and you'd better be up to the task!  You find a hidden door leading outside koch center, could it be a trap?";
}

if (position == 9)
{
positiontext = " Having escaped from Koch center, you come face to face with them.  The elite 5.  The top dogs.  The shit.  Beat the hell out of them if you're able!";
}


}
/*this is the ending bracket for the positional function*/

/*This is the ending bracket for the entire class*/
};




