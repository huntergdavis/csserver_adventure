/*
This is the file that has class battle and class monster in it
programmer Hunter Davis
it's my first attempt at doing a semi-comical adventure for csserver
lets rock!
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <string>
#include <time.h>
#include "character.h"
class Monster
{
public:

string name;
string description;
int hitpoints;
int strength;
int speed;
int wisdom;
int cash;
int exp;

/*set up the types of monsters*/
Monster::Monster(int type){
 if (type == 1)   {
  name = "DemonMorse";
  description = " Dr Morse has been hideously mutated by a demon, save his soul by kicking his ass!";
  hitpoints = 5;
  strength = 10;
  speed = 10;
  wisdom = 10;
  cash = 10;
  exp = 10;
                  }

 if (type == 2)   {
  name = "Rich_Ammerman";
  description = " For the first time in his life Rich went to class, and was immediately possed by a demon.  Kill him!";
  hitpoints = 3;
  strength = 10;
  speed = 10;
  wisdom = 10;
  cash = 10;
  exp = 7;
                  }

 if (type == 3)   {
  name = "DemonHwang";
  description = "Dr Hwang has been possessed by a demon, let's get rough!";
  hitpoints = 5;
  strength = 10;
  speed = 10;
  wisdom = 12;
  cash = 10;
  exp = 8;
                  }

 if (type == 4)   {
  name = "DemonDave";
  description = " Rovani was walking through the halls of kock when FLIPMODE bam, he got possessed by a demon, come get some!";
  hitpoints = 5;
  strength = 12;
  speed = 10;
  wisdom = 10;
  cash = 10;
  exp = 7;
                  }

 if (type == 5)   {
  name = "SpongeBobDemon";
  description = " I don't care if he's not a demon, kill him anyway";
  hitpoints = 7;
  strength = 8;
  speed = 8;
  wisdom = 8;
  cash = 10;
  exp = 7;
                  }

 if (type == 6)   {
  name = "DemonBillG";
  description = " He never was really human anyway...";
  hitpoints = 6;
  strength = 10;
  speed = 12;
  wisdom = 15;
  cash = 20;
  exp = 7;
                  }

 if (type == 7)   {
  name = "DemonTraitor";
  description = " yes that's right, the traitorous little lech that was matt jones is now a demon...this should be fun!";
  hitpoints = 5;
  strength = 10;
  speed = 10;
  wisdom = 10;
  cash = 5;
  exp = 8;
                  }

 if (type == 8)   {
  name = "DemonMoorman";
  description = " Somehow a small COE got lost in koch center, and possessed by a demon....make him pay!";
  hitpoints = 5;
  strength = 10;
  speed = 10;
  wisdom = 10;
  cash = 10;
  exp = 7;
                  }

 if (type == 9)   {
  name = "DemonPinky";
  description  = " Gee brain, what are we going to do tonight?";
  hitpoints = 5;
  strength = 10;
  speed = 10;
  wisdom = 10;
  cash = 25;
  exp = 7;
                  }

 if (type == 10)   {
  name = "DemonBrain";
  description = " Brains have no place in koch center, it must be a demon..kill it";
  hitpoints = 5;
  strength = 10;
  speed = 10;
  wisdom = 10;
  cash = 5;
  exp = 10;
                  }

 if (type == 11)   {
  name = "Devildoll";
  description = " I'm devil-doll waaaaaa, a real wus, gets coffee for rasiskull";
  hitpoints = 8;
  strength = 11;
  speed = 12;
  wisdom = 13;
  cash = 15;
  exp = 12;
                  }

 if (type == 12)   {
  name = "Radiskull";
  description = " chants: I am the radiskull, i will kill you one by one";
  hitpoints = 15;
  strength = 13;
  speed = 8;
  wisdom = 8;
  cash = 7;
  exp = 13;
                  }

 if (type == 13)   {
  name = "Mcfarlanos";
  description = " writes comic books about his own life, smart but a wus";
  hitpoints = 15;
  strength = 6;
  speed = 8;
  wisdom = 18;
  cash = 7;
  exp = 13;
                  }

 if (type == 14)   {
  name = "Fergdemon";
  description = " Demon-spawn of punk rock, punk rock his brains with your might blows!";
  hitpoints = 15;
  strength = 13;
  speed = 10;
  wisdom = 13;
  cash = 7;
  exp = 13;
                  }

 if (type == 15)   {
  name = "Renodemon";
  description = " looks exactly like BillG...";
  hitpoints = 15;
  strength = 13;
  speed = 10;
  wisdom = 14;
  cash = 10;
  exp = 20;
                  }

 if (type == 16)   {
  name = "Rochellomon";
  description = " Mistakenly got sucked into hell while watching digimon";
  hitpoints = 15;
  strength = 13;
  speed = 16;
  wisdom = 13;
  cash = 10;
  exp = 15;
                  }

   if (type == 17)   {
  name = "Estello";
  description = " Possessed by a demon, chants squizah as he slashes at you";
  hitpoints = 15;
  strength = 13;
  speed = 13;
  wisdom = 13;
  cash = 13;
  exp = 17;
                  }

 if (type == 18)   {
  name = "WingBat";
  description = " i'll swallow your soul!";
  hitpoints = 16;
  strength = 8;
  speed = 8;
  wisdom = 8;
  cash = 7;
  exp = 13;
                  }
 if (type == 19)   {
  name = "BatRat";
  description = " confused little demon";
  hitpoints = 8;
  strength = 8;
  speed = 8;
  wisdom = 8;
  cash = 7;
  exp = 8;
                  }
 if (type == 20)   {
  name = "Sabinom";
  description = " seg fault? i'll seg fault you!";
  hitpoints = 13;
  strength = 13;
  speed = 13;
  wisdom = 13;
  cash = 13;
  exp = 15;
}

 if (type == 21)   {
  name = "IUTransferer";
  description = " Collin, oops i mean IUTransferer has really bad taste in music!";
  hitpoints = 14;
  strength = 14;
  speed = 14;
  wisdom = 14;
  cash = 14;
  exp = 15;
}
  if (type == 22)   {
  name = "SaadSac";
  description = " I come to class sometimes!  Smash him!";
  hitpoints = 14;
  strength = 14;
  speed = 14;
  wisdom = 15;
  cash = 15;
  exp = 15;
}

 if (type == 23)   {
  name = "DemonTurpin";
  description = " Known to say: 'Man is jones a little bich'!";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 20;
  exp = 20;
}


 if (type == 24)   {
  name = "MathWhizNorrik";
  description = " I've had more calculus than anyone!  He means to say i've taken calc 1 and 2 5 times...smash him!";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 8;
  cash = 20;
  exp = 15;
                 }

 if (type == 25)   {
  name = "DeeDee";
  description = " What's this button do?  Kill the annoying bitch!!";
  hitpoints = 3;
  strength = 3;
  speed = 3;
  wisdom = 3;
  cash = 30;
  exp = 30;
                  }

 if (type == 26)   {
  name = "BigDemonDave";
  description = "known to say- Hey now, combinitorics is fun, as long as you get to flunk people mwahaha!!";
  hitpoints = 15;
  strength = 15;
  speed = 16;
  wisdom = 15;
  cash = 30;
  exp = 20;
                  }

  if (type == 27)   {
  name = "DemonHerr";
  description = " Drives a pickup, listens to Hank Williams, who cares if he's a demon...";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 28)   {
  name = "CheepCheep";
  description = " One day he'll die from drinking...but today he's going to die from head injury wounds!";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 29)   {
  name = "PornMaster";
  description = " You know the type, watches demon porn imported from germany all day long, make him pay for not sharing!";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 30)   {
  name = "DemonMitchell";
  description = " Can do backflips, very smart, not so strong ";
  hitpoints = 15;
  strength = 10;
  speed = 20;
  wisdom = 18;
  cash = 30;
  exp = 30;
                  }

  if (type == 31)   {
  name = "DemonLeprouchaun";
  description = " Head of the department...";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 25;
                  }
  if (type == 32)   {
  name = "DemonMcpotter";
  description = " Oh yeah he's cool, for a mongeloid...";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 33)   {
  name = "DemonDancer";
  description = " Sure she says she's interested, but who's got 20 bucks in who's panties??...";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 34)   {
  name = "DemonStripper";
  description = " She'll take you to a back-room of pain!";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 35)   {
  name = "ChristiDemon";
  description = " After spending a summer working for demonmorse, who wouldn't be turned to the dark side.  Save her from her pain...";
  hitpoints = 15;
  strength = 15;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 36)   {
  name = "Crambriucus";
  description = " Tried to get out while she could, kill the traitor!...";
  hitpoints = 16;
  strength = 16;
  speed = 16;
  wisdom = 16;
  cash = 30;
  exp = 30;
                  }

  if (type == 37)   {
  name = "Ticenon";
  description = " A cold stare of pain echos out, kill the little pimp...";
  hitpoints = 16;
  strength = 16;
  speed = 16;
  wisdom = 16;
  cash = 30;
  exp = 30;
                  }

  if (type == 38)   {
  name = "MilHouse";
  description = " Guess where his other hand is! Kill him before he shows you";
  hitpoints = 4;
  strength = 16;
  speed = 16;
  wisdom = 16;
  cash = 30;
  exp = 30;
                  }

  if (type == 39)   {
  name = "Odleon";
  description = " No hair to deflect your torque wrench, take advantage of that fact..";
  hitpoints = 16;
  strength = 13;
  speed = 16;
  wisdom = 16;
  cash = 30;
  exp = 30;
                  }

  if (type == 40)   {
  name = "Simpsonite";
  description = " I know every simpsons quote ever, I'm idaho! -- Kill him before the Simpsons make a comeback";
  hitpoints = 16;
  strength = 16;
  speed = 17;
  wisdom = 17;
  cash = 30;
  exp = 30;
                  }

  if (type == 41)   {
  name = "ShotGun Justice";
  description = " Packs quite a punch of justice with that shotgun...";
  hitpoints = 15;
  strength = 20;
  speed = 15;
  wisdom = 15;
  cash = 30;
  exp = 30;
                  }

  if (type == 42)   {
  name = "Windows ME";
  description = " Goes down faster than csserver, and more often...";
  hitpoints = 16;
  strength = 17;
  speed = 16;
  wisdom = 17;
  cash = 30;
  exp = 30;
                  }

  if (type == 43)   {
  name = "Apple II";
  description = " Schools across ethiopia still use these antiquated crap-boxes.  Smash them before it's too late";
  hitpoints = 15;
  strength = 5;
  speed = 2;
  wisdom = -10;
  cash = 30;
  exp = 30;
                  }

  if (type == 44)   {
  name = "Windows 3.0";
  description = " The last remaining stable version of Windows, it's back with the bloodlust of a thousand rackmount servers.";
  hitpoints = 16;
  strength = 17;
  speed = 16;
  wisdom = 17;
  cash = 30;
  exp = 30;
                  }

if (type == 45)   {
  name = "I-Mac";
  description = " This time it's personal.  It's not possessed, it's not even turned on, just kill it now!";
  hitpoints = 17;
  strength = 0;
  speed = 0;
  wisdom = 0;
  cash = 0;
  exp = 10;
                  }
if (type == 46)   {
  name = "HellSpawn";
  description = " Wicked-tough, watch your ass";
  hitpoints = 20;
  strength = 17;
  speed = 17;
  wisdom = 17;
  cash = 30;
  exp = 30;
                  }

if (type == 47)   {
  name = "Black Ninja";
  description = " Fast as hell";
  hitpoints = 25;
  strength = 17;
  speed = 20;
  wisdom = 17;
  cash = 30;
  exp = 30;
                  }


if (type == 48)   {
  name = "Psycho-Bitch";
  description = " We all know one, and we're all scared of one...";
  hitpoints = 27;
  strength = 17;
  speed = 17;
  wisdom = 17;
  cash = 30;
  exp = 30;
                  }

if (type == 49)   {
  name = "Evil ASH";
  description = " Evil counterpart to the one-liningest, trash-talkingest, ass-kickingest guy there is, be afraid, and come get some!";
  hitpoints = 28;
  strength = 18;
  speed = 18;
  wisdom = 18;
  cash = 30;
  exp = 30;
                  }

if (type == 50)   {
  name = "HunterD";
  description = " In this realm he is god, can you kill a god?  We have yet to find out";
  hitpoints = 50;
  strength = 25;
  speed = 25;
  wisdom = 25;
  cash = 300;
  exp = 100;
                  }

/*---------------------------end monster types*/
                                }


void Monster::ViewStats(){
system("clear");

cout << "  STATS for " << name << ":" << endl;
cout << "  stroustrup describes as:" << endl;
cout << " " << description << endl;
cout << "       Hitpoints: " << hitpoints << endl;
cout << "        Strength: " << strength << endl;
cout << "           Speed: " << speed << endl;
cout << "          Wisdom: " << wisdom << endl;
cout << " Exp for killing: " << exp << endl;
cout << " cash for killing: " << cash << " dollars" << endl;

                           }



/*monster fights a given hero*/
int* Monster::Fight(Character Hero){
system("clear");
string battlechoice;
string choice;
int herodamage;
int monsterdamage;
bool isover;
bool isdead;
isover = false;
isdead = false;
int* i = new int[4];
cout << " You are about to engage in battle with a " << name << endl;
cout << " You remember this type of monster from your demon handbook (stroustrup)" << endl;
cout << "'" << description << "'" << endl;
while(monsterdamage!= 999){
if (Hero.exp > 999){Hero.exp = 999;}

if (Hero.hitpoints < 1){isdead = true;}
if (isdead == true){
cout << " You have died" << endl;
cout << " Your Hitpoints are now at 1" << endl;
cout << " You suck!" << endl;
Hero.hitpoints = 1;
break;             }




if (hitpoints < 1){isover = true;}
if (isover == true){
cout << " The battle is over, You Have Won!!! " << endl;
cout << " You gain " << exp << " experience and " << cash << " dollars!!" << endl;
Hero.exp = Hero.exp + exp;
if (Hero.exp > 999){Hero.exp = 999;}
Hero.cash = Hero.cash + cash;
break;             }

cout << " " << name << " Has " << hitpoints << " hitpoints left and you have " << Hero.hitpoints << " hitpoints left" << endl;
cout << endl;
cout << " What will you do? " << endl;
cout << " 1 Attack it!" << endl;
cout << " 2 Attempt to dodge! (dodges attack, lowers monster's strength)" << endl;
cout << " 3 Attempt to outsmart it and whack it (wisdom check, powerful attack)" << endl;
cout << " 4 Drink a Beer and heal up" << endl;
cout << " 5 view your stats" << endl;
cout << " 6 view monster stats" << endl;
cout << " 7 Run Away!" << endl;
cin >> battlechoice;

if (battlechoice == "7"){
system("clear");
cout << " You ran like a coward, no exp is gained" << endl;

break;                }

if (battlechoice == "6"){
ViewStats();
cout << " Press any key then enter to continue" << endl;
cin >> choice;
system("clear");
                      }

if (battlechoice == "5"){
Hero.ShowStats(Hero.name);
                      }

if (battlechoice == "4"){
 system("clear");
if (Hero.beer > 0)
{cout << " You slurp down a cold frothy one, all hitpoints refreshed" << endl;
 Hero.beer = Hero.beer - 1;
 Hero.hitpoints = Hero.hitpointsfull;
}
else
{cout << " You don't have any beer slick, you can't drink what you don't have" << endl;
}
cout << " Press any key then enter to continue" << endl;
cin >> choice;
system("clear");
                      }

/* Mental Battle right here */
if (battlechoice == "3"){
  system("clear");
herodamage = (Hero.wisdom - wisdom)/2;
herodamage = herodamage + ( rand() % (Hero.level + 1) );
herodamage = herodamage + 5;
int aguilera;
aguilera = rand() % 6;

if (aguilera == 0){aguilera = 1;}
if (aguilera == 1)
{
cout << " You concentrate all your energy into one phrase:" << endl;
cout << " Hey look, it's Christina Aguilera! " << endl;
cout << " As the demon turns to greet it's brethren" << endl;
}
if (aguilera == 2)
{
cout << " You concentrate harder and harder, your palms" << endl;
cout << " sweating from the effort.  you scream out:" << endl;
cout << " KAIOKEN ATTACK, and start hitting on the demon" << endl;
cout << " Unfortunately, your weak fleshy man-fists are no" << endl;
cout << " Match for the demon's tough skin.." << endl;
cout << " KAIOKEN TIMES TEN!!" << endl;
cout << " The demon begins to laugh " << endl;
cout << " He doesn't notice you pull your wrench out..." << endl;

}

if (aguilera == 3)
{
cout << " You Gather all your mental strength up" << endl;
cout << " Remembering your intensive training, you" << endl;
cout << " Blast a bolt of energy towards the monster" << endl;
cout << " It does no damage... " << endl;
cout << " Frustrated, you yell to the demon" << endl;
cout << " Hey demon, your mother's deaf " << endl;
cout << " The demon replies, my mother's dead you fool " << endl;
cout << " Just as quickly you retort " << endl;
cout << " ..Damn! I forgot the damn punch line " << endl;
cout << " Oh well, you've always got old faithful... " << endl;
}
if (aguilera == 4)
{
cout << " This time it's gonna work, " << endl;
cout << " Gathering up all your engergy into a ball of flame, " << endl;
cout << " You scream : 'HADOKEN!!!'" << endl;
cout << " The demon's face is hideously charred and mangled " << endl;
cout << " As you celebrate your victory, the demon hops up" << endl;
cout << " regenerated to it's previous state!" << endl;
cout << " 'Fool' it shouts, only holy weapons can damage a demon" << endl;
cout << " This leaves you pondering the origin of your mighty torque wrench" << endl;
cout << " Oh well, just wait till release 3.0 and be happy with what you got!" << endl;
}
if (aguilera == 5)
{
cout << " You see a shapely figure behind the demon" << endl;
cout << " Hey demon, it's Christina Aguilera! " << endl;
cout << " The demon replies 'Yeah right!'" << endl;
cout << " I'll not fall for that one again" << endl;
cout << " 'Bow before your master insolent sub-demon' she shouts" << endl;
cout << " As the monster turns to pay homage, you see your chance" << endl;
}

cout << endl;
cout << " You smash it for " << herodamage << " points of damage!" << endl;
monsterdamage = (strength - Hero.strength)/2;
monsterdamage = monsterdamage + 5;

cout << " The Monster Rears it's ugly head and" << endl;
cout << " slashes you for " << monsterdamage << " points of damage!!" << endl;

hitpoints = hitpoints - herodamage;
Hero.hitpoints = Hero.hitpoints - monsterdamage;

cout << " Press any key then enter to continue" << endl;
cin >> choice;
system("clear");
                      }

if (battlechoice == "2"){
int temper;
 system("clear");
temper = (Hero.speed - speed)/2;
 if (temper  + (rand() % (Hero.level + 1)) > 2)
 { cout << " You dodge the monsters attack!" << endl;
   cout << " You see, getting beat up in grade school did help!" << endl;
   cout << " The monster's strength is lowered!" << endl;
 strength --;
 }
 else
 {
  monsterdamage = (strength - Hero.strength)/2;
  monsterdamage = monsterdamage + 7;

  cout << " The Monster Rears it's ugly head and" << endl;
  cout << " slashes you for " << monsterdamage << " points of damage!!" << endl;
  Hero.hitpoints = Hero.hitpoints - monsterdamage;
 }

cout << " Press any key then enter to continue" << endl;
cin >> choice;
system("clear");
                      }

if (battlechoice == "1"){
system("clear");


  herodamage = (Hero.strength - strength)/2;
  herodamage = herodamage + ( rand() % (Hero.level + 1) );
  herodamage = herodamage + 2;
  cout << " You stand firm, wielding your mighty torque wrench you " << endl;
  cout << " raise it's mighty head high and let loose with a furious blow" << endl;
  cout << " you give the demon pain!!! " << endl;
  cout << " You caused " << herodamage << " points of damage!" << endl;
  hitpoints = hitpoints - herodamage;

if( hitpoints > 0){
monsterdamage = (strength - Hero.strength)/2;
  monsterdamage = monsterdamage + 7;
    Hero.hitpoints = Hero.hitpoints - monsterdamage;
  cout << " The Monster Rears it's ugly head and" << endl;
  cout << " slashes you for " << monsterdamage << " points of damage!!" << endl;
                   }

cout << " Press any key then enter to continue" << endl;
cin >> choice;
system("clear");
                      }
system("clear");

/*this is for the crazy forever loop*/
        }


i[0] = Hero.beer;
i[1] = Hero.exp;
i[2] = Hero.cash;
i[3] = Hero.hitpoints;

return i;
}
/*end monster fight*/

/*This bracket below is for the monster class*/
};



class Battle
{
public:


int* Battle::Engage(Character Hero){
int* h;
srand(time(NULL));
int randomnumber;
/*
int randommultiplier;
*/
randomnumber = rand() % 6;
randomnumber = randomnumber + (Hero.position * 5);


if(randomnumber == 0){randomnumber = 1;}
Monster M(randomnumber);
h = M.Fight(Hero);
string c;
cout << " press c then enter to continue" << endl;
cin >> c;
system("clear");
return h;
                               }
/*This bracket below is for the battle class*/
};




