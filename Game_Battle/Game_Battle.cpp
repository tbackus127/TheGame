// GO EASY ON ME. I WAS ONLY 14.

////////////////////////////////////////
// The Game's awesome battle system!!!
// v1.3.1.0092
////////////////////////////////////////


//////////////
// Includes //
//////////////
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <cstring>
#include <ios>
#include <limits>
#include "MersenneTwister.h"
using namespace std;







///////////////////////
// Defined Functions //
///////////////////////

void clearscreen()
{
  DWORD n;                         
  DWORD size;                      
  COORD coord = {0};               
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  GetConsoleScreenBufferInfo ( h, &csbi );
  size = csbi.dwSize.X * csbi.dwSize.Y;
  FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
  GetConsoleScreenBufferInfo ( h, &csbi );
  FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );
  SetConsoleCursorPosition ( h, coord );
}



// Color Screen funcion
// "SetConsoleTextAttribute( hOutput, <cmd color scheme, can't be 08, or contain letters>);"

BOOL ColorScreen2(WORD color)
{
COORD coordScreen = { 0, 0 };
DWORD cCharsWritten;
CONSOLE_SCREEN_BUFFER_INFO csbi;
DWORD dwConSize;
HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
if( !GetConsoleScreenBufferInfo( hOutput, &csbi ))
return 0;
dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
csbi.wAttributes = color;
if( !FillConsoleOutputAttribute( hOutput, csbi.wAttributes,
dwConSize, coordScreen, &cCharsWritten ))
return 0;
SetConsoleTextAttribute(hOutput, color);
return 1;
} 

// Text color handle
HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);


// Crithilight Define
void crithilight()
     {
     SetConsoleTextAttribute( hOutput, 04);
     }

// No highlight define
void normalhilight()
     {
     SetConsoleTextAttribute( hOutput, 07);
}
                    
// Green highlight define
void gratzhilight()
     {
     SetConsoleTextAttribute( hOutput, 03);
}


void titleset()
{
    SetConsoleTitle( "The Game" );
}



void cinclear ( std::istream& in )
{
  in.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );
}



/////////////////
// Player Vars //
/////////////////

MTRand mtrand1;

// Base Parameter Vars
int level;
string name;
int HP;
int MaxHP;
int MP;
int MaxMP;
int ATK;
int BaseATK;
int DEF;
int BaseDEF;
int SPD;
int BaseSPD;
int EXP;
int NextLevel;
int roll;
int damage;
char Class1[20];
char Class2[20];
char Class3[20];
int ClassRank;
int numofskills;
int skillid1;
int skillid2;
int skillid3;
int skillid4;
int skillid5;
int abilityid1;
int abilityid2;
int abilityid3;
int abilityid4;
int abilityid5;
int gold;


// Player Calculations
double defrating;
double defrating2;
double defrating3;
int fdamage;
int gEXP;
double fdamagef;
float skilldamageplus;
int intskilldamageplus;
float floatdamage;
float fdotdamage;
float fhpinc;
float fmpinc;
float fatkinc;
float fdefinc;
float fspdinc;
float fheal;
float fhpdec;
float fmpdec;
float fatkdec;
float fdefdec;
float fspddec;
bool autolife;
bool usingskill;
int dotticks;
bool usingdot;
int dotdamage;
bool dotafflicted;

int heal;
int hot;

bool hpinc;
bool mpinc;
bool atkinc;
bool definc;
bool spdinc;

int ihpinc;
int impinc;
int iatkinc;
int idefinc;
int ispdinc;

int hptick;
int mptick;
int atktick;
int deftick;
int spdtick;

bool hpdec;
bool mpdec;
bool atkdec;
bool defdec;
bool spddec;

int ihpdec;
int impdec;
int iatkdec;
int idefdec;
int ispddec;

int hpdtick;
int mpdtick;
int atkdtick;
int defdtick;
int spddtick;

int consthp;
int constmp;

bool doublestrike;
int doublestriketick;

char skill1name[30];
string skill1target;
int skill1damage;
int skill1dot;
int skill1dotturn;
int skill1hp;
int skill1mp;
int skill1atk;
int skill1def;
int skill1spd;
int skill1mpcost;

char skill2name[30];
string skill2target;
int skill2damage;
int skill2dot;
int skill2dotturn;
int skill2hp;
int skill2mp;
int skill2atk;
int skill2def;
int skill2spd;
int skill2mpcost;

char skill3name[30];
string skill3target;
int skill3damage;
int skill3dot;
int skill3dotturn;
int skill3hp;
int skill3mp;
int skill3atk;
int skill3def;
int skill3spd;
int skill3mpcost;

char skill4name[30];
string skill4target;
int skill4damage;
int skill4dot;
int skill4dotturn;
int skill4hp;
int skill4mp;
int skill4atk;
int skill4def;
int skill4spd;
int skill4mpcost;

char skill5name[30];
string skill5target;
int skill5damage;
int skill5dot;
int skill5dotturn;
int skill5hp;
int skill5mp;
int skill5atk;
int skill5def;
int skill5spd;
int skill5mpcost;

char ability1name[25];
float ability1hppercent;
float ability1hpconst;
int ability1hp;
float ability1mppercent;
float ability1mpconst;
int ability1mp;
int ability1type;
int extracrit1;
float ability1trig1f;
int ability1trig1;
bool ability1trig1bool;
string ability1trig1param;
int ability1trig1mult;
int ability1hpregen1;
int ability1mpregen1;
float ability1trig2f;
int ability1trig2;
bool ability1trig2bool;
string ability1trig2param;
int ability1trig2mult;
int ability1hpregen2;
int ability1mpregen2;
int hp0effect1;
int hp0damage1;
int hp0revive1;
int hp0skill1;
int expboost1;
int goldboost1;
int skillattack1;
int skillattackhp1;

char ability2name[25];
float ability2hppercent;
float ability2hpconst;
int ability2hp;
float ability2mppercent;
float ability2mpconst;
int ability2mp;
int ability2type;
int extracrit2;
float ability2trig1f;
int ability2trig1;
bool ability2trig1bool;
string ability2trig1param;
int ability2trig1mult;
int ability2hpregen1;
int ability2mpregen1;
float ability2trig2f;
int ability2trig2;
bool ability2trig2bool;
string ability2trig2param;
int ability2trig2mult;
int ability2hpregen2;
int ability2mpregen2;
int hp0effect2;
int hp0damage2;
int hp0revive2;
int hp0skill2;
int expboost2;
int goldboost2;
int skillattack2;
int skillattackhp2;

char ability3name[25];
float ability3hppercent;
float ability3hpconst;
int ability3hp;
float ability3mppercent;
float ability3mpconst;
int ability3mp;
int ability3type;
int extracrit3;
float ability3trig1f;
int ability3trig1;
bool ability3trig1bool;
string ability3trig1param;
int ability3trig1mult;
int ability3hpregen1;
int ability3mpregen1;
float ability3trig2f;
int ability3trig2;
bool ability3trig2bool;
string ability3trig2param;
int ability3trig2mult;
int ability3hpregen2;
int ability3mpregen2;
int hp0effect3;
int hp0damage3;
int hp0revive3;
int hp0skill3;
int expboost3;
int goldboost3;
int skillattack3;
int skillattackhp3;

bool hasabilities;


// Level Up
string lvcharacter;
int energypoints;
int parameterpoints;
int hpdist;
int mpdist;
int atkdist;
int defdist;
int spddist;

// Char Creation Vars
char cName[20];
int cLevel;
int cHP;
int cMP;
int cATK;
int cDEF;
int cSPD;
int cEXP;
int cnumofskills;
int cskillid1;
int cskillid2;
int cskillid3;
int cskillid4;
int cskillid5;
int cabilityid1;
int cabilityid2;
int cabilityid3;
int cabilityid4;
int cabilityid5;
int cGold;
char cRank1[20];
char cRank2[20];
char cRank3[20];
int cenergypoints;
int chpdist;
int cmpdist;
int catkdist;
int cdefdist;
int cspddist;
int cparameterpoints;
string cdistokay;
int cMaxHP;
int cMaxMP;
int cBaseATK;
int cBaseDEF;
int cBaseSPD;
int clevel;
int cNextLevel;
int cClassRank;
int cgold;
int cnumofabilities;
string cNames;
string cRank1s;
string cRank2s;
string cRank3s;


// Inn Character Vars
 string iname;
 int ilevel;
 int iHP;
 int iMaxHP;
 int iMP;
 int iMaxMP;
 int iATK;
 int iBaseATK;
 int iDEF;
 int iBaseDEF;
 int iSPD;
 int iBaseSPD;
 int iEXP;
 int iNextLevel;
 string iClass1;
 string iClass2;
 string iClass3;
 int iClassRank;
 int inumofskills;
 int iskillid1;
 int iskillid2;
 int iskillid3;
 int iskillid4;
 int iskillid5;
 int iabilityid1;
 int iabilityid2;
 int iabilityid3;
 int iabilityid4;
 int iabilityid5;
 int igold;
 int inncostvar;

/////////////////////
// Enemy Variables //
/////////////////////


// Enemy Base Parameters
int elevel;
char ename[30];
int eHP;
int eMaxHP;
int eMP;
int eMaxMP;
int eATK;
int eBaseATK;
int eDEF;
int eBaseDEF;
int eSPD;
int eBaseSPD;
int eEXP;
int eGold;
int eroll;
int edamage;
int enumofskills;
int eskillid1;
int eskillid2;
int eskillid3;
int eabilityid1;
int eabilityid2;


// Enemy Calculations
double edefrating;
double edefrating2;
double edefrating3;
int efdamage;
double efdamagef;
bool eusingskill;

string eskill1file;
string eskill2file;
string eskill3file;

char eskill1name[20];
string eskill1target;
int eskill1damage;
int eskill1dot;
int eskill1dotturn;
int eskill1hp;
int eskill1mp;
int eskill1atk;
int eskill1def;
int eskill1spd;
int eskill1mpcost;

char eskill2name[20];
string eskill2target;
int eskill2damage;
int eskill2dot;
int eskill2dotturn;
int eskill2hp;
int eskill2mp;
int eskill2atk;
int eskill2def;
int eskill2spd;
int eskill2mpcost;

char eskill3name[20];
string eskill3target;
int eskill3damage;
int eskill3dot;
int eskill3dotturn;
int eskill3hp;
int eskill3mp;
int eskill3atk;
int eskill3def;
int eskill3spd;
int eskill3mpcost;

bool edoublestrike;
int edoublestriketick;

bool monsterenrage;
int monstervigor;

bool epowerslash;
int powerslashroll;

int ehealroll;
int ehealvariance;
int ehealchance;
int ehealamount;

// Enemy Creation Vars
char cename[30];   
int celevel;  
int ceHP;
int ceMaxHP;
int ceMP;
int ceMaxMP;
int ceATK;
int ceBaseATK;
int ceDEF;
int ceBaseDEF;
int ceSPD;
int ceBaseSPD;
int ceEXP;
int cegold;
int cenumofskills;
int cenumofabilities;
int ceskillid1;
int ceskillid2;
int ceskillid3;
int ceabilityid1;
int ceabilityid2;
int cmonsterid;
string cenames;

///////////////////////
// Program Variables //
///////////////////////


// Decisions
string action;
string character;
int monsterid;
int selection;
string levelchoice;
string distokay;
string way;
string simpletype;
string simpleokay;
char skillselection[30];
char innselection[30];
string innselections;
int inncost;
string innyesno;


// File Constants
string txt = ".txt";
string charskill = "Core\\Game_Battle\\Skillid\\CharSkill_";
string enemyskill = "Core\\Game_Battle\\Skillid\\CharSkill_";
string enemytext = "Core\\Game_Battle\\Enemy\\Enemy";
string charfilestats = "Stats";
string chartext = "Core\\Game_Battle\\Char\\";
string lvcharfilestats = "Stats";
string lvchartext = "Core\\Game_Battle\\Char\\";
string charability = "Core\\Game_Battle\\AbilityID\\CharAbility_";
string itemtext = "Core\\Game_Battle\\Item\\Item_";



// File Operation
string enemyfile;
string charfile;
string lvcharfile;
string ability1file;
string skill1file;
string skill2file;
string skill3file;
string skill4file;
string skill5file;
string clvcharfile;
string cenemyfile;
string ability2file;
string ability3file;
string inncharfile;


// Roll
int firstroll;
int efirstroll;
int exproll;


// Stringstreams
stringstream skillstream1;
stringstream skillstream2;
stringstream skillstream3;
stringstream skillstream4;
stringstream skillstream5;
stringstream enemystream;
stringstream eskillstream1;
stringstream eskillstream2;
stringstream eskillstream3;
stringstream charstream;
stringstream lvcharstream;
stringstream abilitystream1;
stringstream abilitystream2;
stringstream abilitystream3;
stringstream clvcharstream;
stringstream ecreatestream;
stringstream cNamess;
stringstream cRank1ss;
stringstream cRank2ss;
stringstream cRank3ss;
stringstream cenamess;
stringstream innstream;



// Load
ifstream lvin;
ifstream in;
ifstream ein;
ifstream ability1in;
ifstream ability2in;
ifstream ability3in;
ifstream itemin;
ifstream innin;




// Save
ofstream levelupdate;
ofstream createupdate;
ofstream ecreateupdate;
ofstream itemupdate;
ofstream innupdate;


stringstream skillselectionss;
string skillselections;
stringstream skill1namess;
stringstream skill2namess;
stringstream skill3namess;
stringstream skill4namess;
stringstream skill5namess;
string skill1names;
string skill2names;
string skill3names;
string skill4names;
string skill5names;  
    




//////////
// Main //
//////////

int main(int argc, char *argv[])
  {
          
    // Main Menu
    titleset();
    gratzhilight();
    clearscreen();
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "           _________________________________________________________" << endl;
    cout << "             _______  _              _____                          " << endl;
    cout << "            |__   __|| |            / ____|                         " << endl;
    cout << "               | |   | |__    ___  | |  __   __ _  _ __ ___    ___  " << endl; 
    cout << "               | |   | '_ \\  / _ \\ | | |_ | / _` || '_ ` _ \\  / _ \\ " << endl;
    cout << "               | |   | | | ||  __/ | |__| || (_| || | | | | ||  __/ " << endl;
    cout << "               |_|   |_| |_| \\___|  \\_____| \\__,_||_| |_| |_| \\___| " << endl;
    cout << endl;      
    cout << "                      Version 1.3.3 BETA : Revision 94              " << endl;
    cout << "                                Powered by C++                      " << endl;
    cout << "           _________________________________________________________" << endl << endl << endl;    
    getch();
    begin:
    clearscreen();
    gratzhilight();
    cout << "____________________________________________" << endl << endl;
    cout << "             -Select an option-" << endl << endl;
    cout << "                  1: Battle " << endl;
    cout << "                 2: Level Up" << endl;
    cout << "             3: Create Character" << endl;
    cout << "               4: Create Enemy" << endl;
    cout << "                5: Item Shop" << endl;
    cout << "                    6: Inn" << endl;
    cout << "                   7: Help" << endl;
    cout << "                   8: Quit" << endl;
    cout << "____________________________________________" << endl << endl;
    normalhilight();
    cout << "Type a number:" << endl;    
    cin >> selection;
    switch(selection){
        case 1:
             goto charchoose;
        break;
        case 2:
             goto levelup;
        break;
        case 3:
             goto charcreate;
        break;
        case 4:
             goto enemycreate;
        break;
        case 5:
             goto itemshop;
        break;
        case 6:
             goto inn;
        break;
        case 7:
             goto gamehelp;
        break;
        case 8:
             goto end;
        break;
        default:
             cout << "Command not recognized" << endl;
             getch();
             goto begin;}
             
             
             
             
             
    //////////////
    // Level Up //
    //////////////         
             
             
    levelup:
    name[30] = '\0'; 
    level = 0;
    HP = 0;
    MaxHP = 0;
    MP = 0;
    MaxMP = 0;
    ATK = 0;
    BaseATK = 0;
    DEF = 0;
    BaseDEF = 0;
    SPD = 0;
    BaseSPD = 0;
    EXP = 0;
    NextLevel = 0;
    Class1[20] = '\0'; 
    Class2[20] = '\0'; 
    Class3[20] = '\0'; 
    ClassRank = 0;
    numofskills = 0;
    skillid1 = 0;
    skillid2 = 0;
    skillid3 = 0;
    skillid4 = 0;
    skillid5 = 0;
    abilityid1 = 0;
    abilityid2 = 0;
    abilityid3 = 0;
    abilityid4 = 0;
    abilityid5 = 0;
    gold = 0;
    levelchoice = "";
    lvcharacter[30] = '\0'; 
    normalhilight();
    clearscreen();
    lvcharstream.clear();
    lvcharstream.str("");
    lvcharfile = "";
    cout << "Choose a character, or type Quit to return to the main menu." << endl;
    cin >> lvcharacter;
    if(lvcharacter == "Quit" || lvcharacter == "quit"){
        goto begin;}
    lvcharstream << lvcharacter;
    lvcharfile = lvchartext + lvcharstream.str() + lvcharfilestats + txt;
    if(!ifstream(lvcharfile.c_str())){
        cout << "Character not in database" << endl;
        getch();
        goto levelup;}
    lvin.open(lvcharfile.c_str());
    lvin >> name;
    lvin >> level;
    lvin >> HP;
    lvin >> MaxHP;
    lvin >> MP;
    lvin >> MaxMP;
    lvin >> ATK;
    lvin >> BaseATK;
    lvin >> DEF;
    lvin >> BaseDEF;
    lvin >> SPD;
    lvin >> BaseSPD;
    lvin >> EXP;
    lvin >> NextLevel;
    lvin >> Class1;
    lvin >> Class2;
    lvin >> Class3;
    lvin >> ClassRank;
    lvin >> numofskills;
    lvin >> skillid1;
    lvin >> skillid2;
    lvin >> skillid3;
    lvin >> skillid4;
    lvin >> skillid5;
    lvin >> abilityid1;
    lvin >> abilityid2;
    lvin >> abilityid3;
    lvin >> abilityid4;
    lvin >> abilityid5;
    lvin >> gold;
    lvin.close();
    clearscreen();   
    cout << "Character data successfully loaded!" << endl;
    getch();
    clearscreen();
    if(level >= 100){
        cout << "You are already at the Max level." << endl;
        getch();
        goto levelup;}
    else{
        cout << name << " currently needs " << NextLevel << " EXP to reach level " << level+1 << endl;
        cout << name << " has " << EXP << " EXP." << endl;
        if(EXP >= NextLevel){
            levelokay:
            cout << "Do you wish to level to level " << level+1 << "?" << endl;
            cin >> levelchoice;
            if(levelchoice == "y" || levelchoice == "Y" || levelchoice == "yes" || levelchoice == "Yes"){
                EXP = EXP - NextLevel;
                level = level + 1;
                NextLevel = 25 * level;
                energypoints = energypoints + 100;
                parameterpoints = parameterpoints + 10;
                gratzhilight();
                cout << "Congratulations! " << name << " has reached level " << level << "!" << endl;
                normalhilight();
                getch();
                goto parameterbuild;}
            else if(levelchoice == "n" || levelchoice == "N" || levelchoice == "no" || levelchoice == "No"){
                cout << name << " did not level up" << endl;
                getch();
                goto levelup;}
            else{
                cout << "Command not recognized" << endl;
                clearscreen();
                goto levelokay;}
                }                      
        else{
            cout << name << " does not have enough EXP to reach level " << level+1 << endl;
            cout << name << " needs " << NextLevel - EXP << " more EXP to level up." << endl;
            getch();
            goto levelup;}
            }
        
    
    
    // Parameter Build
    parameterbuild:
    clearscreen();
    cout << name << " now has " << energypoints << " energy points to distrubute into HP and MP." << endl;
    cout << "And " << parameterpoints << " parameter points to distrubute into ATK, DEF, and SPD." << endl;
    crithilight();
    cout << "WARNING! This is irreversible! Think before you distribute!" << endl;
    normalhilight();
    
    // Begin Distribution
    begindist:
              
    // HP Dist
    cout << "How many points do you want to distrubute into HP?" << endl;
    cout << "You have: " << energypoints << endl;
    cin >> hpdist;
    if(hpdist > energypoints){
        cout << "You do not have enough points to distribute. You have " << energypoints << "." << endl;
        getch();
        hpdist = 0;
        mpdist = 0;
        atkdist = 0;
        defdist = 0;
        spddist = 0;
        energypoints = 100;
        parameterpoints = 10;
        goto begindist;}
    else{}
    energypoints = energypoints - hpdist;
    
    // MP Dist
    cout << "How many points do you want to distrubute into MP?" << endl;
    cout << "You have: " << energypoints << endl;
    cin >> mpdist;
    if(mpdist > energypoints){
        cout << "You do not have enough points to distribute. You have " << energypoints << "." << endl;
        getch();
        hpdist = 0;
        mpdist = 0;
        atkdist = 0;
        defdist = 0;
        spddist = 0;
        energypoints = 100;
        parameterpoints = 10;
        goto begindist;}
    else{}
    energypoints = energypoints - mpdist;
    
    // ATK Dist
    cout << "How many points do you want to distrubute into ATK?" << endl;
    cout << "You have: " << parameterpoints << endl;
    cin >> atkdist;
    if(atkdist > parameterpoints){
        cout << "You do not have enough points to distribute. You have " << parameterpoints << "." << endl;
        getch();
        hpdist = 0;
        mpdist = 0;
        atkdist = 0;
        defdist = 0;
        spddist = 0;
        energypoints = 100;
        parameterpoints = 10;
        goto begindist;}
    else{}
    parameterpoints = parameterpoints - atkdist;
    
    // DEF Dist
    cout << "How many points do you want to distrubute into DEF?" << endl;
    cout << "You have: " << parameterpoints << endl;
    cin >> defdist;
    if(defdist > parameterpoints){
        cout << "You do not have enough points to distribute. You have " << parameterpoints << "." << endl;
        getch();
        hpdist = 0;
        mpdist = 0;
        atkdist = 0;
        defdist = 0;
        spddist = 0;
        energypoints = 100;
        parameterpoints = 10;
        goto begindist;}
    else{}
    parameterpoints = parameterpoints - defdist;
    
    // SPD Dist
    cout << "How many points do you want to distrubute into SPD?" << endl;
    cout << "You have: " << parameterpoints << endl;
    cin >> spddist;
    if(spddist > parameterpoints){
        cout << "You do not have enough points to distribute. You have " << parameterpoints << "." << endl;
        getch();
        hpdist = 0;
        mpdist = 0;
        atkdist = 0;
        defdist = 0;
        spddist = 0;
        energypoints = 100;
        parameterpoints = 10;
        goto begindist;}
//    else{}
    parameterpoints = parameterpoints - spddist;
    
    // Point Check
    if(parameterpoints != 0 && energypoints != 0){
        cout << "Please distribute all points." << endl;
        getch();
        hpdist = 0;
        mpdist = 0;
        atkdist = 0;
        defdist = 0;
        spddist = 0;
        energypoints = 100;
        parameterpoints = 10;
        goto begindist;}
    else{
        ldistokay:
        cout << "You are about to distribute:" << endl;
        cout << "HP: " << hpdist << endl;
        cout << "MP: " << mpdist << endl;
        cout << "ATK: " << atkdist << endl;
        cout << "DEF: " << defdist << endl;
        cout << "SPD: " << spddist << endl;
        cout << "Is this okay?" << endl;
        cin >> distokay;
        if(distokay == "y" || distokay == "Y" || distokay == "yes" || distokay == "Yes"){
            goto distribute;}
        else if(distokay == "n" || distokay == "N" || distokay == "no" || distokay == "No"){
            hpdist = 0;
            mpdist = 0;
            atkdist = 0;
            defdist = 0;
            spddist = 0;
            energypoints = 100;
            parameterpoints = 10;
            distokay.clear();
            goto begindist;}
        else{
            cout << "Command not recognized" << endl;
            clearscreen();
            goto ldistokay;}
            }
            
    // Distribute Points
    distribute:               
    MaxHP = MaxHP + hpdist;
    MaxMP = MaxMP + mpdist;
    BaseATK = BaseATK + atkdist;
    BaseDEF = BaseDEF + defdist;
    BaseSPD = BaseSPD + spddist;
    HP = MaxHP;
    MP = MaxMP;
    ATK = BaseATK;
    DEF = BaseDEF;
    SPD = BaseSPD;
    
    if(!ifstream(lvcharfile.c_str())){
        cout << "Update Error" << endl;
        getch();
        goto end;}
    levelupdate.open(lvcharfile.c_str());
        
    // Level Update
    levelupdate << name << endl;
    levelupdate << level << endl;
    levelupdate << HP << endl;
    levelupdate << MaxHP << endl;
    levelupdate << MP << endl;
    levelupdate << MaxMP << endl;
    levelupdate << ATK << endl;
    levelupdate << BaseATK << endl;
    levelupdate << DEF << endl;
    levelupdate << BaseDEF << endl;
    levelupdate << SPD << endl;
    levelupdate << BaseSPD << endl;
    levelupdate << EXP << endl;
    levelupdate << NextLevel << endl;
    levelupdate << Class1 << endl;
    levelupdate << Class2 << endl;
    levelupdate << Class3 << endl;
    levelupdate << ClassRank << endl;
    levelupdate << numofskills << endl;
    levelupdate << skillid1 << endl;
    levelupdate << skillid2 << endl;
    levelupdate << skillid3 << endl;
    levelupdate << skillid4 << endl;
    levelupdate << skillid5 << endl;
    levelupdate << abilityid1 << endl; 
    levelupdate << abilityid2 << endl;
    levelupdate << abilityid3 << endl;
    levelupdate << abilityid4 << endl;
    levelupdate << abilityid5 << endl;
    levelupdate << gold << endl;
    levelupdate.close();
    goto begin;

    
    ////////////////////////
    // Character Creation //
    ////////////////////////
    
    
    

    charcreate:
    clearscreen();
    cout << "Let's make a character!" << endl;
    cout << "What will his/her name be?" << endl;
    cinclear(std::cin);
    cin.getline(cName, 30, '\n');
    cNamess << cName;
    cNamess >> cNames;
    cout << "cNames: " << cNames << endl;
    getch();
    clearscreen();
    cout << "What will his/her first rank be?" << endl;
    cin.getline(cRank1, 30, '\n');
    cRank1ss << cRank1;
    cRank1ss >> cRank1s;
    cout << "What will his/her second rank be?" << endl;
    cin.getline(cRank2, 30, '\n');
    cRank2ss << cRank2;
    cRank2ss >> cRank2s;
    cout << "What will his/her third rank be?" << endl;
    cin.getline(cRank3, 30, '\n');
    cRank3ss << cRank3;
    cRank3ss >> cRank3s;
    clearscreen();
    cout << "Now let's configure the power parameters." << endl;
    
    // Parameter Type
    chooseway:
    cout << "Would you like to use the simple way, or the advanced way?" << endl;
    cin >> way;
    if(way == "simple" || way == "Simple"){
           goto simple;}
    else if(way == "advanced" || way == "Advanced"){
           goto advanced;}
    else{
         cout << "Command not recognized" << endl;
         goto chooseway;}
         

    // Simple Type
    simple:
    clearscreen();
    cout << "What type of character do you want?" << endl;
    cout << "Power, Defense, Speed, Caster, Healer" << endl;
    cin >> simpletype;
    if(simpletype == "power" || simpletype == "Power"){
           goto power;}
    else if(simpletype == "defense" || simpletype == "Defense"){
           goto defense;}
    else if(simpletype == "speed" || simpletype == "Speed"){
           goto speed;}
    else if(simpletype == "caster" || simpletype == "Caster"){
           goto caster;}
    else if(simpletype == "healer" || simpletype == "Healer"){
           goto healer;}
    else{
         cout << "Class not recognized" << endl;
         getch();
         goto simple;}
    
    // Power Type
    power:
    clearscreen();
    cout << "Your character data will be:" << endl;
    cout << "Name: " << cNames << endl;
    cout << "Level: 1" << endl;
    cout << "HP: 180" << endl;
    cout << "MP: 20" << endl;
    cout << "ATK: 10" << endl;
    cout << "DEF: 6" << endl;
    cout << "SPD: 4" << endl;
    cout << "Rank 1: " << cRank1s << endl;
    cout << "Rank 2: " << cRank2s << endl;
    cout << "Rank 3: " << cRank3s << endl;
    cout << "Skill 1: Power_Slash" << endl;
    cout << "Skill 2: Gash" << endl;
    cout << "Ability 1: Fortitude" << endl; // Gain 5% HP / turn
    cout << "Ability 2: Inner_Wrath" << endl; // When HP < 20%, ATK x2
    cout << endl;
    cMaxHP = 180;
    cMaxMP = 20;
    cBaseATK = 10;
    cBaseDEF = 6;
    cBaseSPD = 4;
    cskillid1 = 1;
    cskillid2 = 3;
    cabilityid1 = 1;
    cabilityid2 = 2;
    goto simpleyesno;   
    
    // Defense Type
    defense:
    clearscreen();
    cout << "Your character data will be:" << endl;
    cout << "Name: " << cNames << endl;
    cout << "Level: 1" << endl;
    cout << "HP: 180" << endl;
    cout << "MP: 20" << endl;
    cout << "ATK: 3" << endl;
    cout << "DEF: 12" << endl;
    cout << "SPD: 5" << endl;
    cout << "Rank 1: " << cRank1s << endl;
    cout << "Rank 2: " << cRank2s << endl;
    cout << "Rank 3: " << cRank3s << endl;
    cout << "Skill 1: Protect" << endl; // Def x3 for ally/self
    cout << "Skill 2: Vitality" << endl; // HP Buff
    cout << "Ability 1: Fortitude" << endl; // Gain 5% HP / turn
    cout << "Ability 2: Inner_Armor" << endl; // When HP < 20%, DEF x3
    cout << endl;
    cMaxHP = 180;
    cMaxMP = 20;
    cBaseATK = 3;
    cBaseDEF = 12;
    cBaseSPD = 5;
    cskillid1 = 10;
    cskillid2 = 11;
    cabilityid1 = 1;
    cabilityid2 = 4;
    goto simpleyesno;
    
    // Speedy Type
    speed:
    clearscreen();
    cout << "Your character data will be:" << endl;
    cout << "Name: " << cNames << endl;
    cout << "Level: 1" << endl;
    cout << "HP: 150" << endl;
    cout << "MP: 50" << endl;
    cout << "ATK: 7" << endl;
    cout << "DEF: 2" << endl;
    cout << "SPD: 11" << endl;
    cout << "Rank 1: " << cRank1s << endl;
    cout << "Rank 2: " << cRank2s << endl;
    cout << "Rank 3: " << cRank3s << endl;
    cout << "Skill 1: Gash" << endl; // SPD x2 for ally/self
    cout << "Skill 2: Haste" << endl; // Enemy DEF /2
    cout << "Ability 1: Second_Chance" << endl; // If an enemy attack would kill you, retain 1 HP.
    cout << "Ability 2: Inner_Haste" << endl; // When HP < 20%, SPD x3
    cout << endl;
    cMaxHP = 150;
    cMaxMP = 50;
    cBaseATK = 7;
    cBaseDEF = 2;
    cBaseSPD = 11;
    cskillid1 = 3;
    cskillid2 = 9;
    cabilityid1 = 3;
    cabilityid2 = 5;
    goto simpleyesno;
    
    // Caster
    caster:
    clearscreen();
    cout << "Your character data will be:" << endl;
    cout << "Name: " << cNames << endl;
    cout << "Level: 1" << endl;
    cout << "HP: 100" << endl;
    cout << "MP: 100" << endl;
    cout << "ATK: 8" << endl;
    cout << "DEF: 3" << endl;
    cout << "SPD: 9" << endl;
    cout << "Rank 1: " << cRank1s << endl;
    cout << "Rank 2: " << cRank2s << endl;
    cout << "Rank 3: " << cRank3s << endl;
    cout << "Skill 1: Fireball" << endl; // 2LV damage + DoT
    cout << "Skill 2: Frostbolt" << endl; // 1.5LV damage, enemy SPD /2
    cout << "Ability 1: Fortitude" << endl; // Gain 5% HP / turn
    cout << "Ability 2: Meditate" << endl; // Gain 5% MP / turn
    cout << endl;
    cMaxHP = 100;
    cMaxMP = 100;
    cBaseATK = 8;
    cBaseDEF = 3;
    cBaseSPD = 9;
    cskillid1 = 6;
    cskillid2 = 7;
    cabilityid1 = 1;
    cabilityid2 = 6;
    goto simpleyesno;

    // Healer
    healer:
    clearscreen();
    cout << "Your character data will be:" << endl;
    cout << "Name: " << cNames << endl;
    cout << "Level: 1" << endl;
    cout << "HP: 80" << endl;
    cout << "MP: 120" << endl;
    cout << "ATK: 2" << endl;
    cout << "DEF: 3" << endl;
    cout << "SPD: 15" << endl;
    cout << "Rank 1: " << cRank1s << endl;
    cout << "Rank 2: " << cRank2s << endl;
    cout << "Rank 3: " << cRank3s << endl;
    cout << "Skill 1: Heal" << endl; // Heal 75LV
    cout << "Skill 2: Regenerate" << endl; // HoT 10LV
    cout << "Ability 1: Second_Chance" << endl; // Retain 1 HP if you would die.
    cout << "Ability 2: Meditate" << endl; // Gain 5% MP / turn
    cout << endl;
    cMaxHP = 80;
    cMaxMP = 120;
    cBaseATK = 2;
    cBaseDEF = 3;
    cBaseSPD = 15;
    cskillid1 = 4;
    cskillid2 = 8;
    cabilityid1 = 3;
    cabilityid2 = 6;
    goto simpleyesno;       
           
    // Simple Yes / No
    simpleyesno:
    cout << "Is this okay? (Y/N)" << endl;
    cin >> simpleokay;
    if(simpleokay == "y" || simpleokay == "Y" || simpleokay == "yes" || simpleokay == "Yes"){
        goto cdistributesimple;}
    else if(simpleokay == "n" || simpleokay == "N" || simpleokay == "no" || simpleokay == "No"){
        cout << "Then let's use the advanced method!" << endl;
        getch();
        goto advanced;}
    else{
        cout << "Command not recognized" << endl;
        goto simpleyesno;}
    
    
    
    // Advanced Type
    advanced:
    cbegindist:
    clearscreen();
    cenergypoints = 200;
    cparameterpoints = 20;
    cout << "How many points do you want to distrubute into HP?" << endl;
    cout << "You have: " << cenergypoints << endl;
    cin >> chpdist;
    if(chpdist > cenergypoints){
        cout << "You do not have enough points to distribute. You have " << cenergypoints << "." << endl;
        getch();
        chpdist = 0;
        cmpdist = 0;
        catkdist = 0;
        cdefdist = 0;
        cspddist = 0;
        cenergypoints = 100;
        cparameterpoints = 10;
        goto cbegindist;}
    else{}
    cenergypoints = cenergypoints - chpdist;
    
    // Creation MP Dist
    cout << "How many points do you want to distrubute into MP?" << endl;
    cout << "You have: " << cenergypoints << endl;
    cin >> cmpdist;
    if(cmpdist > cenergypoints){
        cout << "You do not have enough points to distribute. You have " << cenergypoints << "." << endl;
        getch();
        chpdist = 0;
        cmpdist = 0;
        catkdist = 0;
        cdefdist = 0;
        cspddist = 0;
        cenergypoints = 100;
        cparameterpoints = 10;
        goto cbegindist;}
    else{}
    cenergypoints = cenergypoints - cmpdist;
    
    // Creation ATK Dist
    cout << "How many points do you want to distrubute into ATK?" << endl;
    cout << "You have: " << cparameterpoints << endl;
    cin >> catkdist;
    if(catkdist > cparameterpoints){
        cout << "You do not have enough points to distribute. You have " << cparameterpoints << "." << endl;
        getch();
        chpdist = 0;
        cmpdist = 0;
        catkdist = 0;
        cdefdist = 0;
        cspddist = 0;
        cenergypoints = 100;
        cparameterpoints = 10;
        goto cbegindist;}
    else{}
    cparameterpoints = cparameterpoints - catkdist;
    
    // Creation DEF Dist
    cout << "How many points do you want to distrubute into DEF?" << endl;
    cout << "You have: " << cparameterpoints << endl;
    cin >> cdefdist;
    if(cdefdist > cparameterpoints){
        cout << "You do not have enough points to distribute. You have " << cparameterpoints << "." << endl;
        getch();
        chpdist = 0;
        cmpdist = 0;
        catkdist = 0;
        cdefdist = 0;
        cspddist = 0;
        cenergypoints = 100;
        cparameterpoints = 10;
        goto cbegindist;}
    else{}
    cparameterpoints = cparameterpoints - cdefdist;
    
    // Creation SPD Dist
    cout << "How many points do you want to distrubute into SPD?" << endl;
    cout << "You have: " << cparameterpoints << endl;
    cin >> cspddist;
    if(cspddist > cparameterpoints){
        cout << "You do not have enough points to distribute. You have " << cparameterpoints << "." << endl;
        getch();
        chpdist = 0;
        cmpdist = 0;
        catkdist = 0;
        cdefdist = 0;
        cspddist = 0;
        cenergypoints = 100;
        cparameterpoints = 10;
        goto cbegindist;}
    cparameterpoints = cparameterpoints - cspddist;
    
    // Creation Point Check
    if(cparameterpoints != 0 && cenergypoints != 0){
        cout << "Please distribute all points." << endl;
        getch();
        chpdist = 0;
        cmpdist = 0;
        catkdist = 0;
        cdefdist = 0;
        cspddist = 0;
        cenergypoints = 100;
        cparameterpoints = 10;
        goto cbegindist;}
    else{}
    
    // Creation Skill & ability set
    cskillnum:
    cout << "How many skills will " << cNames << " have?" << endl;
    cin >> cnumofskills;
    if (cnumofskills > 3){
        cout << "Enter a value of 0-3" << endl;
        getch();
        cnumofskills = 0;
        goto cskillnum;}
    switch(cnumofskills){
        case 1:
            cout << "Enter SkillID 1" << endl;
            cin >> cskillid1;
            cskillid2 = -1;
            cskillid3 = -1;
            goto cabilitynum;
        break;
        case 2:
            cout << "Enter SkillID 1" << endl;
            cin >> cskillid1;
            cout << "Enter SkillID 2" << endl;
            cin >> cskillid2;
            cskillid3 = -1;
            goto cabilitynum;
        break;
        case 3:
            cout << "Enter SkillID 1" << endl;
            cin >> cskillid1;
            cout << "Enter SkillID 2" << endl;
            cin >> cskillid2;
            cout << "Enter SkillID 3" << endl;
            cin >> cskillid3;
        break;
        default:
            cskillid1 = -1;
            cskillid2 = -1;
            cskillid3 = -1;
            goto cabilitynum;}
            
            
            
    cabilitynum:
    cout << "How many abilities will " << cNames << " have?" << endl;
    cin >> cnumofabilities;
    if(cnumofabilities > 2){
        cout << "Please enter a value between 0-2" << endl;
        cin >> cnumofabilities;}
    switch(cnumofabilities){
        case 1:
            cout << "Enter AbilityID 1" << endl;
            cin >> cabilityid1;
            cabilityid2 = -1;
            goto cldistokay;
        break;
        case 2:
            cout << "Enter AbilityID 1" << endl;
            cin >> cabilityid1;
            cout << "Enter AbilityID 2" << endl;
            cin >> cabilityid2;
        break;
        default:
            cabilityid1 = -1;
            cabilityid2 = -1;
            goto cldistokay;}
        
    
    
    
    
        cldistokay:
        cout << "You are about to distribute:" << endl;
        cout << "Name: " << cNames << endl;
        cout << "Level: 1" << endl;
        cout << "HP: " << chpdist << endl;
        cout << "MP: " << cmpdist << endl;
        cout << "ATK: " << catkdist << endl;
        cout << "DEF: " << cdefdist << endl;
        cout << "SPD: " << cspddist << endl;
        cout << "Rank 1: " << cRank1s << endl;
        cout << "Rank 2: " << cRank2s << endl;
        cout << "Rank 3: " << cRank3s << endl;
        if(cnumofskills >= 1){
            cout << "Skill ID 1: " << cskillid1 << endl;}
        if(cnumofskills >= 2){
            cout << "Skill ID 2: " << cskillid2 << endl;}
        if(cnumofskills >= 3){
            cout << "Skill ID 3: " << cskillid3 << endl;}
        if(cnumofskills >= 4){
            cout << "Skill ID 4: " << cskillid4 << endl;}
        if(cnumofskills >= 5){
            cout << "Skill ID 5: " << cskillid5 << endl;}
        if(cnumofabilities >= 1){
            cout << "Ability ID 1: " << cabilityid1 << endl;}
        if(cnumofabilities >= 2){
            cout << "Ability ID 2: " << cabilityid2 << endl;}
        if(cnumofabilities >= 3){
            cout << "Ability ID 3: " << cabilityid3 << endl;}
        cout << "Is this okay?" << endl;
        cin >> cdistokay;
        if(cdistokay == "y" || cdistokay == "Y" || cdistokay == "yes" || cdistokay == "Yes"){
            goto cdistribute;}
        else if(distokay == "n" || cdistokay == "N" || cdistokay == "no" || cdistokay == "No"){
            chpdist = 0;
            cmpdist = 0;
            catkdist = 0;
            cdefdist = 0;
            cspddist = 0;
            cenergypoints = 100;
            cparameterpoints = 10;
            cskillid1 = -1;
            cskillid2 = -1;
            cskillid3 = -1;
            cabilityid1 = -1;
            cabilityid2 = -1;
            cdistokay.clear();
            goto cbegindist;}
        else{
            cout << "Command not recognized" << endl;
            clearscreen();
            goto cldistokay;}
            
            
    // Creation Distribute Points
    cdistribute:               
    cMaxHP = chpdist;
    cMaxMP = cmpdist;
    cBaseATK = catkdist;
    cBaseDEF = cdefdist;
    cBaseSPD = cspddist;
    
    cdistributesimple:
    cHP = cMaxHP;
    cMP = cMaxMP;
    cATK = cBaseATK;
    cDEF = cBaseDEF;
    cSPD = cBaseSPD;
    cLevel = 1;
    cEXP = 0;
    cNextLevel = 25;
    cClassRank = 1;
    cskillid4 = -1;
    cskillid5 = -1;
    cabilityid4 = -1;
    cabilityid5 = -1;
    cgold = 0;
    goto create;


    
    // Create
    create:
    clvcharstream << cNames;
    clvcharfile = lvchartext + cNames + lvcharfilestats + txt;
    createupdate.open(clvcharfile.c_str());
        
    // Level Update
    createupdate << cNames << endl;
    createupdate << cLevel << endl;
    createupdate << cHP << endl;
    createupdate << cMaxHP << endl;
    createupdate << cMP << endl;
    createupdate << cMaxMP << endl;
    createupdate << cATK << endl;
    createupdate << cBaseATK << endl;
    createupdate << cDEF << endl;
    createupdate << cBaseDEF << endl;
    createupdate << cSPD << endl;
    createupdate << cBaseSPD << endl;
    createupdate << cEXP << endl;
    createupdate << cNextLevel << endl;
    createupdate << cRank1s << endl;
    createupdate << cRank2s << endl;
    createupdate << cRank3s << endl;
    createupdate << cClassRank << endl;
    createupdate << cnumofskills << endl;
    createupdate << cskillid1 << endl;
    createupdate << cskillid2 << endl;
    createupdate << cskillid3 << endl;
    createupdate << cskillid4 << endl;
    createupdate << cskillid5 << endl;
    createupdate << cabilityid1 << endl; 
    createupdate << cabilityid2 << endl;
    createupdate << cabilityid3 << endl;
    createupdate << cabilityid4 << endl;
    createupdate << cabilityid5 << endl;
    createupdate << cgold << endl;
    createupdate.close();
    cout << "Creation successful!" << endl;
    goto begin;
               
              
               
               
    ////////////////////
    // Enemy creation //
    ////////////////////
    
    
    enemycreate:
    clearscreen();
    cout << "Let's create an enemy!" << endl;
    cout << "What will its name be? (NO SPACES! Use underscores! ( _ ) )" << endl;
    cinclear(std::cin);
    cin.getline(cename, 30, '\n');
    cenamess << cename;
    cenamess >> cenames;
    clearscreen();
    cout << "What will its level be?" << endl;
    cin >> celevel;
    clearscreen();
    cout << "HP?" << endl;
    cin >> ceHP;
    clearscreen();
    cout << "MP?" << endl;
    cin >> ceMP;
    clearscreen();
    cout << "ATK?" << endl;
    cin >> ceATK;
    clearscreen();
    cout << "DEF?" << endl;
    cin >> ceDEF;
    clearscreen();
    cout << "SPD?" << endl;
    cin >> ceSPD;
    clearscreen();
    cout << "How much EXP should it give?" << endl;
    cin >> ceEXP;
    clearscreen();
    cout << "How much gold should it drop?" << endl;
    cin >> cegold;
    
    ceskills:
    clearscreen();
    cout << "How many skills will it have? (0-3)" << endl;
    cin >> cenumofskills;
    switch(cenumofskills){
        case 1:
            clearscreen();
            cout << "What skill ID for skill slot 1?" << endl;
            cin >> ceskillid1;
            ceskillid2 = -1;
            ceskillid3 = -1;
            goto ceability;
        break;
        case 2:
            clearscreen();
            cout << "What skill ID for skill slot 1?" << endl;
            cin >> ceskillid1;
            cout << "What skill ID for skill slot 2?" << endl;
            cin >> ceskillid2;
            ceskillid3 = -1;
            goto ceability;
        break;
        case 3:
            clearscreen();
            cout << "What skill ID for skill slot 1?" << endl;
            cin >> ceskillid1;
            cout << "What skill ID for skill slot 2?" << endl;
            cin >> ceskillid2;
            cout << "What skill ID for skill slot 3?" << endl;
            cin >> ceskillid3;
            goto ceability;
        default:
            ceskillid1 = -1;
            ceskillid2 = -1;
            ceskillid3 = -1;
            goto ceability;}
    if(cenumofskills > 3 || cenumofskills < 0){
        cout << "Please input a value of 0, 1, 2, or 3" << endl;
        getch();
        ceskillid1 = 0;
        ceskillid2 = 0;
        ceskillid3 = 0;
        cenumofskills = 0;
        goto ceskills;}
        
    ceability:
    clearscreen();
    cout << "How many abilities will it have? (0-2)" << endl;
    cin >> cenumofabilities;
    if(cenumofabilities > 2 || cenumofabilities < 0){
        cout << "Please input a value of 0, 1, or 2." << endl;
        getch();
        ceabilityid1 = 0;
        ceabilityid2 = 0;
        cenumofabilities = 0;
        goto ceability;}
    switch(cenumofabilities){
        case 1:
            clearscreen();
            cout << "What ability ID for ability slot 1?" << endl;
            cin >> ceabilityid1;
            ceabilityid2 = -1;
            goto lcmonsterid;
        break;
        case 2:
            clearscreen();
            cout << "What ability ID for ability slot 1?" << endl;
            cin >> ceabilityid1;
            cout << "What ability ID for ability slot 2?" << endl;
            cin >> ceabilityid2;
            goto lcmonsterid;
        break;
        default:
            ceabilityid1 = -1;
            ceabilityid2 = -1;
            goto lcmonsterid;}

    
    lcmonsterid:
    ecreatestream.clear();
    ecreatestream.str("");
    clearscreen();
    cout << "And finally, what should its Monster ID be?" << endl;
    cin >> cmonsterid;
    ecreatestream << cmonsterid;
    cenemyfile = enemytext + ecreatestream.str() + txt;
    if(ifstream(cenemyfile.c_str())){
        cout << "Enemy ID already exists!" << endl;
        getch();
        cmonsterid = 0;
        goto lcmonsterid;}
    
    
    
    ceMaxHP = ceHP;
    ceMaxMP = ceMP;
    ceBaseATK = ceATK;
    ceBaseDEF = ceDEF;
    ceBaseSPD = ceSPD;
    
    
    
    // Enemy Create
    ecreate:
    ecreateupdate.open(cenemyfile.c_str());
        
    // Level Update
    ecreateupdate << cenames << endl;
    ecreateupdate << celevel << endl;
    ecreateupdate << ceHP << endl;
    ecreateupdate << ceMaxHP << endl;
    ecreateupdate << ceMP << endl;
    ecreateupdate << ceMaxMP << endl;
    ecreateupdate << ceATK << endl;
    ecreateupdate << ceBaseATK << endl;
    ecreateupdate << ceDEF << endl;
    ecreateupdate << ceBaseDEF << endl;
    ecreateupdate << ceSPD << endl;
    ecreateupdate << ceBaseSPD << endl;
    ecreateupdate << ceEXP << endl;
    ecreateupdate << cegold << endl;
    ecreateupdate << cenumofskills << endl;
    ecreateupdate << ceskillid1 << endl;
    ecreateupdate << ceskillid2 << endl;
    ecreateupdate << ceskillid3 << endl;
    ecreateupdate << ceabilityid1 << endl; 
    ecreateupdate << ceabilityid2 << endl;
    ecreateupdate.close();
    cout << endl << "Creation successful!" << endl;
    goto begin;
    
    
    ///////////////
    // Item Shop //
    ///////////////
    

    
    itemshop:
    clearscreen();    
    cout << "Item shop not yet implemented." << endl;
    getch();
    goto begin;
    
    
    /////////
    // Inn //
    /////////
    
    inn:
    innstream.clear();
    innstream.str("");
    inncharfile = "";
    clearscreen();
    cout << "You can restore your HP and MP at an inn." << endl;
    cout << "Who would you like to rest?" << endl;
    cout << "(or type quit to quit)" << endl;
    cin >> innselection;
    innstream << innselection;
    if(innstream.str() == "quit" || innstream.str() == "Quit"){
        goto begin;}
    inncharfile = lvchartext + innstream.str() + lvcharfilestats + txt;
    if(!ifstream(inncharfile.c_str())){
        cout << "Character not in database" << endl;
        getch();
        goto inn;}
    innin.open(inncharfile.c_str());
    innin >> iname;
    innin >> ilevel;
    innin >> iHP;
    innin >> iMaxHP;
    innin >> iMP;
    innin >> iMaxMP;
    innin >> iATK;
    innin >> iBaseATK;
    innin >> iDEF;
    innin >> iBaseDEF;
    innin >> iSPD;
    innin >> iBaseSPD;
    innin >> iEXP;
    innin >> iNextLevel;
    innin >> iClass1;
    innin >> iClass2;
    innin >> iClass3;
    innin >> iClassRank;
    innin >> inumofskills;
    innin >> iskillid1;
    innin >> iskillid2;
    innin >> iskillid3;
    innin >> iskillid4;
    innin >> iskillid5;
    innin >> iabilityid1;
    innin >> iabilityid2;
    innin >> iabilityid3;
    innin >> iabilityid4;
    innin >> iabilityid5;
    innin >> igold;
    innin.close();
    
    clearscreen();
    if(iHP == iMaxHP && iMP == iMaxMP){
        clearscreen();
        cout << "Character already at full HP and MP." << endl;
        getch();
        goto inn;}
    
    getch();
    inncost = 10;
    inncostvar = mtrand1.randInt( 10 );
    inncost = inncost * ilevel;
    inncost = inncost + inncostvar;
    cout << "One night costs " << inncost << " gold, would you like to stay?" << endl;
    cin >> innyesno;
    if(innyesno == "yes" || innyesno == "Yes" || innyesno == "Y" || innyesno == "y"){
        if(igold >= inncost){
        igold = igold - inncost;
        iHP = iMaxHP;
        iMP = iMaxMP;

    
        if(!ifstream(inncharfile.c_str())){
            cout << "Update Error" << endl;
            getch();
            goto end;}
            
        innupdate.open(inncharfile.c_str());
        
        // Inn Update
        innupdate << iname << endl;
        innupdate << ilevel << endl;
        innupdate << iHP << endl;
        innupdate << iMaxHP << endl;
        innupdate << iMP << endl;
        innupdate << iMaxMP << endl;
        innupdate << iATK << endl;
        innupdate << iBaseATK << endl;
        innupdate << iDEF << endl;
        innupdate << iBaseDEF << endl;
        innupdate << iSPD << endl;
        innupdate << iBaseSPD << endl;
        innupdate << iEXP << endl;
        innupdate << iNextLevel << endl;
        innupdate << iClass1 << endl;
        innupdate << iClass2 << endl;
        innupdate << iClass3 << endl;
        innupdate << iClassRank << endl;
        innupdate << inumofskills << endl;
        innupdate << iskillid1 << endl;
        innupdate << iskillid2 << endl;
        innupdate << iskillid3 << endl;
        innupdate << iskillid4 << endl;
        innupdate << iskillid5 << endl;
        innupdate << iabilityid1 << endl; 
        innupdate << iabilityid2 << endl;
        innupdate << iabilityid3 << endl;
        innupdate << iabilityid4 << endl;
        innupdate << iabilityid5 << endl;
        innupdate << igold << endl;
        innupdate.close();

        cout << "HP / MP Successfully recovered!" << endl;
        getch();
        goto begin;}
        
        else{
            cout << "Not enough gold" << endl;
            goto inn;}}
       
    else{
        goto inn;}
    
 
    
    
    
    //////////
    // Help //
    //////////
    
    gamehelp:
    clearscreen();
    gratzhilight();
    cout << "The Game version 1.3.3 rev 94" << endl;
    cout << "Created by Greasebullet" << endl;
    cout << "Powered by Mersenne Twister" << endl;
    cout << endl;
    normalhilight();
    cout << "This game is a command line game, there are no graphics whatsoever." << endl;
    cout << "Graphics may be included in versions 2.x.x and above." << endl;
    cout << "------------------------------" << endl;
    cout << "Minimum system specifications: " << endl;
    cout << "CPU: 333MHz or higher" << endl;
    cout << "RAM: 64MB or higher" << endl;
    cout << "Hard Drive: 10MB or higher" << endl;
    cout << "OS: Windows XP or later" << endl;
    cout << "----------------------------------" << endl;
    cout << "Recommended system specifications: " << endl;
    cout << "CPU: 1Ghz or higher" << endl;
    cout << "RAM: 256MB or higher" << endl;
    cout << "Hard Drive: 20MB or higher" << endl;
    cout << "OS: Windows Vista or later" << endl;
    cout << "------------------------------" << endl;

    getch();
    goto begin;
    

    ///////////////////
    // Battle System //
    ///////////////////
    
              
    // Choose Character
    charchoose:
    normalhilight();
    clearscreen();
    charstream.clear();
    charstream.str("");
    cout << "Choose a character:" << endl;
    cin >> character;
    charstream << character;
    charfile = chartext + charstream.str() + charfilestats + txt;
    if(!ifstream(charfile.c_str())){
        cout << "Character not in database" << endl;
        getch();
        goto charchoose;}
    
    in.open(charfile.c_str());
    
    // Load Data
    load:
    in >> name;
    in >> level;
    in >> HP;
    in >> MaxHP;
    in >> MP;
    in >> MaxMP;
    in >> ATK;
    in >> BaseATK;
    in >> DEF;
    in >> BaseDEF;
    in >> SPD;
    in >> BaseSPD;
    in >> EXP;
    in >> NextLevel;
    in >> Class1;
    in >> Class2;
    in >> Class3;
    in >> ClassRank;
    in >> numofskills;
    in >> skillid1;
    in >> skillid2;
    in >> skillid3;
    in >> skillid4;
    in >> skillid5;
    in >> abilityid1;
    in >> abilityid2;
    in >> abilityid3;
    in >> abilityid4;
    in >> abilityid5;
    in >> gold;
    in.close();
    consthp = MaxHP;
    constmp = MaxMP;
    clearscreen();
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
    cout << "HP: " << HP << " / " << MaxHP << endl;
    cout << "MP: " << MP << " / " << MaxMP << endl;
    cout << "ATK: " << ATK << endl;
    cout << "DEF: " << DEF << endl;
    cout << "SPD: " << SPD << endl;
    cout << "EXP: " << EXP << endl;
    cout << "To next level: " << NextLevel << endl;
    if(level > 0 && level < 50){
             cout << "Class: " << Class1 << " - Rank " << ClassRank << endl;}
    else if(level > 49 && level < 99){
             cout << "Class: " << Class2 << " - Rank " << ClassRank << endl;}
    else{
             cout << "Class: " << Class3 << endl;}
    cout << endl;
    cout << "-Skills-" << endl;
    
    
    // Load player skills
      
    if(numofskills >= 1){ 
      skillstream1.clear();
      skillstream1.str("");
      skillstream1 << skillid1;
      skill1file = charskill + skillstream1.str() + txt;
      ifstream skill1in;
      skill1in.open(skill1file.c_str());
      skill1in.getline(skill1name, 30);
      skill1in >> skill1target;
      skill1in >> skill1damage;
      skill1in >> skill1dot;
      skill1in >> skill1dotturn;     
      skill1in >> skill1hp;
      skill1in >> skill1mp;
      skill1in >> skill1atk;
      skill1in >> skill1def;
      skill1in >> skill1spd;
      skill1in >> skill1mpcost;
      skill1in.close();}
     if(numofskills >=2){
      skillstream2.clear();
      skillstream2.str("");
      skillstream2 << skillid2;
      skill2file = charskill + skillstream2.str() + txt;
      ifstream skill2in;
      skill2in.open(skill2file.c_str());
      skill2in.getline(skill2name, 30);
      skill2in >> skill2target;
      skill2in >> skill2damage;
      skill2in >> skill2dot;
      skill2in >> skill2dotturn;
      skill2in >> skill2hp;
      skill2in >> skill2mp;
      skill2in >> skill2atk;
      skill2in >> skill2def;
      skill2in >> skill2spd;
      skill2in >> skill2mpcost;
      skill2in.close();}
     if(numofskills >=3){
      skillstream3.clear();
      skillstream3.str("");
      skillstream3 << skillid3;
      skill3file = charskill + skillstream3.str() + txt;
      ifstream skill3in;
      skill3in.open(skill3file.c_str());
      skill3in.getline(skill3name, 30);
      skill3in >> skill3target;
      skill3in >> skill3damage;
      skill3in >> skill3dot;
      skill3in >> skill3dotturn;
      skill3in >> skill3hp;
      skill3in >> skill3mp;
      skill3in >> skill3atk;
      skill3in >> skill3def;
      skill3in >> skill3spd;
      skill3in >> skill3mpcost;
      skill3in.close();}
     if(numofskills >=4){
      skillstream4.clear();
      skillstream4.str("");
      skillstream4 << skillid4;
      skill4file = charskill + skillstream4.str() + txt;
      ifstream skill4in;
      skill4in.open(skill4file.c_str());
      skill4in.getline(skill4name, 30);
      skill4in >> skill4target;
      skill4in >> skill4damage;
      skill4in >> skill4dot;
      skill4in >> skill4dotturn;
      skill4in >> skill4hp;
      skill4in >> skill4mp;
      skill4in >> skill4atk;
      skill4in >> skill4def;
      skill4in >> skill4spd;
      skill4in >> skill4mpcost;
      skill4in.close();}
     if(numofskills >=5){
      skillstream5.clear();
      skillstream5.str("");
      skillstream5 << skillid5;
      skill5file = charskill + skillstream5.str() + txt;
      ifstream skill5in;
      skill5in.open(skill5file.c_str());
      skill5in.getline(skill5name, 30);
      skill5in >> skill5target;
      skill5in >> skill5damage;
      skill5in >> skill5dot;
      skill5in >> skill5dotturn;
      skill5in >> skill5hp;
      skill5in >> skill5mp;
      skill5in >> skill5atk;
      skill5in >> skill5def;
      skill5in >> skill5spd;
      skill5in >> skill5mpcost;
      skill5in.close();}
    else{}
         
         

    switch(numofskills){
        case 1:
             cout << "1. " << skill1name << " - " << skill1mpcost << "MP" << endl;
             goto abilityload;
        break;
        case 2:
             cout << "1. " << skill1name << " - " << skill1mpcost << "MP" << endl;
             cout << "2. " << skill2name << " - " << skill2mpcost << "MP" << endl;
             goto abilityload;
        break;
        case 3:
             cout << "1. " << skill1name << " - " << skill1mpcost << "MP" << endl;
             cout << "2. " << skill2name << " - " << skill2mpcost << "MP" << endl; 
             cout << "3. " << skill3name << " - " << skill3mpcost << "MP" << endl;
             goto abilityload;
        break;
        case 4:
             cout << "1. " << skill1name << " - " << skill1mpcost << "MP" << endl;
             cout << "2. " << skill2name << " - " << skill2mpcost << "MP" << endl; 
             cout << "3. " << skill3name << " - " << skill3mpcost << "MP" << endl;
             cout << "4. " << skill4name << " - " << skill4mpcost << "MP" << endl;
             goto abilityload;
        break;
        case 5:
             cout << "1. " << skill1name << " - " << skill1mpcost << "MP" << endl;
             cout << "2. " << skill2name << " - " << skill2mpcost << "MP" << endl; 
             cout << "3. " << skill3name << " - " << skill3mpcost << "MP" << endl;
             cout << "4. " << skill4name << " - " << skill4mpcost << "MP" << endl;
             cout << "5. " << skill5name << " - " << skill5mpcost << "MP" << endl;
             goto abilityload;
        break;
        default:
             cout << "None" << endl;}
        getch();
        
        
        
    // Load abilities
      abilityload:
      abilitystream1.clear();
      abilitystream1.str("");
      abilitystream1 << abilityid1;
      ability1file = charability + abilitystream1.str() + txt;
      ability1in.open(ability1file.c_str());
      ability1in.getline(ability1name, 25);
      ability1in >> ability1hppercent;
      ability1in >> ability1mppercent;
      ability1in >> ability1type;
      ability1in >> extracrit1;
      ability1in >> ability1trig1f;
      ability1in >> ability1trig1param;
      ability1in >> ability1trig1mult;
      ability1in >> ability1hpregen1;
      ability1in >> ability1mpregen1;
      ability1in >> ability1trig2f;
      ability1in >> ability1trig2param;
      ability1in >> ability1trig2mult;
      ability1in >> ability1hpregen2;
      ability1in >> ability1mpregen2;
      ability1in >> hp0effect1;
      ability1in >> hp0damage1;
      ability1in >> hp0revive1;
      ability1in >> hp0skill1;
      ability1in >> expboost1;
      ability1in >> goldboost1;
      ability1in >> skillattack1;
      ability1in >> skillattackhp1;
      ability1in.close();
      
      abilitystream2.clear();
      abilitystream2.str("");
      abilitystream2 << abilityid2;
      ability2file = charability + abilitystream2.str() + txt;
      ability2in.open(ability2file.c_str());
      ability2in.getline(ability2name, 25);
      ability2in >> ability2hppercent;
      ability2in >> ability2mppercent;
      ability2in >> ability2type;
      ability2in >> extracrit2;
      ability2in >> ability2trig1f;
      ability2in >> ability2trig1param;
      ability2in >> ability2trig1mult;
      ability2in >> ability2hpregen1;
      ability2in >> ability2mpregen1;
      ability2in >> ability2trig2f;
      ability2in >> ability2trig2param;
      ability2in >> ability2trig2mult;
      ability2in >> ability2hpregen2;
      ability2in >> ability2mpregen2;
      ability2in >> hp0effect2;
      ability2in >> hp0damage2;
      ability2in >> hp0revive2;
      ability2in >> hp0skill2;
      ability2in >> expboost2;
      ability2in >> goldboost2;
      ability2in >> skillattack2;
      ability2in >> skillattackhp2;
      ability2in.close();
      
      abilitystream3.clear();
      abilitystream3.str("");
      abilitystream3 << abilityid3;
      ability3file = charability + abilitystream3.str() + txt;
      ability3in.open(ability3file.c_str());
      ability3in.getline(ability3name, 25);
      ability3in >> ability3hppercent;
      ability3in >> ability3mppercent;
      ability3in >> ability3type;
      ability3in >> extracrit3;
      ability3in >> ability3trig1f;
      ability3in >> ability3trig1param;
      ability3in >> ability3trig1mult;
      ability3in >> ability3hpregen1;
      ability3in >> ability3mpregen1;
      ability3in >> ability3trig2f;
      ability3in >> ability3trig2param;
      ability3in >> ability3trig2mult;
      ability3in >> ability3hpregen2;
      ability3in >> ability3mpregen2;
      ability3in >> hp0effect3;
      ability3in >> hp0damage3;
      ability3in >> hp0revive3;
      ability3in >> hp0skill3;
      ability3in >> expboost3;
      ability3in >> goldboost3;
      ability3in >> skillattack3;
      ability3in >> skillattackhp3;
      ability3in.close();
      
      ability1hpconst = ability1hppercent;
      ability1mpconst = ability1mppercent;
      ability2hpconst = ability2hppercent;
      ability2mpconst = ability2mppercent;
      ability3hpconst = ability3hppercent;
      ability3mpconst = ability3mppercent;
      
      if(ability1trig1f > 0){ // HP
          ability1trig1f = ability1trig1f / 100; // 0.25
          ability1trig1f = MaxHP * ability1trig1f;
          ability1trig1 = static_cast<int>(ability1trig1f);}
      if(ability1trig2f > 0){ // MP
          ability1trig2f = ability1trig2f / 100;
          ability1trig2f = MaxMP * ability1trig2f;
          ability1trig2 = static_cast<int>(ability1trig2f);}
      if(ability2trig1f > 0){
          ability2trig1f = ability2trig1f / 100;
          ability2trig1f = MaxHP * ability2trig1f;
          ability2trig1 = static_cast<int>(ability2trig1f);}
      if(ability2trig2f > 0){
          ability2trig2f = ability2trig2f / 100;
          ability2trig2f = MaxMP * ability2trig1f;
          ability2trig2 = static_cast<int>(ability2trig2f);}
      if(ability3trig1f > 0){
          ability3trig1f = ability3trig1f / 100;
          ability3trig1f = MaxHP * ability3trig1f;
          ability3trig1 = static_cast<int>(ability3trig1f);}
      if(ability3trig2f > 0){
          ability3trig2f = ability3trig2f / 100;
          ability3trig2f = MaxMP * ability3trig2f;
          ability3trig2 = static_cast<int>(ability3trig2f);}

      // Auto Life Initializaion

      if(hp0revive1 > 0){
          autolife = true;}
      if(hp0revive2 > 0){
          autolife = true;}
      if(hp0revive3 > 0){
          autolife = true;}

      // Ability Output
      cout << endl;
      cout << "-Abilities-" << endl;
      hasabilities = false;
      if(ability1name != ""){
          hasabilities = true;
          cout << ability1name << endl;}
      if(ability2name != ""){
          cout << ability2name << endl;}
      if(ability3name != ""){
          cout << ability3name << endl;}
      if (hasabilities != true){
          cout << "None" << endl;
          getch();}
      
      

    
    
    
    endpload:
    cout << "Character data successfully loaded" << endl;
    getch();
    
    
    
    // Choose Enemy
    enemychoose:
    eskillid1 = 0;
    eskillid2 = 0;
    eskillid3 = 0;
    eabilityid1 = 0;
    eabilityid2 = 0;
    clearscreen();
    enemystream.clear();
    enemystream.str("");
    //ifstream ein;
    cout << "Input Monster ID" << endl;
    cin >> monsterid;
    enemystream << monsterid;
    enemyfile = enemytext + enemystream.str() + txt;
    if(!ifstream(enemyfile.c_str())){
        cout << "Enemy ID not in database" << endl;
        getch();
        goto enemychoose;}
        
    ein.open(enemyfile.c_str());
    
    // Load EData
    eload:
    ein.getline(ename, 30);
    ein >> elevel;
    ein >> eHP;
    ein >> eMaxHP;
    ein >> eMP;
    ein >> eMaxMP;
    ein >> eATK;
    ein >> eBaseATK;
    ein >> eDEF;
    ein >> eBaseDEF;
    ein >> eSPD;
    ein >> eBaseSPD;
    ein >> eEXP;
    ein >> eGold;
    ein >> enumofskills;
    ein >> eskillid1;
    ein >> eskillid2;
    ein >> eskillid3;
    ein >> eabilityid1;
    ein >> eabilityid2;
    ein.close();
    cout << "Name: " << ename << endl;
    cout << "Level: " << elevel << endl;
    cout << "HP: " << eHP << endl;
    cout << "MP: " << eMP << endl;
    cout << "ATK: " << eATK << endl;
    cout << "DEF: " << eDEF << endl;
    cout << "SPD: " << eSPD << endl;
    cout << "EXP: " << eEXP << endl;
    cout << "-Skills-" << endl;
    
    if(enumofskills >= 1){ 
      eskillstream1 << eskillid1;
      eskill1file = enemyskill + eskillstream1.str() + txt;
      ifstream eskill1in;
      eskill1in.open(eskill1file.c_str());
      eskill1in.getline(eskill1name, 20);
      eskill1in >> eskill1target;
      eskill1in >> eskill1damage;
      eskill1in >> eskill1dot;
      eskill1in >> eskill1dotturn;
      eskill1in >> eskill1hp;
      eskill1in >> eskill1mp;
      eskill1in >> eskill1atk;
      eskill1in >> eskill1def;
      eskill1in >> eskill1spd;
      eskill1in >> eskill1mpcost;
      eskill1in.close();}
    if(enumofskills >=2){
      eskillstream2 << eskillid2;
      eskill2file = enemyskill + eskillstream2.str() + txt;
      ifstream eskill2in;
      eskill2in.open(eskill2file.c_str());
      eskill2in.getline(eskill2name, 20);
      eskill2in >> eskill2target;
      eskill2in >> eskill2damage;
      eskill2in >> eskill2dot;
      eskill2in >> eskill2dotturn;
      eskill2in >> eskill2hp;
      eskill2in >> eskill2mp;
      eskill2in >> eskill2atk;
      eskill2in >> eskill2def;
      eskill2in >> eskill2spd;
      eskill2in >> eskill2mpcost;
      eskill2in.close();}
    if(enumofskills >=3){
      eskillstream3 << eskillid3;
      eskill3file = enemyskill + eskillstream3.str() + txt;
      ifstream eskill3in;
      eskill3in.open(skill3file.c_str());
      eskill3in.getline(eskill3name, 20);
      eskill3in >> eskill3target;
      eskill3in >> eskill3damage;
      eskill3in >> eskill3dot;
      eskill3in >> eskill3dotturn;
      eskill3in >> eskill3hp;
      eskill3in >> eskill3mp;
      eskill3in >> eskill3atk;
      eskill3in >> eskill3def;
      eskill3in >> eskill3spd;
      eskill3in >> eskill3mpcost;
      eskill3in.close();}
    
    switch(enumofskills){
      case 1:
           cout << "1. " << eskill1name << " - " << eskill1mpcost << "MP" << endl;
      break;
      case 2:
           cout << "1. " << eskill1name << " - " << eskill1mpcost << "MP" << endl;
           cout << "2. " << eskill2name << " - " << eskill2mpcost << "MP" << endl;
      break;
      case 3:
           cout << "1. " << eskill1name << " - " << eskill1mpcost << "MP" << endl;
           cout << "2. " << eskill2name << " - " << eskill2mpcost << "MP" << endl;
           cout << "3. " << eskill3name << " - " << eskill3mpcost << "MP" << endl;
      break;
      default:
           cout << "None" << endl;}
      
                         

    cout << "Enemy data successfully loaded" << endl;
    doublestrike = false;
    edoublestrike = false;
    getch();
    
    
    ////////////////
    // Order Roll //
    ////////////////
    
    
    
    // Player's Order Roll
    orderroll:
    firstroll = 0;
    clearscreen();
    cout << "Player's order roll..." << endl;
    getch();
    clearscreen();
    firstroll = mtrand1.randInt( 20 );
    if(firstroll == 0){
        firstroll = 1;}
    cout << "You rolled a " << firstroll << "." << endl;
    getch();


    // Enemy's Order Roll
    clearscreen();
    efirstroll = 0;
    cout << "Enemy's order roll..." << endl;
    getch();
    clearscreen(); 
    efirstroll = mtrand1.randInt( 20 );
    if(efirstroll == 0){
        efirstroll = 1;}
    cout << "The enemy rolled a " << efirstroll << "." << endl;
    getch();
    
    // Order Roll Processing
    if (firstroll > efirstroll){
        goto playerturn;}
    else if (firstroll < efirstroll){
        goto enemyturn;}
    else if (firstroll == efirstroll){
        clearscreen();    
        cout << "Order rolls equal, you must re-roll" << endl;
        getch();
        goto orderroll;}
    else{
        cout << "Error in processing order rolls" << endl;
        goto end;}
    
    // Player's Turn
    playerturn:
    clearscreen();
    
    // Death check
    if (HP <= 0){
       if(autolife == true){
           if(hp0revive1 > 0){
               HP = hp0revive1;
               cout << name << "'s death was evaded!" << endl;
               getch();
               autolife = false;}
           else if(hp0revive2 > 0){
               HP = hp0revive2;
               cout << name << "'s death was evaded!" << endl;
               getch();
               autolife = false;}
           else if(hp0revive3 > 0){
               HP = hp0revive3;
               cout << name << "'s death was evaded!" << endl;
               getch();
               autolife = false;}
           else{
               cout << "You died" << endl;
               getch();
               goto begin;}}
       else{
           cout << "You died" << endl;
           getch();
           goto begin;}}
    else{}
       
    // Buff Tick Control
    if(hpinc == true){
        hptick = hptick - 1;}
    if(mpinc == true){
        mptick = mptick - 1;}
    if(atkinc == true){
        atktick = atktick - 1;}
    if(definc == true){
        deftick = deftick - 1;}
    if(spdinc == true){
        spdtick = spdtick - 1;}
    if(hpdec == true){
        hpdtick = hpdtick - 1;}
    if(mpdec == true){
        mpdtick = mpdtick - 1;}
    if(atkdec == true){
        atkdtick = atkdtick - 1;}
    if(defdec == true){
        defdtick = defdtick - 1;}
    if(spddec == true){
        spddtick = spddtick - 1;}
        
    // HP/MP Regen Ability Control
    ability1hppercent = ability1hpconst;
    ability1mppercent = ability1mpconst;
    ability2hppercent = ability2hpconst;
    ability2mppercent = ability2mpconst;
    ability3hppercent = ability3hpconst;
    ability3mppercent = ability3mpconst;
    ability1hp = 0;
    ability1mp = 0;
    ability2hp = 0;
    ability2mp = 0;
    ability3hp = 0;
    ability3mp = 0;
    if(ability1hppercent > 0){
        ability1hppercent = ability1hppercent / 100; // 0.03
        ability1hppercent = ability1hppercent * MaxHP; // 10.5 (350 HP)
        ability1hp = static_cast<int>(ability1hppercent); // 11
        HP = HP + ability1hp;
        cout << name << " gains " << ability1hp << " HP." << endl;}
    if(ability1mppercent > 0){
        ability1mppercent = ability1mppercent / 100; // 0.03
        ability1mppercent = ability1mppercent * MaxMP; // 10.5 (350 MP)
        ability1mp = static_cast<int>(ability1mppercent); // 11
        MP = MP + ability1mp;
        cout << name << " gains " << ability1mp << " MP." << endl;}
    if(ability2hppercent > 0){
        ability2hppercent = ability2hppercent / 100; 
        ability2hppercent = ability2hppercent * MaxHP; 
        ability2hp = static_cast<int>(ability2hppercent); 
        HP = HP + ability2hp;
        cout << name << " gains " << ability2hp << " HP." << endl;}
    if(ability2mppercent > 0){
        ability2mppercent = ability2mppercent / 100; 
        ability2mppercent = ability2mppercent * MaxMP; 
        ability2mp = static_cast<int>(ability2mppercent);
        MP = MP + ability2mp;
        cout << name << " gains " << ability2mp << " MP." << endl;}
    if(ability3hppercent > 0){
        ability3hppercent = ability3hppercent / 100; 
        ability3hppercent = ability3hppercent * MaxHP; 
        ability3hp = static_cast<int>(ability3hppercent); 
        HP = HP + ability3hp;
        cout << name << " gains " << ability3hp << " HP." << endl;}
    if(ability3mppercent > 0){
        ability3mppercent = ability3mppercent / 100; 
        ability3mppercent = ability3mppercent * MaxMP; 
        ability3mp = static_cast<int>(ability3mppercent);
        MP = MP + ability3mp;
        cout << name << " gains " << ability3mp << " MP." << endl;}
    


    // Ability Buff @ Percent 
    
    
    
    // Ability 1 
    if (ability1trig1bool == false){
        if(HP <= ability1trig1){
            if(ability1trig1param == "ATK"){
                ATK = ATK * ability1trig1mult;
                cout << name << " unleashes his rage!" << endl;
                getch();
                ability1trig1bool = true;}
            if(ability1trig1param == "DEF"){
                DEF = DEF * ability1trig1mult;
                cout << name << " 's defense rose!" << endl;
                getch();
                ability1trig1bool = true;}
            if(ability1trig1param == "SPD"){
                SPD = SPD * ability1trig1mult;
                cout << name << " has become more agile!" << endl;
                getch();
                ability1trig1bool = true;}}
        else{}}
    else{}
                
    if (ability1trig2bool == false){
        if(MP <= ability1trig2){
            if(ability1trig2param == "ATK"){
                ATK = ATK * ability1trig2mult;
                cout << name << " unleashes his rage!" << endl;
                getch();
                ability1trig2bool = true;}
            if(ability1trig2param == "DEF"){
                DEF = DEF * ability1trig2mult;
                cout << name << " 's defense rose!" << endl;
                getch();
                ability1trig2bool = true;}
            if(ability1trig2param == "SPD"){
                SPD = SPD * ability1trig2mult;
                cout << name << " has become more agile!" << endl;
                getch();
                ability1trig2bool = true;}}
        else{}}
    else{}
                
                
        // Ability 2
    if (ability2trig1bool == false){
        if(HP <= ability2trig1){
            if(ability2trig1param == "ATK"){
                ATK = ATK * ability2trig1mult;
                cout << name << " unleashes his rage!" << endl;
                getch();
                ability2trig1bool = true;}
            if(ability2trig1param == "DEF"){
                DEF = DEF * ability2trig1mult;
                cout << name << " 's defense rose!" << endl;
                getch();
                ability2trig1bool = true;}
            if(ability2trig1param == "SPD"){
                SPD = SPD * ability2trig1mult;
                cout << name << " has become more agile!" << endl;
                getch();
                ability2trig1bool = true;}
            else{}}
        else{}}
    else{}
                
    if (ability2trig2bool == false){
        if(MP <= ability2trig2){
            if(ability2trig2param == "ATK"){
                ATK = ATK * ability2trig2mult;
                cout << name << " unleashes his rage!" << endl;
                getch();
                ability2trig2bool = true;}
            if(ability2trig2param == "DEF"){
                DEF = DEF * ability2trig2mult;
                cout << name << " 's defense rose!" << endl;
                getch();
                ability2trig2bool = true;}
            if(ability2trig2param == "SPD"){
                SPD = SPD * ability2trig2mult;
                cout << name << " has become more agile!" << endl;
                getch();
                ability2trig2bool = true;}}
        else{}}
    else{}
                
        // Ability 3
    if (ability3trig1bool == false){
        if(HP <= ability3trig1){
            if(ability3trig1param == "ATK"){
                ATK = ATK * ability3trig1mult;
                cout << name << " unleashes his rage!" << endl;
                getch();
                ability3trig1bool = true;}
            if(ability3trig1param == "DEF"){
                DEF = DEF * ability3trig1mult;
                cout << name << " 's defense rose!" << endl;
                getch();
                ability3trig1bool = true;}
            if(ability3trig1param == "SPD"){
                SPD = SPD * ability3trig1mult;
                cout << name << " has become more agile!" << endl;
                getch();
                ability3trig1bool = true;}}
        else{}}
    else{}
                
    if (ability3trig2bool == false){
        if(MP <= ability3trig2){
            if(ability3trig2param == "ATK"){
                ATK = ATK * ability3trig2mult;
                cout << name << " unleashes his rage!" << endl;
                getch();
                ability3trig2bool = true;}
            if(ability3trig2param == "DEF"){
                DEF = DEF * ability3trig2mult;
                cout << name << " 's defense rose!" << endl;
                getch();
                ability3trig2bool = true;}
            if(ability3trig2param == "SPD"){
                SPD = SPD * ability3trig2mult;
                cout << name << " has become more agile!" << endl;
                getch();
                ability3trig2bool = true;}}
        else{}}
    else{}
                
            
        
    // HP Cap
    mainplayerturn:
    if (HP > MaxHP){
        HP = MaxHP;}
       
    // MP Cap
    if (MP > MaxMP){
        MP = MaxMP;}
       
    // Main Player Turn
    cout << "Type an action..." << endl;
    cout << "(Attack, Skill, Quit)" << endl;
    cout << name << ": " << "HP: " << HP << "/" << MaxHP << " - " << "MP: " << MP << "/" << MaxMP << endl;
    cout << ename << ": " << "HP: " << eHP << "/" << eMaxHP << " - " << "MP: " << eMP << "/" << eMaxMP << endl;
    
    // Player's Buff ticks
    if(hptick > 0){
        cout << "HP ticks left :" << hptick << endl;}
    if(mptick > 0){
        cout << "MP ticks left :" << mptick << endl;}
    if(atktick > 0){
        cout << "ATK ticks left :" << atktick << endl;}
    if(deftick > 0){
        cout << "DEF ticks left :" << deftick << endl;}
    if(spdtick > 0){
        cout << "SPD ticks left :" << spdtick << endl;}
    
    // Enemy's Buff ticks
    if(hpdtick > 0){
        cout << ename << "'s HP ticks left :" << hpdtick << endl;}
    if(mpdtick > 0){
        cout << ename << "'s HP ticks left :" << mpdtick << endl;}
    if(atkdtick > 0){
        cout << ename << "'s HP ticks left :" << atkdtick << endl;}
    if(defdtick > 0){
        cout << ename << "'s HP ticks left :" << defdtick << endl;}
    if(spddtick > 0){
        cout << ename << "'s HP ticks left :" << spddtick << endl;}
    
    // Player's buff off
    if(hptick == 0){
        hpinc = false;}
    if(mptick == 0){
        mpinc = false;}
    if(atktick == 0){
        atkinc = false;}
    if(deftick == 0){
        definc = false;}
    if(spdtick == 0){
        spdinc = false;}
        
    // Enemy's buff off
    if(hpdtick == 0){
        hpdec = false;}
    if(mpdtick == 0){
        mpdec = false;}
    if(atkdtick == 0){
        atkdec = false;}
    if(defdtick == 0){
        defdec = false;}
    if(spddtick == 0){
        spddec = false;}
    
    // Get action
    cin >> action;
    if (action == "Attack" || action == "attack"){
       goto playerroll;}
    else if (action == "Skill" || action == "skill"){
       goto skillnum;}
    else if (action == "Quit" || action == "quit"){
       goto end;}
    else{
         cout << "Command not recognized" << endl;
         getch();
         clearscreen();
         goto mainplayerturn;
         }
         
         
    // Display Skill List
    skillnum:
    clearscreen();
    
    switch(numofskills){
        case 1:
             cout << "Availible skills: " << skill1name << endl;
             goto skillchoose;
             break;
        case 2:
             cout << "Availible skills: " << skill1name << ", " << skill2name << endl;
             goto skillchoose;
             break;
        case 3:
             cout << "Availible skills: " << skill1name << ", " << skill2name << ", " << skill3name << endl;
             goto skillchoose;
             break;
        case 4:
             cout << "Availible skills: " << skill1name << ", " << skill2name << ", " << skill3name << ", " << skill4name << endl;
             goto skillchoose;
             break;
        case 5:
             cout << "Availible skills: " << skill1name << ", " << skill2name << ", " << skill3name << ", " << skill4name << ", " << skill5name << endl;
             goto skillchoose;
             break;
        default:
             cout << "No available skills" << endl;
             goto playerturn;}
    
          
    
    
    // Choose Skill
    skillchoose:
    cinclear(std::cin);
    skillselection[30] = '\0';
    skillselectionss.clear();
    skillselectionss.str("");
    skillselections = "";
    skill1namess.clear();
    skill1namess.str("");
    skill2namess.clear();
    skill2namess.str("");
    skill3namess.clear();
    skill3namess.str("");
    skill4namess.clear();
    skill4namess.str("");
    skill5namess.clear();
    skill5namess.str("");
    skill1names = "";
    skill2names = "";
    skill3names = "";
    skill4names = "";
    skill5names = "";
    cout << "Choose a skill, or type Back to go back." << endl;                                  
    cin.getline(skillselection, 30, '\n');
    skillselectionss << skillselection;
    skillselectionss >> skillselections;
    skill1namess << skill1name;
    skill1namess >> skill1names;
    skill2namess << skill2name;
    skill2namess >> skill2names;
    skill3namess << skill3name;
    skill3namess >> skill3names;
    skill4namess << skill4name;
    skill4namess >> skill4names;
    skill5namess << skill5name;
    skill5namess >> skill5names;
    if(skillselections == skill1names){
        goto skill1;}
    else if(skillselections == skill2names){
        goto skill2;}
    else if(skillselections == skill3names){
        goto skill3;}
    else if(skillselections == skill4names){
        goto skill4;}
    else if(skillselections == skill5names){
        goto skill5;}
    else if(skillselections == "Back" || skillselections == "back"){
        goto playerturn;}
    else{
        cout << "Skill not found." << endl; 
        goto skillchoose;}
        
        
    // Skill 1
    skill1:
    if(MP < skill1mpcost){
        clearscreen();
        cout << "Insufficient MP" << endl;
        getch();
        goto skillchoose;}
    else{
    goto skill1b;}
    
    skill1b:
    if(dotafflicted == true && skill1dot > 0){
        cout << "The enemy is already afflicted with a DoT effect." << endl;
        goto skillchoose;}
    else{}
    MP = MP - skill1mpcost;
    if(skill1dot > 0){
        usingdot = true;
        dotdamage = skill1dot;
        dotticks = skill1dotturn;}
    if(skill1damage < 0){
        fheal = skill1damage; // -15
        fheal = fheal * -1; // 15
        fheal = fheal / 100; // 0.15
        fheal = MaxHP * fheal;  //MaxHP = 350:: 52.5
        heal = static_cast<int>(fheal); // 53
        HP = HP + heal;
        if(HP > MaxHP){
            HP = MaxHP;}
        gratzhilight();
        cout << name << " healed himself for " << heal << "." << endl;
        normalhilight();
        getch();}
    if(skill1hp > 0){
        fhpinc = skill1hp; // HP + 20%, 20
        fhpinc = fhpinc / 100; // 0.20
        fhpinc = fhpinc * MaxHP; // MaxHP = 350 :: 70
        ihpinc = static_cast<int>(fhpinc); // 70
        MaxHP = MaxHP + ihpinc;
        HP = HP + ihpinc;
        hpinc = true;
        hptick = 3;
        gratzhilight();
        cout << name << " now has the stamina of a bull!" << endl;
        getch();
        fhpinc = 0;
        ihpinc = 0;
        normalhilight();}
    if(skill1mp > 0){
        fmpinc = skill1mp; // HP + 20%, 20
        fmpinc = fmpinc / 100; // 0.20
        fmpinc = fmpinc * MaxMP; // MaxHP = 350 :: 70
        impinc = static_cast<int>(fmpinc); // 70
        MaxMP = MaxMP + impinc;
        MP = MP + impinc;
        mpinc = true;
        mptick = 3;
        gratzhilight();
        cout << name << " now has the knowlege of an eagle!" << endl;
        getch();
        fmpinc = 0;
        impinc = 0;
        normalhilight();}
    if(skill1atk > 0){
        fatkinc = skill1atk; // HP + 20%, 20
        fatkinc = fatkinc / 100; // 0.20
        fatkinc = fatkinc * BaseATK; // MaxHP = 350 :: 70
        iatkinc = static_cast<int>(fatkinc); // 70
        ATK = ATK + iatkinc;
        atkinc = true;
        atktick = 3;
        gratzhilight();
        cout << name << " now has the strength of a bear!" << endl;
        getch();
        fatkinc = 0;
        iatkinc = 0;
        normalhilight();}
    if(skill1def > 0){
        fdefinc = skill1def; // HP + 20%, 20
        fdefinc = fdefinc / 100; // 0.20
        fdefinc = fdefinc * BaseDEF; // MaxHP = 350 :: 70
        idefinc = static_cast<int>(fdefinc); // 70
        //BaseATK = BaseATK + iatkinc;
        DEF = DEF + idefinc;
        definc = true;
        deftick = 3;
        gratzhilight();
        cout << name << " now has the armor of a rhino!" << endl;
        getch();
        fdefinc = 0;
        idefinc = 0;
        normalhilight();}
    if(skill1spd > 0){
        fspdinc = skill1spd; // HP + 20%, 20
        fspdinc = fspdinc / 100; // 0.20
        fspdinc = fspdinc * BaseSPD; // MaxHP = 350 :: 70
        ispdinc = static_cast<int>(fspdinc); // 70
        //BaseATK = BaseATK + iatkinc;
        SPD = SPD + ispdinc;
        spdinc = true;
        spdtick = 3;
        gratzhilight();
        cout << name << " now has the agility of a tiger!" << endl;
        getch();
        fspdinc = 0;
        ispdinc = 0;
        normalhilight();}    
        
        
        // Debuffs
    if(skill1hp < 0){
        fhpdec = skill1hp; // HP + 20%, 20
        fhpdec = fhpdec * -1;
        fhpdec = fhpdec / 100; // 0.20
        fhpdec = fhpdec * MaxHP; // MaxHP = 350 :: 70
        ihpdec = static_cast<int>(fhpdec); // 70
        eMaxHP = eMaxHP - ihpdec;
        eHP = eHP - ihpdec;
        hpdec = true;
        hpdtick = 3;
        crithilight();
        cout << ename << "'s vitality is lowered!" << endl;
        getch();
        fhpdec = 0;
        ihpdec = 0;
        normalhilight();}
    if(skill1mp < 0){
        fmpdec = skill1mp; // HP + 20%, 20
        fmpdec = fmpdec * -1;
        fmpdec = fmpdec / 100; // 0.20
        fmpdec = fmpdec * MaxMP; // MaxHP = 350 :: 70
        impdec = static_cast<int>(fmpdec); // 70
        eMaxMP = eMaxMP - impdec;
        eMP = eMP - impdec;
        mpdec = true;
        mpdtick = 3;
        crithilight();
        cout << ename << "'s intellect is lowered!" << endl;
        getch();
        fmpdec = 0;
        impdec = 0;
        normalhilight();}
    if(skill1atk < 0){
        fatkdec = skill1atk; // HP + 20%, 20
        fatkdec = fatkdec * -1;
        fatkdec = fatkdec / 100; // 0.20
        fatkdec = fatkdec * BaseATK; // MaxHP = 350 :: 70
        iatkdec = static_cast<int>(fatkdec); // 70
        eATK = eATK - iatkdec;
        atkdec = true;
        atkdtick = 3;
        crithilight();
        cout << ename << "'s strength is lowered!" << endl;
        getch();
        fatkdec = 0;
        iatkdec = 0;
        normalhilight();}
    if(skill1def < 0){
        fdefdec = skill1def; // HP + 20%, 20
        fdefdec = fdefdec * -1;
        fdefdec = fdefdec / 100; // 0.20
        fdefdec = fdefdec * BaseDEF; // MaxHP = 350 :: 70
        idefdec = static_cast<int>(fdefdec); // 70
        eDEF = eDEF - idefdec;
        defdec = true;
        defdtick = 3;
        crithilight();
        cout << ename << "'s armor is lowered!" << endl;
        getch();
        fdefdec = 0;
        idefdec = 0;
        normalhilight();}
    if(skill1spd < 0){
        fspddec = skill1spd; // HP + 20%, 20
        fspddec = fspddec * -1;
        fspddec = fspddec / 100; // 0.20
        fspddec = fspddec * BaseSPD; // MaxHP = 350 :: 70
        ispddec = static_cast<int>(fspddec); // 70
        eSPD = eSPD - ispddec;
        spddec = true;
        spddtick = 3;
        crithilight();
        cout << ename << "'s speed is lowered!" << endl;
        getch();
        fspddec = 0;
        ispddec = 0;
        normalhilight();}            
    if(skill1damage > 0){
        skilldamageplus = skill1damage;
        goto playerroll;}
    
    usingskill = true;
    MP = (MP - skill1mpcost);
    
    if(doublestriketick == 0){
        doublestrike = false;}
    if(doublestrike == false){
        if(SPD > (eSPD * 2)){
            doublestrike = true;
            doublestriketick = 1;
            goto playerturn;}
        else{
            goto enemyturn;}}
    else if(doublestrike == true){
        if(doublestriketick > 0){
            doublestriketick = doublestriketick - 1;}
        goto enemyturn;}
        
    
    // Skill 2
    skill2:
    if(MP < skill2mpcost){
        clearscreen();
        cout << "Insufficient MP" << endl;
        getch();
        goto skillchoose;}
    else{
    goto skill2b;}
    
    skill2b:
    if(dotafflicted == true && skill2dot > 0){
        cout << "The enemy is already afflicted with a DoT effect." << endl;
        goto skillchoose;}
    else{}
    MP = MP - skill2mpcost;
    if(skill2dot > 0){
        usingdot = true;
        dotdamage = skill2dot;
        dotticks = skill2dotturn;}
    if(skill2damage < 0){
        fheal = skill2damage; // -15
        fheal = fheal * -1; // 15
        fheal = fheal / 100; // 0.15
        fheal = MaxHP * fheal;  //MaxHP = 350:: 52.5
        heal = static_cast<int>(fheal); // 53
        HP = HP + heal;
        if(HP > MaxHP){
            HP = MaxHP;}
        gratzhilight();
        cout << name << " healed himself for " << heal << "." << endl;
        normalhilight();
        getch();}
    if(skill2hp > 0){
        fhpinc = skill2hp; // HP + 20%, 20
        fhpinc = fhpinc / 100; // 0.20
        fhpinc = fhpinc * MaxHP; // MaxHP = 350 :: 70
        ihpinc = static_cast<int>(fhpinc); // 70
        MaxHP = MaxHP + ihpinc;
        HP = HP + ihpinc;
        hpinc = true;
        hptick = 3;
        gratzhilight();
        cout << name << " now has the stamina of a bull!" << endl;
        getch();
        normalhilight();}
    if(skill2mp > 0){
        fmpinc = skill2mp; // HP + 20%, 20
        fmpinc = fmpinc / 100; // 0.20
        fmpinc = fmpinc * MaxMP; // MaxHP = 350 :: 70
        impinc = static_cast<int>(fmpinc); // 70
        MaxMP = MaxMP + impinc;
        MP = MP + impinc;
        mpinc = true;
        mptick = 3;
        gratzhilight();
        cout << name << " now has the knowlege of an eagle!" << endl;
        getch();
        normalhilight();}
    if(skill2atk > 0){
        fatkinc = skill2atk; // HP + 20%, 20
        fatkinc = fatkinc / 100; // 0.20
        fatkinc = fatkinc * BaseATK; // MaxHP = 350 :: 70
        iatkinc = static_cast<int>(fatkinc); // 70
        //BaseATK = BaseATK + iatkinc;
        ATK = ATK + iatkinc;
        atkinc = true;
        atktick = 3;
        gratzhilight();
        cout << name << " now has the strength of a bear!" << endl;
        getch();
        normalhilight();}
    if(skill2def > 0){
        fdefinc = skill2def; // HP + 20%, 20
        fdefinc = fdefinc / 100; // 0.20
        fdefinc = fdefinc * BaseDEF; // MaxHP = 350 :: 70
        idefinc = static_cast<int>(fdefinc); // 70
        //BaseATK = BaseATK + iatkinc;
        DEF = DEF + idefinc;
        definc = true;
        deftick = 3;
        gratzhilight();
        cout << name << " now has the armor of a rhino!" << endl;
        getch();
        normalhilight();}
    if(skill2spd > 0){
        fspdinc = skill2spd; // HP + 20%, 20
        fspdinc = fspdinc / 100; // 0.20
        fspdinc = fspdinc * BaseSPD; // MaxHP = 350 :: 70
        ispdinc = static_cast<int>(fspdinc); // 70
        //BaseATK = BaseATK + iatkinc;
        SPD = SPD + ispdinc;
        spdinc = true;
        spdtick = 3;
        gratzhilight();
        cout << name << " now has the agility of a tiger!" << endl;
        getch();
        normalhilight();}     
        
        
        // Debuffs
    if(skill2hp < 0){
        fhpdec = skill2hp; // HP + 20%, 20
        fhpdec = fhpdec * -1;
        fhpdec = fhpdec / 100; // 0.20
        fhpdec = fhpdec * MaxHP; // MaxHP = 350 :: 70
        ihpdec = static_cast<int>(fhpdec); // 70
        eMaxHP = eMaxHP - ihpdec;
        eHP = eHP - ihpdec;
        hpdec = true;
        hpdtick = 3;
        crithilight();
        cout << ename << "'s vitality is lowered!" << endl;
        getch();
        fhpdec = 0;
        ihpdec = 0;
        normalhilight();}
    if(skill2mp < 0){
        fmpdec = skill2mp; // HP + 20%, 20
        fmpdec = fmpdec * -1;
        fmpdec = fmpdec / 100; // 0.20
        fmpdec = fmpdec * MaxMP; // MaxHP = 350 :: 70
        impdec = static_cast<int>(fmpdec); // 70
        eMaxMP = eMaxMP - impdec;
        eMP = eMP - impdec;
        mpdec = true;
        mpdtick = 3;
        crithilight();
        cout << ename << "'s intellect is lowered!" << endl;
        getch();
        fmpdec = 0;
        impdec = 0;
        normalhilight();}
    if(skill2atk < 0){
        fatkdec = skill2atk; // HP + 20%, 20
        fatkdec = fatkdec * -1;
        fatkdec = fatkdec / 100; // 0.20
        fatkdec = fatkdec * BaseATK; // MaxHP = 350 :: 70
        iatkdec = static_cast<int>(fatkdec); // 70
        eATK = eATK - iatkdec;
        atkdec = true;
        atkdtick = 3;
        crithilight();
        cout << ename << "'s strength is lowered!" << endl;
        getch();
        fatkdec = 0;
        iatkdec = 0;
        normalhilight();}
    if(skill2def < 0){
        fdefdec = skill2def; // HP + 20%, 20
        fdefdec = fdefdec * -1;
        fdefdec = fdefdec / 100; // 0.20
        fdefdec = fdefdec * BaseDEF; // MaxHP = 350 :: 70
        idefdec = static_cast<int>(fdefdec); // 70
        eDEF = eDEF - idefdec;
        defdec = true;
        defdtick = 3;
        crithilight();
        cout << ename << "'s armor is lowered!" << endl;
        getch();
        fdefdec = 0;
        idefdec = 0;
        normalhilight();}
    if(skill2spd < 0){
        fspddec = skill2spd; // HP + 20%, 20
        fspddec = fspddec * -1;
        fspddec = fspddec / 100; // 0.20
        fspddec = fspddec * BaseSPD; // MaxHP = 350 :: 70
        ispddec = static_cast<int>(fspddec); // 70
        eSPD = eSPD - ispddec;
        spddec = true;
        spddtick = 3;
        crithilight();
        cout << ename << "'s speed is lowered!" << endl;
        getch();
        fspddec = 0;
        ispddec = 0;
        normalhilight();}   
    if(skill2damage > 0){
        skilldamageplus = skill2damage;
        goto playerroll;}
    
    usingskill = true;
    MP = (MP - skill2mpcost);
    
    if(doublestriketick == 0){
        doublestrike = false;}
    if(doublestrike == false){
        if(SPD > (eSPD * 2)){
            doublestrike = true;
            doublestriketick = 1;
            goto playerturn;}
        else{
            goto enemyturn;}}
    else if(doublestrike == true){
        if(doublestriketick > 0){
            doublestriketick = doublestriketick - 1;}
        goto enemyturn;}
    
    
    // Skill 3
    skill3:
    if(MP < skill3mpcost){
        clearscreen();
        cout << "Insufficient MP" << endl;
        getch();
        goto skillchoose;}
    else{
    goto skill3b;}
    
    skill3b:
    if(dotafflicted == true && skill3dot > 0){
        cout << "The enemy is already afflicted with a DoT effect." << endl;
        goto skillchoose;}
    else{}
    MP = MP - skill3mpcost;
    if(skill3dot > 0){
        usingdot = true;
        dotdamage = skill3dot;
        dotticks = skill3dotturn;}
    if(skill3damage < 0){
        fheal = skill3damage; // -15
        fheal = fheal * -1; // 15
        fheal = fheal / 100; // 0.15
        fheal = MaxHP * fheal;  //MaxHP = 350:: 52.5
        heal = static_cast<int>(fheal); // 53
        HP = HP + heal;
        if(HP > MaxHP){
            HP = MaxHP;}
        gratzhilight();
        cout << name << " healed himself for " << heal << "." << endl;
        normalhilight();
        getch();}  
    if(skill3hp > 0){
        fhpinc = skill3hp; // HP + 20%, 20
        fhpinc = fhpinc / 100; // 0.20
        fhpinc = fhpinc * MaxHP; // MaxHP = 350 :: 70
        ihpinc = static_cast<int>(fhpinc); // 70
        MaxHP = MaxHP + ihpinc;
        HP = HP + ihpinc;
        hpinc = true;
        hptick = 3;
        gratzhilight();
        cout << name << " now has the stamina of a bull!" << endl;
        getch();
        normalhilight();}
    if(skill3mp > 0){
        fmpinc = skill3mp; // HP + 20%, 20
        fmpinc = fmpinc / 100; // 0.20
        fmpinc = fmpinc * MaxMP; // MaxHP = 350 :: 70
        impinc = static_cast<int>(fmpinc); // 70
        MaxMP = MaxMP + impinc;
        MP = MP + impinc;
        mpinc = true;
        mptick = 3;
        gratzhilight();
        cout << name << " now has the knowlege of an eagle!" << endl;
        getch();
        normalhilight();}
    if(skill3atk > 0){
        fatkinc = skill3atk; // HP + 20%, 20
        fatkinc = fatkinc / 100; // 0.20
        fatkinc = fatkinc * BaseATK; // MaxHP = 350 :: 70
        iatkinc = static_cast<int>(fatkinc); // 70
        //BaseATK = BaseATK + iatkinc;
        ATK = ATK + iatkinc;
        atkinc = true;
        atktick = 3;
        gratzhilight();
        cout << name << " now has the strength of a bear!" << endl;
        getch();
        normalhilight();}
    if(skill3def > 0){
        fdefinc = skill3def; // HP + 20%, 20
        fdefinc = fdefinc / 100; // 0.20
        fdefinc = fdefinc * BaseDEF; // MaxHP = 350 :: 70
        idefinc = static_cast<int>(fdefinc); // 70
        //BaseATK = BaseATK + iatkinc;
        DEF = DEF + idefinc;
        definc = true;
        deftick = 3;
        gratzhilight();
        cout << name << " now has the armor of a rhino!" << endl;
        getch();
        normalhilight();}
    if(skill3spd > 0){
        fspdinc = skill3spd; // HP + 20%, 20
        fspdinc = fspdinc / 100; // 0.20
        fspdinc = fspdinc * BaseSPD; // MaxHP = 350 :: 70
        ispdinc = static_cast<int>(fspdinc); // 70
        //BaseATK = BaseATK + iatkinc;
        SPD = SPD + ispdinc;
        spdinc = true;
        spdtick = 3;
        gratzhilight();
        cout << name << " now has the agility of a tiger!" << endl;
        getch();
        normalhilight();}  
        
        
        // Debuffs
    if(skill3hp < 0){
        fhpdec = skill3hp; // HP + 20%, 20
        fhpdec = fhpdec * -1;
        fhpdec = fhpdec / 100; // 0.20
        fhpdec = fhpdec * MaxHP; // MaxHP = 350 :: 70
        ihpdec = static_cast<int>(fhpdec); // 70
        eMaxHP = eMaxHP - ihpdec;
        eHP = eHP - ihpdec;
        hpdec = true;
        hpdtick = 3;
        crithilight();
        cout << ename << "'s vitality is lowered!" << endl;
        getch();
        fhpdec = 0;
        ihpdec = 0;
        normalhilight();}
    if(skill3mp < 0){
        fmpdec = skill3mp; // HP + 20%, 20
        fmpdec = fmpdec * -1;
        fmpdec = fmpdec / 100; // 0.20
        fmpdec = fmpdec * MaxMP; // MaxHP = 350 :: 70
        impdec = static_cast<int>(fmpdec); // 70
        eMaxMP = eMaxMP - impdec;
        eMP = eMP - impdec;
        mpdec = true;
        mpdtick = 3;
        crithilight();
        cout << ename << "'s intellect is lowered!" << endl;
        getch();
        fmpdec = 0;
        impdec = 0;
        normalhilight();}
    if(skill3atk < 0){
        fatkdec = skill3atk; // HP + 20%, 20
        fatkdec = fatkdec * -1;
        fatkdec = fatkdec / 100; // 0.20
        fatkdec = fatkdec * BaseATK; // MaxHP = 350 :: 70
        iatkdec = static_cast<int>(fatkdec); // 70
        eATK = eATK - iatkdec;
        atkdec = true;
        atkdtick = 3;
        crithilight();
        cout << ename << "'s strength is lowered!" << endl;
        getch();
        fatkdec = 0;
        iatkdec = 0;
        normalhilight();}
    if(skill3def < 0){
        fdefdec = skill3def; // HP + 20%, 20
        fdefdec = fdefdec * -1;
        fdefdec = fdefdec / 100; // 0.20
        fdefdec = fdefdec * BaseDEF; // MaxHP = 350 :: 70
        idefdec = static_cast<int>(fdefdec); // 70
        eDEF = eDEF - idefdec;
        defdec = true;
        defdtick = 3;
        crithilight();
        cout << ename << "'s armor is lowered!" << endl;
        getch();
        fdefdec = 0;
        idefdec = 0;
        normalhilight();}
    if(skill3spd < 0){
        fspddec = skill3spd; // HP + 20%, 20
        fspddec = fspddec * -1;
        fspddec = fspddec / 100; // 0.20
        fspddec = fspddec * BaseSPD; // MaxHP = 350 :: 70
        ispddec = static_cast<int>(fspddec); // 70
        eSPD = eSPD - ispddec;
        spddec = true;
        spddtick = 3;
        crithilight();
        cout << ename << "'s speed is lowered!" << endl;
        getch();
        fspddec = 0;
        ispddec = 0;
        normalhilight();}            
    if(skill3damage > 0){
        skilldamageplus = skill3damage;
        goto playerroll;}
    
    usingskill = true;
    MP = (MP - skill3mpcost);
    
    if(doublestriketick == 0){
        doublestrike = false;}
    if(doublestrike == false){
        if(SPD > (eSPD * 2)){
            doublestrike = true;
            doublestriketick = 1;
            goto playerturn;}
        else{
            goto enemyturn;}}
    else if(doublestrike == true){
        if(doublestriketick > 0){
            doublestriketick = doublestriketick - 1;}
        goto enemyturn;}
           
           
    // Skill 4
    skill4:
    if(MP < skill4mpcost){
        clearscreen();
        cout << "Insufficient MP" << endl;
        getch();
        goto skillchoose;}
    else{
    goto skill4b;}
    
    skill4b:
    if(dotafflicted == true && skill4dot > 0){
        cout << "The enemy is already afflicted with a DoT effect." << endl;
        goto skillchoose;}
    else{}
    MP = MP - skill4mpcost;
    if(skill4dot > 0){
        usingdot = true;
        dotdamage = skill4dot;
        dotticks = skill4dotturn;}
    if(skill4damage < 0){
        fheal = skill4damage; // -15
        fheal = fheal * -1; // 15
        fheal = fheal / 100; // 0.15
        fheal = MaxHP * fheal;  //MaxHP = 350:: 52.5
        heal = static_cast<int>(fheal); // 53
        HP = HP + heal;
        if(HP > MaxHP){
            HP = MaxHP;}
        gratzhilight();
        cout << name << " healed himself for " << heal << "." << endl;
        normalhilight();
        getch();}  
    if(skill4hp > 0){
        fhpinc = skill4hp; // HP + 20%, 20
        fhpinc = fhpinc / 100; // 0.20
        fhpinc = fhpinc * MaxHP; // MaxHP = 350 :: 70
        ihpinc = static_cast<int>(fhpinc); // 70
        MaxHP = MaxHP + ihpinc;
        HP = HP + ihpinc;
        hpinc = true;
        hptick = 3;
        gratzhilight();
        cout << name << " now has the stamina of a bull!" << endl;
        getch();
        normalhilight();}
    if(skill4mp > 0){
        fmpinc = skill4mp; // HP + 20%, 20
        fmpinc = fmpinc / 100; // 0.20
        fmpinc = fmpinc * MaxMP; // MaxHP = 350 :: 70
        impinc = static_cast<int>(fmpinc); // 70
        MaxMP = MaxMP + impinc;
        MP = MP + impinc;
        mpinc = true;
        mptick = 3;
        gratzhilight();
        cout << name << " now has the knowlege of an eagle!" << endl;
        getch();
        normalhilight();}
    if(skill4atk > 0){
        fatkinc = skill4atk; // HP + 20%, 20
        fatkinc = fatkinc / 100; // 0.20
        fatkinc = fatkinc * BaseATK; // MaxHP = 350 :: 70
        iatkinc = static_cast<int>(fatkinc); // 70
        //BaseATK = BaseATK + iatkinc;
        ATK = ATK + iatkinc;
        atkinc = true;
        atktick = 3;
        gratzhilight();
        cout << name << " now has the strength of a bear!" << endl;
        getch();
        normalhilight();}
    if(skill4def > 0){
        fdefinc = skill4def; // HP + 20%, 20
        fdefinc = fdefinc / 100; // 0.20
        fdefinc = fdefinc * BaseDEF; // MaxHP = 350 :: 70
        idefinc = static_cast<int>(fdefinc); // 70
        //BaseATK = BaseATK + iatkinc;
        DEF = DEF + idefinc;
        definc = true;
        deftick = 3;
        gratzhilight();
        cout << name << " now has the armor of a rhino!" << endl;
        getch();
        normalhilight();}
    if(skill4spd > 0){
        fspdinc = skill4spd; // HP + 20%, 20
        fspdinc = fspdinc / 100; // 0.20
        fspdinc = fspdinc * BaseSPD; // MaxHP = 350 :: 70
        ispdinc = static_cast<int>(fspdinc); // 70
        //BaseATK = BaseATK + iatkinc;
        SPD = SPD + ispdinc;
        spdinc = true;
        spdtick = 3;
        gratzhilight();
        cout << name << " now has the agility of a tiger!" << endl;
        getch();
        normalhilight();}  
        
        
        // Debuffs
    if(skill4hp < 0){
        fhpdec = skill4hp; // HP + 20%, 20
        fhpdec = fhpdec * -1;
        fhpdec = fhpdec / 100; // 0.20
        fhpdec = fhpdec * MaxHP; // MaxHP = 350 :: 70
        ihpdec = static_cast<int>(fhpdec); // 70
        eMaxHP = eMaxHP - ihpdec;
        eHP = eHP - ihpdec;
        hpdec = true;
        hpdtick = 3;
        crithilight();
        cout << ename << "'s vitality is lowered!" << endl;
        getch();
        fhpdec = 0;
        ihpdec = 0;
        normalhilight();}
    if(skill4mp < 0){
        fmpdec = skill4mp; // HP + 20%, 20
        fmpdec = fmpdec * -1;
        fmpdec = fmpdec / 100; // 0.20
        fmpdec = fmpdec * MaxMP; // MaxHP = 350 :: 70
        impdec = static_cast<int>(fmpdec); // 70
        eMaxMP = eMaxMP - impdec;
        eMP = eMP - impdec;
        mpdec = true;
        mpdtick = 3;
        crithilight();
        cout << ename << "'s intellect is lowered!" << endl;
        getch();
        fmpdec = 0;
        impdec = 0;
        normalhilight();}
    if(skill4atk < 0){
        fatkdec = skill4atk; // HP + 20%, 20
        fatkdec = fatkdec * -1;
        fatkdec = fatkdec / 100; // 0.20
        fatkdec = fatkdec * BaseATK; // MaxHP = 350 :: 70
        iatkdec = static_cast<int>(fatkdec); // 70
        eATK = eATK - iatkdec;
        atkdec = true;
        atkdtick = 3;
        crithilight();
        cout << ename << "'s strength is lowered!" << endl;
        getch();
        fatkdec = 0;
        iatkdec = 0;
        normalhilight();}
    if(skill4def < 0){
        fdefdec = skill4def; // HP + 20%, 20
        fdefdec = fdefdec * -1;
        fdefdec = fdefdec / 100; // 0.20
        fdefdec = fdefdec * BaseDEF; // MaxHP = 350 :: 70
        idefdec = static_cast<int>(fdefdec); // 70
        eDEF = eDEF - idefdec;
        defdec = true;
        defdtick = 3;
        crithilight();
        cout << ename << "'s armor is lowered!" << endl;
        getch();
        fdefdec = 0;
        idefdec = 0;
        normalhilight();}
    if(skill4spd < 0){
        fspddec = skill4spd; // HP + 20%, 20
        fspddec = fspddec * -1;
        fspddec = fspddec / 100; // 0.20
        fspddec = fspddec * BaseSPD; // MaxHP = 350 :: 70
        ispddec = static_cast<int>(fspddec); // 70
        eSPD = eSPD - ispddec;
        spddec = true;
        spddtick = 3;
        crithilight();
        cout << ename << "'s speed is lowered!" << endl;
        getch();
        fspddec = 0;
        ispddec = 0;
        normalhilight();}            
    if(skill4damage > 0){
        skilldamageplus = skill4damage;
        goto playerroll;}
    
    usingskill = true;
    MP = (MP - skill4mpcost);
    
    if(doublestriketick == 0){
        doublestrike = false;}
    if(doublestrike == false){
        if(SPD > (eSPD * 2)){
            doublestrike = true;
            doublestriketick = 1;
            goto playerturn;}
        else{
            goto enemyturn;}}
    else if(doublestrike == true){
        if(doublestriketick > 0){
            doublestriketick = doublestriketick - 1;}
        goto enemyturn;}
    
    
    
    // Skill 5
    skill5:
    if(MP < skill5mpcost){
        clearscreen();
        cout << "Insufficient MP" << endl;
        getch();
        goto skillchoose;}
    else{
    goto skill5b;}
    
    skill5b:
    if(dotafflicted == true && skill5dot > 0){
        cout << "The enemy is already afflicted with a DoT effect." << endl;
        goto skillchoose;}
    else{}
    MP = MP - skill5mpcost;
    if(skill5dot > 0){
        usingdot = true;
        dotdamage = skill5dot;
        dotticks = skill5dotturn;}
    if(skill5damage < 0){
        fheal = skill5damage; // -15
        fheal = fheal * -1; // 15
        fheal = fheal / 100; // 0.15
        fheal = MaxHP * fheal;  //MaxHP = 350:: 52.5
        heal = static_cast<int>(fheal); // 53
        HP = HP + heal;
        if(HP > MaxHP){
            HP = MaxHP;}
        gratzhilight();
        cout << name << " healed himself for " << heal << "." << endl;
        normalhilight();
        getch();}  
    if(skill5hp > 0){
        fhpinc = skill5hp; // HP + 20%, 20
        fhpinc = fhpinc / 100; // 0.20
        fhpinc = fhpinc * MaxHP; // MaxHP = 350 :: 70
        ihpinc = static_cast<int>(fhpinc); // 70
        MaxHP = MaxHP + ihpinc;
        HP = HP + ihpinc;
        hpinc = true;
        hptick = 3;
        gratzhilight();
        cout << name << " now has the stamina of a bull!" << endl;
        getch();
        normalhilight();}
    if(skill5mp > 0){
        fmpinc = skill5mp; // HP + 20%, 20
        fmpinc = fmpinc / 100; // 0.20
        fmpinc = fmpinc * MaxMP; // MaxHP = 350 :: 70
        impinc = static_cast<int>(fmpinc); // 70
        MaxMP = MaxMP + impinc;
        MP = MP + impinc;
        mpinc = true;
        mptick = 3;
        gratzhilight();
        cout << name << " now has the knowlege of an eagle!" << endl;
        getch();
        normalhilight();}
    if(skill5atk > 0){
        fatkinc = skill5atk; // HP + 20%, 20
        fatkinc = fatkinc / 100; // 0.20
        fatkinc = fatkinc * BaseATK; // MaxHP = 350 :: 70
        iatkinc = static_cast<int>(fatkinc); // 70
        //BaseATK = BaseATK + iatkinc;
        ATK = ATK + iatkinc;
        atkinc = true;
        atktick = 3;
        gratzhilight();
        cout << name << " now has the strength of a bear!" << endl;
        getch();
        normalhilight();}
    if(skill5def > 0){
        fdefinc = skill5def; // HP + 20%, 20
        fdefinc = fdefinc / 100; // 0.20
        fdefinc = fdefinc * BaseDEF; // MaxHP = 350 :: 70
        idefinc = static_cast<int>(fdefinc); // 70
        //BaseATK = BaseATK + iatkinc;
        DEF = DEF + idefinc;
        definc = true;
        deftick = 3;
        gratzhilight();
        cout << name << " now has the armor of a rhino!" << endl;
        getch();
        normalhilight();}
    if(skill5spd > 0){
        fspdinc = skill5spd; // HP + 20%, 20
        fspdinc = fspdinc / 100; // 0.20
        fspdinc = fspdinc * BaseSPD; // MaxHP = 350 :: 70
        ispdinc = static_cast<int>(fspdinc); // 70
        //BaseATK = BaseATK + iatkinc;
        SPD = SPD + ispdinc;
        spdinc = true;
        spdtick = 3;
        gratzhilight();
        cout << name << " now has the agility of a tiger!" << endl;
        getch();
        normalhilight();}  
        
        
        // Debuffs
    if(skill5hp < 0){
        fhpdec = skill5hp; // HP + 20%, 20
        fhpdec = fhpdec * -1;
        fhpdec = fhpdec / 100; // 0.20
        fhpdec = fhpdec * MaxHP; // MaxHP = 350 :: 70
        ihpdec = static_cast<int>(fhpdec); // 70
        eMaxHP = eMaxHP - ihpdec;
        eHP = eHP - ihpdec;
        hpdec = true;
        hpdtick = 3;
        crithilight();
        cout << ename << "'s vitality is lowered!" << endl;
        getch();
        fhpdec = 0;
        ihpdec = 0;
        normalhilight();}
    if(skill5mp < 0){
        fmpdec = skill5mp; // HP + 20%, 20
        fmpdec = fmpdec * -1;
        fmpdec = fmpdec / 100; // 0.20
        fmpdec = fmpdec * MaxMP; // MaxHP = 350 :: 70
        impdec = static_cast<int>(fmpdec); // 70
        eMaxMP = eMaxMP - impdec;
        eMP = eMP - impdec;
        mpdec = true;
        mpdtick = 3;
        crithilight();
        cout << ename << "'s intellect is lowered!" << endl;
        getch();
        fmpdec = 0;
        impdec = 0;
        normalhilight();}
    if(skill5atk < 0){
        fatkdec = skill5atk; // HP + 20%, 20
        fatkdec = fatkdec * -1;
        fatkdec = fatkdec / 100; // 0.20
        fatkdec = fatkdec * BaseATK; // MaxHP = 350 :: 70
        iatkdec = static_cast<int>(fatkdec); // 70
        eATK = eATK - iatkdec;
        atkdec = true;
        atkdtick = 3;
        crithilight();
        cout << ename << "'s strength is lowered!" << endl;
        getch();
        fatkdec = 0;
        iatkdec = 0;
        normalhilight();}
    if(skill5def < 0){
        fdefdec = skill5def; // HP + 20%, 20
        fdefdec = fdefdec * -1;
        fdefdec = fdefdec / 100; // 0.20
        fdefdec = fdefdec * BaseDEF; // MaxHP = 350 :: 70
        idefdec = static_cast<int>(fdefdec); // 70
        eDEF = eDEF - idefdec;
        defdec = true;
        defdtick = 3;
        crithilight();
        cout << ename << "'s armor is lowered!" << endl;
        getch();
        fdefdec = 0;
        idefdec = 0;
        normalhilight();}
    if(skill5spd < 0){
        fspddec = skill5spd; // HP + 20%, 20
        fspddec = fspddec * -1;
        fspddec = fspddec / 100; // 0.20
        fspddec = fspddec * BaseSPD; // MaxHP = 350 :: 70
        ispddec = static_cast<int>(fspddec); // 70
        eSPD = eSPD - ispddec;
        spddec = true;
        spddtick = 3;
        crithilight();
        cout << ename << "'s speed is lowered!" << endl;
        getch();
        fspddec = 0;
        ispddec = 0;
        normalhilight();}            
    if(skill5damage > 0){
        skilldamageplus = skill5damage;
        goto playerroll;}
    
    usingskill = true;
    MP = (MP - skill5mpcost);
    
    if(doublestriketick == 0){
        doublestrike = false;}
    if(doublestrike == false){
        if(SPD > (eSPD * 2)){
            doublestrike = true;
            doublestriketick = 1;
            goto playerturn;}
        else{
            goto enemyturn;}}
    else if(doublestrike == true){
        if(doublestriketick > 0){
            doublestriketick = doublestriketick - 1;}
        goto enemyturn;}
    
    
    // Player Roll
    playerroll:
    fdamage = 0;
    edefrating = 0;
    edefrating2 = 0;
    edefrating3 = 0;
    fdamagef = 0;
    clearscreen();
    cout << "Press any key to roll...\n";
    getch();
    clearscreen();
    roll = mtrand1.randInt( 6 );
    if(roll == 0){
        roll = 1;}
    cout << "You rolled a " << roll << endl;
        
    switch(roll){
        case 1:
             cout << "A frail hit..." << endl;
             break;
        case 6:
             crithilight();
             cout << "A powerful hit!" << endl;
             normalhilight();
             goto playerformula;
             break;
        default:
             break;}
        goto playerformula;
             
             
             
        
        // Player Damage Enemy
        playerdamageenemy:
        cout << "You dealt " << damage << " damage." << endl;
        if(dotticks > 0){
            if(usingdot == true){
            dotafflicted = true;
            fdotdamage = dotdamage;
            fdotdamage = fdotdamage / 100; // 0.10
            fdotdamage = fdotdamage * eMaxHP; // 10% of eHP
            dotdamage = static_cast<int>(fdotdamage);}
            eHP = eHP - dotdamage;
            usingdot = false;
            cout << ename << " takes " << dotdamage << " extra damage." << endl;
            cout << "Ticks left: " << dotticks << endl;
            dotticks = dotticks - 1;}
         if(dotticks == 0){
            dotafflicted = false;}         
        cout << ename << " now has " << eHP << " HP left." << endl;
        getch();
        
        if(doublestriketick == 0){
            doublestrike = false;}
        if(doublestrike == false){
            if(SPD > (eSPD * 2)){
                doublestrike = true;
                doublestriketick = 1;
                goto playerturn;}
            else{
                goto enemyturn;}}
        else if(doublestrike == true){
            if(doublestriketick > 0){
                doublestriketick = doublestriketick - 1;}
            goto enemyturn;}
        
        
        
        
    // Player Attack Formulas
        playerformula:
        fdamage = (ATK * roll);
        if (roll == 6){
           fdamage = (fdamage * 3);}
        edefrating = ((4 * eDEF) / elevel);
        edefrating2 = (100 - edefrating);
        edefrating3 = (edefrating2 / 100);
        fdamagef = (fdamage * edefrating3);
        damage = static_cast<int>(fdamagef);
        if (skilldamageplus > 0){
            skilldamageplus = skilldamageplus / 100;
            skilldamageplus = skilldamageplus + 1;
            floatdamage = (damage * skilldamageplus);        
            damage = static_cast<int>(floatdamage);
            goto pdamagee;}
        else{
            goto pdamagee;}
        pdamagee:
        if (damage < 0){
            damage = 0;}
        else{
            goto minusenemyhp;}
        minusenemyhp:
        eHP = eHP - damage;
        usingskill == false;
        goto playerdamageenemy;
    
    // Enemy's Turn
    enemyturn:    
    efdamage == 0;
    defrating == 0;
    defrating2 == 0;
    defrating3 == 0;
    efdamagef == 0;
    clearscreen();
    if (eHP <= 0){
            
        // Victory
        victory:
        cout << "You have defeated the enemy!" << endl;
        exproll = mtrand1.randInt( 6 );
        if(exproll < 1){
            exproll = 1;}
        cout << "You rolled a " << exproll << endl;
        gEXP = eEXP * exproll;
        EXP = gEXP + EXP;
        gold = gold + eGold;
        cout << "You gain " << gEXP << " EXP, and " << eGold << " gold." << endl;
        MaxHP = consthp;
        MaxMP = constmp;
        ATK = BaseATK;
        DEF = BaseDEF;
        SPD = BaseSPD;
        ofstream statupdate;
        
        // Update Char Regognition
        
        if(!ifstream(charfile.c_str())){
            cout << "Update Error" << endl;
            getch();
            goto end;}
        statupdate.open(charfile.c_str());
        
        // Char Update
        update:
        statupdate << name << endl;
        statupdate << level << endl;
        statupdate << HP << endl;
        statupdate << MaxHP << endl;
        statupdate << MP << endl;
        statupdate << MaxMP << endl;
        statupdate << ATK << endl;
        statupdate << BaseATK << endl;
        statupdate << DEF << endl;
        statupdate << BaseDEF << endl;
        statupdate << SPD << endl;
        statupdate << BaseSPD << endl;
        statupdate << EXP << endl;
        statupdate << NextLevel << endl;
        statupdate << Class1 << endl;
        statupdate << Class2 << endl;
        statupdate << Class3 << endl;
        statupdate << ClassRank << endl;
        statupdate << numofskills << endl;
        statupdate << skillid1 << endl;
        statupdate << skillid2 << endl;
        statupdate << skillid3 << endl;
        statupdate << skillid4 << endl;
        statupdate << skillid5 << endl;
        statupdate << abilityid1 << endl; 
        statupdate << abilityid2 << endl;
        statupdate << abilityid3 << endl;
        statupdate << abilityid4 << endl;
        statupdate << abilityid5 << endl;
        statupdate << gold << endl;
        statupdate.close();
        getch();
        goto begin;}
        
        

        
        
    // Start Enemy AI
    switch(monsterid){
        
        // Goblin Elite
        case 4: 
             
            // Initialization
            epowerslash = false;
            
            // Power Slash
            if(eMP >= 25){
                powerslashroll = mtrand1.randInt( 100 );
                if (powerslashroll >= 60){
                    eMP = eMP - 25;
                    epowerslash = true;}
                else{
                    epowerslash = false;}}
        break;
        
        // Gilkin the Taskmaster
        case 5:
             
            // Initialization
            if(monstervigor >= 1){
                monstervigor = monstervigor - 1;}
            epowerslash = false;
            monsterenrage = false;
            
            // Enrage
            if(eHP <= 600 && monsterenrage == false){
                eATK = eATK * 2;
                monsterenrage = true;
                cout << ename << " unleashes its rage!" << endl;
                getch();}
                
            // Vigor
            if(monstervigor == 0 && eMP >= 15){
                eATK = eATK * 2;
                eMP = eMP - 15;
                cout << ename << " is getting pumped!" << endl;
                getch();
                monstervigor = 3;}
                
            // Power Slash
            if(eMP >= 25){
                powerslashroll = mtrand1.randInt( 100 );
                if (powerslashroll >= 60){
                    eMP = eMP - 25;
                    epowerslash = true;}
                else{
                    epowerslash = false;}}
        break;
        
        // Goblin Medic
        case 6:
             
             // Initialization
             ehealroll = 0;
             ehealchance = 0;
             
             // Heal
             if(eHP <= 80 && eMP >= 20){
                 ehealchance = mtrand1.randInt( 100 );
                 if(ehealchance >= 20){
                     eMP = eMP - 20;
                     ehealvariance = mtrand1.randInt( 20 );
                     ehealamount = 20;
                     ehealroll = mtrand1.randInt( 6 );
                     cout << ename << " rolled a " << ehealroll << "." << endl;
                     if (ehealroll == 0){
                         ehealroll = 1;}
                     ehealamount = ehealamount * ehealroll;
                     ehealamount = ehealamount + ehealvariance;
                     cout << ename << " heals itself for" << ehealamount<< "." << endl;
                     getch();}}
            
        default:
        ;}

    // Continue Enemy Turn
    clearscreen(); 
    if(epowerslash == true){
        cout << "The enemy uses Power Slash!" << endl;}
    else{
        cout << "The enemy attacks!" << endl;}
    getch();
    clearscreen();
    
    
    
    eroll = mtrand1.randInt( 6 );
    if(eroll == 0){
        eroll = 1;}
    cout << ename << " rolled a " << eroll << endl;
        
    switch(eroll){
        case 1:
             cout << "A weak hit!" << endl;
             break;
        case 6:
             crithilight();
             cout << "A harsh blow..." << endl;
             normalhilight();
             break;
        default:
             break;}
        goto enemyformula;    
        
        
        // Enemy Damage Formula
        enemyformula:
        efdamage = (eATK * eroll);
        if (eroll == 6){
           efdamage = (efdamage * 3);}
        defrating = ((4 * DEF) / level);
        defrating2 = (100 - defrating);
        defrating3 = (defrating2 / 100);
        efdamagef = (efdamage * defrating3);
        if(epowerslash == true){
            efdamagef = efdamagef * 1.5;}
        edamage = static_cast<int>(efdamagef);
            
        if (edamage < 0){
            edamage = 1;}
        else{
            goto minusplayerhp;}
        minusplayerhp:
        HP = HP - edamage;
        goto enemydamageplayer;
        
        // Enemy Damage Player
        enemydamageplayer:
        cout << ename << " dealt " << edamage << " damage." << endl;
        cout << "You now have " << HP << " HP left." << endl;
        getch();
        if(edoublestriketick == 0){
            edoublestrike = false;}
        if(edoublestrike == false){
            if(eSPD > (SPD * 2)){
                edoublestrike = true;
                edoublestriketick = 1;
                goto enemyturn;}
            else{
                goto playerturn;}}
        else if(edoublestrike == true){
            if(edoublestriketick > 0){
                edoublestriketick = edoublestriketick - 1;}
            goto playerturn;}
              
    // End
    end:
    clearscreen();
    gratzhilight();
    cout << "Thank you for playing!" << endl;
    normalhilight();
    getch();
}
