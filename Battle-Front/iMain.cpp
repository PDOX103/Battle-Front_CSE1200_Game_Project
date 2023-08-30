# include <iostream>

using namespace std;
# include "iGraphics.h"

#define screenWidth 1200
#define screenHeight 675
#define BatNumbers 10


//////////////////////////////NECESSARY PICTURES///////////////////////////////////////////////
char open[28]={"BACKGROUND\\Battle-Front.bmp"};
char HomeMenu[27]={"BUTTON2\\Menu.bmp"};
char Button[7][27]={"BUTTON2\\play.bmp","BUTTON2\\All characters.bmp","BUTTON2\\instructions.bmp","BUTTON2\\scores.bmp","BUTTON2\\settings.bmp","BUTTON2\\story.bmp","BUTTON2\\exit.bmp"};
char Page[6][30]={"BUTTON2\\input name1.bmp","BUTTON2\\all charactersB.bmp","BUTTON2\\Instructions1.bmp","BUTTON2\\scores1.bmp","BUTTON2\\settings1.bmp","BUTTON2\\story1.bmp"};
char back[6][29]={"BUTTON2\\input name2.bmp","BUTTON2\\all charactersB2.bmp","BUTTON2\\InstructionsBack.bmp","BUTTON2\\scoresBack.bmp","BUTTON2\\settingsBack.bmp","BUTTON2\\storyBack.bmp"};
char musicOnOff[2][21]={"BUTTON2\\musicOn.bmp","BUTTON2\\musicOff.bmp"};

char open2[32]={"BACKGROUND\\selectGround1.bmp"};
char selectGround[2][34]={"BACKGROUND\\selectGround2.bmp","BACKGROUND\\selectGround3.bmp"};
char Battle1[24]={"BACKGROUND\\Ground 5.bmp"};
char Battle2[24]={"BACKGROUND\\battle.bmp"};
char page2[25]={"BUTTON2\\input name3.bmp"};
char back2[25]={"BUTTON2\\input name4.bmp"};
char ScoreBoard[25]={"BUTTON2\\ScoreBoard2.bmp"};
char WinBoard[25]={"BACKGROUND\\WinBoard.bmp"};
char HighScore[23]={"BUTTON2\\High Score.bmp"};
char AUST[20]={"BACKGROUND\\AUST.bmp"};
char Batman[25]={"BATMAN\\Stand\\Batman.bmp"};
char Ironman[26]={"IRONMAN\\Stand\\Ironman.bmp"};




/////////////////////////////////////////////////////////////////////////////////////////CHARACTERS/////////////////////////////////////////////////////////////////////////////////////////////

char Ironman_Stand[24]={"IRONMAN\\Stand\\stand.bmp"};
char Ironman_Kick[3][24]={"IRONMAN\\Kick\\Kick 1.bmp","IRONMAN\\Kick\\Kick 2.bmp","IRONMAN\\Kick\\Kick 3.bmp"};
char Ironman_Punch[2][26]={"IRONMAN\\Punch\\Punch 1.bmp","IRONMAN\\Punch\\Punch 2.bmp"};
char Ironman_SuperPunch[3][26]={"IRONMAN\\Punch\\Punch 1.bmp","IRONMAN\\Punch\\Punch 3.bmp","IRONMAN\\Punch\\Punch 4.bmp"};
char Ironman_Walking[20][25]={"IRONMAN\\Walk\\Walk 1.bmp","IRONMAN\\Walk\\Walk 1.bmp","IRONMAN\\Walk\\Walk 2.bmp","IRONMAN\\Walk\\Walk 2.bmp","IRONMAN\\Walk\\Walk 3.bmp","IRONMAN\\Walk\\Walk 3.bmp","IRONMAN\\Walk\\Walk 4.bmp","IRONMAN\\Walk\\Walk 4.bmp","IRONMAN\\Walk\\Walk 5.bmp","IRONMAN\\Walk\\Walk 5.bmp","IRONMAN\\Walk\\Walk 6.bmp","IRONMAN\\Walk\\Walk 6.bmp","IRONMAN\\Walk\\Walk 7.bmp","IRONMAN\\Walk\\Walk 7.bmp","IRONMAN\\Walk\\Walk 8.bmp","IRONMAN\\Walk\\Walk 8.bmp","IRONMAN\\Walk\\Walk 9.bmp","IRONMAN\\Walk\\Walk 9.bmp","IRONMAN\\Walk\\Walk 10.bmp","IRONMAN\\Walk\\Walk 10.bmp"};
char Ironman_Walking_Rev[20][30]={"IRONMAN\\Walk\\Walk rev 1.bmp","IRONMAN\\Walk\\Walk rev 1.bmp","IRONMAN\\Walk\\Walk rev 2.bmp","IRONMAN\\Walk\\Walk rev 2.bmp","IRONMAN\\Walk\\Walk rev 3.bmp","IRONMAN\\Walk\\Walk rev 3.bmp","IRONMAN\\Walk\\Walk rev 4.bmp","IRONMAN\\Walk\\Walk rev 4.bmp","IRONMAN\\Walk\\Walk rev 5.bmp","IRONMAN\\Walk\\Walk rev 5.bmp","IRONMAN\\Walk\\Walk rev 6.bmp","IRONMAN\\Walk\\Walk rev 6.bmp","IRONMAN\\Walk\\Walk rev 7.bmp","IRONMAN\\Walk\\Walk rev 7.bmp","IRONMAN\\Walk\\Walk rev 8.bmp","IRONMAN\\Walk\\Walk rev 8.bmp","IRONMAN\\Walk\\Walk rev 9.bmp","IRONMAN\\Walk\\Walk rev 9.bmp","IRONMAN\\Walk\\Walk rev 10.bmp","IRONMAN\\Walk\\Walk rev 10.bmp"};
char Iron_Power[7][25]={"IRONMAN\\Power\\p1.bmp","IRONMAN\\Power\\p1.bmp","IRONMAN\\Power\\p2.bmp","IRONMAN\\Power\\p3.bmp","IRONMAN\\Power\\p4.bmp","IRONMAN\\Power\\p5.bmp","IRONMAN\\Power\\p6.bmp"};

char Batman_Stand[23]={"BATMAN\\Stand\\stand.bmp"};
char Batman_Kick_Rev[3][27]={"BATMAN\\Kick\\Kick rev 1.bmp","BATMAN\\Kick\\Kick rev 2.bmp","BATMAN\\Kick\\Kick rev 3.bmp"};
char Batman_Punch_Rev[2][29]={"BATMAN\\Punch\\Punch rev 1.bmp","BATMAN\\Punch\\Punch rev 2.bmp"};
char Batman_Super_Punch_Rev[2][29]={"BATMAN\\Punch\\Punch rev 3.bmp","BATMAN\\Punch\\Punch rev 4.bmp"};
char Batman_Stand_Rev[28]={"BATMAN\\Stand\\stand rev.bmp"};
char Batman_Walking[18][27]={"BATMAN\\Walk\\Walk 1.bmp","BATMAN\\Walk\\Walk 1.bmp","BATMAN\\Walk\\Walk 2.bmp","BATMAN\\Walk\\Walk 2.bmp","BATMAN\\Walk\\Walk 3.bmp","BATMAN\\Walk\\Walk 3.bmp","BATMAN\\Walk\\Walk 4.bmp","BATMAN\\Walk\\Walk 4.bmp","BATMAN\\Walk\\Walk 5.bmp","BATMAN\\Walk\\Walk 5.bmp","BATMAN\\Walk\\Walk 6.bmp","BATMAN\\Walk\\Walk 6.bmp","BATMAN\\Walk\\Walk 7.bmp","BATMAN\\Walk\\Walk 7.bmp","BATMAN\\Walk\\Walk 8.bmp","BATMAN\\Walk\\Walk 8.bmp","BATMAN\\Walk\\Walk 9.bmp","BATMAN\\Walk\\Walk 9.bmp"};
char Batman_Walking_Rev[18][27]={"BATMAN\\Walk\\Walk rev 1.bmp","BATMAN\\Walk\\Walk rev 1.bmp","BATMAN\\Walk\\Walk rev 2.bmp","BATMAN\\Walk\\Walk rev 2.bmp","BATMAN\\Walk\\Walk rev 3.bmp","BATMAN\\Walk\\Walk rev 3.bmp","BATMAN\\Walk\\Walk rev 4.bmp","BATMAN\\Walk\\Walk rev 4.bmp","BATMAN\\Walk\\Walk rev 5.bmp","BATMAN\\Walk\\Walk rev 5.bmp","BATMAN\\Walk\\Walk rev 6.bmp","BATMAN\\Walk\\Walk rev 6.bmp","BATMAN\\Walk\\Walk rev 7.bmp","BATMAN\\Walk\\Walk rev 7.bmp","BATMAN\\Walk\\Walk rev 8.bmp","BATMAN\\Walk\\Walk rev 8.bmp","BATMAN\\Walk\\Walk rev 9.bmp","BATMAN\\Walk\\Walk rev 9.bmp"};
char Batman_Power[7][28]={"BATMAN\\Power\\b1.bmp","BATMAN\\Power\\b2.bmp","BATMAN\\Power\\b3.bmp","BATMAN\\Power\\b4.bmp","BATMAN\\Power\\b5.bmp","BATMAN\\Power\\b6.bmp","BATMAN\\Power\\b7.bmp"};

char Batfly[9][20]={"BACKGROUND\\Bat1.bmp","BACKGROUND\\Bat2.bmp","BACKGROUND\\Bat3.bmp","BACKGROUND\\Bat4.bmp","BACKGROUND\\Bat5.bmp","BACKGROUND\\Bat6.bmp","BACKGROUND\\Bat7.bmp","BACKGROUND\\Bat8.bmp","BACKGROUND\\Bat9.bmp"};


int gameState = -1;
int nextPage= -2;
int flag=0;
int flag1=0;
int flag2=0;
int flag3=0;
int removeMousePointer=-1;
int menu=-1;
int changeBack=0;
int backButton=-1;
int music=-1;

int loadIndex = 0;
int load[6];
bool loadfinish = false;


bool musicON = true;
int nextStep = -1;
int pic=-1;
int ground =-1;
int backButton2=-1;
int nextPage2=-1;

////////////////STRUCTURE FOR FLYING BATS/////////
struct Fly
{
	int bat_x;
	int bat_y;
	int batIndex;
	bool batShow;
};
Fly Bat[BatNumbers]; 
int batCanFly = -1;


/////////////BATMAN VARIABLES/////////
bool batStand = true;
bool batWalk = true;
bool batWalkF = true;
bool batWalkB = true;
int batStandCount = 0;
int batIndex1 = 0;
int batIndex2 = 0;
int batIndex3 = 0;
int batIndex4 = 0;
int batIndex5 = 0;
int batIndex6 = 0;
int BatCordinate_X = 800;
int BatCordinate_Y = 40;
bool batPunch = true;
bool batSuperPunch = true;
bool batKick = true;
bool batPower = true;


/////////////IRONMAN VARIABLES/////////
bool ironStand = true;
bool ironWalk = true;
bool ironWalkF = true;
bool ironWalkB = true;
int ironStandCount = 0;
int ironIndex1 = 0;
int ironIndex2 = 0;
int ironIndex3 = 0;
int ironIndex4 = 0;
int ironIndex5 = 0;
int ironIndex6 = 0;
int IronCordinate_X = 300;
int IronCordinate_Y = 40;
bool ironPunch = true;
bool ironSuperPunch = true;
bool ironKick = true;
bool ironPower = true;


/////////TO CONTROL POWER BUTTON/////////////
bool Power_Key = true;


//////////VARIABLES FOR FILE////////////
int Ironman_Health = 100;
int Batman_Health = 100;
char health_s[1000];
char point_s[1000];
int Ironman_score = 0;
int Batman_score = 0;
int point1=0;
int point2=0;
char scores1[15],scores2[15],score11[10],score22[10],score33[10];
int score1, score2, score3;
int indexNumber = 0;
int indexNumber2 = 0;


int score;
char name1[30];
char name2[30];



struct scores
{
	char name[20];
	int score;

}s[20];

char hs1[20];
char hs2[20];
char hs3[20];



void sorted() 
{
    struct scores s[120];
    FILE *fp;
    int i = 0, l, j;
    char ch;

    fp = fopen("High scores.txt", "r");

    if (fp == NULL) {
        printf("Error opening file 'High scores.txt'\n");
        return;
    }

    ////////////////////// Read the data from the file//////////////////////////////
    while (fscanf(fp, "%19s %d", s[i].name, &s[i].score) == 2) {
        i++;
    }

    l = i;

    fclose(fp);

    ////////////////////////Sorting///////////////////////////////
    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < l - i - 1; j++) {
            if (s[j].score > s[j + 1].score) {
                struct scores temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    /////////////////////// Write the sorted data to the file "sortedscore.txt"////////////////////////
    fp = fopen("sortedscore.txt", "w");

    if (fp == NULL) {
        printf("Error opening file 'sortedscore.txt' for writing\n");
        return;
    }

    for (i = 0; i < l; i++) {
        fprintf(fp, "%s %d\n", s[i].name, s[i].score);
    }

    fclose(fp);
}



void highfunction() 
{
    FILE *dp;
    struct scores high_scores[120];
    int i = 0;

    dp = fopen("sortedscore.txt", "r");
    
    ///////////////////////Read player names and scores from the file //////////////////
    while (i < 120 && fscanf(dp, "%s %d", high_scores[i].name, &high_scores[i].score) == 2) {
        i++;
    }

    fclose(dp);

    if (i >= 1) {
        strcpy(hs1, high_scores[i - 1].name);
        score1 = high_scores[i - 1].score;

        if (i >= 2) {
            strcpy(hs2, high_scores[i - 2].name);
            score2 = high_scores[i - 2].score;

            if (i >= 3) {
                strcpy(hs3, high_scores[i - 3].name);
                score3 = high_scores[i - 3].score;
            } else {
                hs3[0] = '\0';
                score3 = 0;
            }
        } else {
            hs2[0] = '\0';
            hs3[0] = '\0';
            score2 = 0;
            score3 = 0;
        }
    } else {
        hs1[0] = '\0';
        hs2[0] = '\0';
        hs3[0] = '\0';
        score1 = 0;
        score2 = 0;
        score3 = 0;
        ////////////printf("There are no high scores in the file.\n");//////////////////////
    }
}




void lifePoints()
{
	iSetColor(0, 0, 0);
	iText(450, 615, "H : ", GLUT_BITMAP_TIMES_ROMAN_24);
	_itoa_s(Ironman_Health, health_s, 10); //////////// convert int to string _itoa(int, string, base)
	iText(500, 615, health_s, GLUT_BITMAP_TIMES_ROMAN_24);//for health

	iText(650, 615, "H : ", GLUT_BITMAP_TIMES_ROMAN_24);
	_itoa_s(Batman_Health, point_s, 10);////////////////convert int to string _itoa(int, string, base)
	iText(700, 615, point_s, GLUT_BITMAP_TIMES_ROMAN_24);//for score
}



///////////////////////////////////////////////////COLLISION FOR IRONMAN///////////////////////////////////////////////////////////
void IroncollisionChecker()
{
    if (BatCordinate_X + 100 >= IronCordinate_X && BatCordinate_X <= IronCordinate_X + 100 && BatCordinate_Y + 100 >= IronCordinate_Y && BatCordinate_Y <= IronCordinate_Y + 100)
    {
        

        if ((ironStand || ironWalk) && (!batStand || !batWalk))
        {
			if (IronCordinate_X < BatCordinate_X) 
			{
				IronCordinate_X = IronCordinate_X - 10;
			} 
			
            if (batPunch || batSuperPunch || batKick )
            {
                if (Ironman_Health > 0)
                {
                    Ironman_Health -= 1;
                    Batman_score += 10;
                }
            }
			else if(batPower)
			{
				Ironman_Health -= 1;
                Batman_score += 25;
			}
        }
    }
}


///////////////////////////////////////////////////COLLISION FOR BATMAN///////////////////////////////////////////////////////////
void BatCollisionChecker()
{
    if (IronCordinate_X + 100 >= BatCordinate_X && IronCordinate_X <= BatCordinate_X + 100 && IronCordinate_Y + 100 >= BatCordinate_Y && IronCordinate_Y <= BatCordinate_Y + 100)
    {

        if ((!ironStand || !ironWalk) && (batStand || batWalk))
        {
			if (BatCordinate_X > IronCordinate_X) 
			{
				BatCordinate_X = BatCordinate_X + 10;
			} 
            if (ironPunch || ironSuperPunch || ironKick)
            {
				
                if (Batman_Health > 0)
                {
                    Batman_Health -= 1;
                    Ironman_score += 10;
                }
            }
			else if(ironPower)
			{
				Batman_Health -= 1;
                Ironman_score += 25;
			}
        }
    }
}



void IRONMAN1()
{	////////IRONMAN STAND///////
	if(ironStand)
	{		
		iShowBMP2(IronCordinate_X, IronCordinate_Y, Ironman_Stand,0);	
	}
	if(ironWalk)
	{	////////IRONMAN WALK LEFT///////
		if(ironWalkF)
    	{
    		if(!ironStand)
    		{
    			iShowBMP2(IronCordinate_X, IronCordinate_Y, Ironman_Walking_Rev[ironIndex1],0);
    			ironStandCount++;
    			if(ironStandCount >= 20)
    			{
    				ironStand = true;
    				ironStandCount = 0;
    				ironIndex1 = 0;
    			}
    		}
    	}
		////////IRONMAN WALK RIGHT///////
		else if(ironWalkB)
    	{
    		if(!ironStand)
    		{
    			iShowBMP2(IronCordinate_X, IronCordinate_Y, Ironman_Walking[ironIndex2],0);
    			ironStandCount++;
    			if(ironStandCount >= 20)
    			{
    				ironStand = true;
    				ironStandCount = 0;
    				ironIndex2 = 0;
    			}
    		}
    	}
		////////IRONMAN PUNCH///////
		else if(ironPunch)
		{
			if(!ironStand)
    		{
    			iShowBMP2(IronCordinate_X, IronCordinate_Y, Ironman_Punch[ironIndex3],0);
				ironStandCount++;
    			if(ironStandCount >= 3)
    			{
    				ironStand = true;
    				ironIndex3 = 0;
					ironStandCount = 0;
    			}
    		}
		}
		////////IRONMAN SUPER PUNCH///////
		else if(ironSuperPunch)
		{
			if(!ironStand)
    		{
    			iShowBMP2(IronCordinate_X, IronCordinate_Y, Ironman_SuperPunch[ironIndex4],0);
				ironStandCount++;
    			if(ironStandCount >= 10)
    			{
    				ironStand = true;
					ironStandCount = 0;
    				ironIndex4 = 0;
    			}
    		}
		}
		////////IRONMAN KICK///////
		else if(ironKick)
		{
			if(!ironStand)
    		{
    			iShowBMP2(IronCordinate_X, IronCordinate_Y, Ironman_Kick[ironIndex5],0);
				ironStandCount++;
    			if(ironStandCount >= 13)
    			{
    				ironStand = true;
					ironStandCount = 0;
    				ironIndex5 = 0;
    			}
    		}
		}
		////////IRONMAN POWER///////
		else if(ironPower)
		{
			if(!ironStand)
    		{
    			iShowBMP2(IronCordinate_X, IronCordinate_Y, Iron_Power[ironIndex6],0);
				ironStandCount++;
    			if(ironStandCount >= 15)
    			{
    				ironStand = true;
					ironStandCount = 0;
    				ironIndex6 = 0;
    			}
    		}
		}
	}	
}

void BATMAN1()
{	////////BATMAN WALK///////
	if(batStand)
	{		
		iShowBMP2(BatCordinate_X, BatCordinate_Y, Batman_Stand_Rev,0);	
	}
	if(batWalk)
	{	////////BATMAN WALK LEFT///////
		if(batWalkF)
    	{
    		if(!batStand)
    		{
    			iShowBMP2(BatCordinate_X, BatCordinate_Y, Batman_Walking_Rev[batIndex1],0);
    			batStandCount++;
    			if(batStandCount >= 18)
    			{
    				batStand = true;
    				batStandCount = 0;
    				batIndex1 = 0;
    			}
    		}
    	}
		////////BATMAN WALK RIGHT///////
		else if(batWalkB)
    	{
    		if(!batStand)
    		{
    			iShowBMP2(BatCordinate_X, BatCordinate_Y, Batman_Walking[batIndex2],0);
    			batStandCount++;
    			if(batStandCount >= 18)
    			{
    				batStand = true;
    				batStandCount = 0;
    				batIndex2 = 0;
    			}
    		}
    	}
		////////BATMAN PUNCH///////
		else if(batPunch)
		{
			if(!batStand)
    		{
    			iShowBMP2(BatCordinate_X, BatCordinate_Y, Batman_Punch_Rev[batIndex3],0);
				batStandCount++;
    			if(batStandCount >= 3)
    			{
    				batStand = true;
    				batIndex3 = 0;
					batStandCount = 0;
    			}
    		}
		}
		////////BATMAN SUPER PUNCH///////
		else if(batSuperPunch)
		{
			if(!batStand)
    		{
    			iShowBMP2(BatCordinate_X, BatCordinate_Y, Batman_Super_Punch_Rev[batIndex4],0);
				batStandCount++;
    			if(batStandCount >= 8)
    			{
    				batStand = true;
					batStandCount = 0;
    				batIndex4 = 0;
    			}
    		}
		}
		////////BATMAN KICK///////
		else if(batKick)
		{
			if(!batStand)
    		{
    			iShowBMP2(BatCordinate_X, BatCordinate_Y, Batman_Kick_Rev[batIndex5],0);
				batStandCount++;
    			if(batStandCount >= 13)
    			{
    				batStand = true;
					batStandCount = 0;
    				batIndex5 = 0;
    			}
    		}
		}
		////////BATMAN POWER///////
		else if(batPower)
		{
			if(!batStand)
    		{
    			iShowBMP2(BatCordinate_X-260, BatCordinate_Y, Batman_Power[batIndex6],0);
				batStandCount++;
    			if(batStandCount >= 20)
    			{
    				batStand = true;
					batStandCount = 0;
    				batIndex6 = 0;
    			}
    		}
		}
	}	
}


///////////////////////////////////////////////FOR FLYING BATS////////////////////////////////////////////////////////////////////////////////
void batMovement()
{	
	for(int i=0; i<BatNumbers; i++)
	{
		if(Bat[i].batShow)
		{
			iShowBMP2(Bat[i].bat_x, Bat[i].bat_y+250, Batfly[Bat[i].batIndex], 0);
		}
	}
}


void change()
{
	for(int i=0; i<BatNumbers; i++)
	{
		Bat[i].bat_x -= 15;
		if(Bat[i].bat_x <= 0)
		{
			Bat[i].bat_x =(screenWidth + 5);
			Bat[i].bat_y = rand() % (screenHeight - 100);
		}
		Bat[i].batIndex++;
		if(Bat[i].batIndex >= 9)
		{
			Bat[i].batIndex = 0;
		}
	}
}

void setBatVariables()
{
	for(int i=0; i<BatNumbers; ++i)
	{
		Bat[i].bat_x = rand() % screenWidth;
		Bat[i].bat_y = rand() % 600;
		Bat[i].batIndex = rand() % 9;
		Bat[i].batShow = true;
	}
}




/////////////FOR LOADING/////////////////
void gameStart()
{               

  if (loadfinish == true)
  {
    menu = 0;
	musicON = true;
	if(musicON)
	{
		PlaySound("MUSIC\\music 1.wav", NULL, SND_LOOP | SND_ASYNC);
	}

  }
}


void loading()
{
  loadIndex++;
  if (loadIndex >= 6)
  {
    loadfinish = true;
  }
}


void changeButtonColor()
{
	for(flag=0; flag<7; flag++)
	{
		if(flag==gameState)
		{
			iShowBMP(0,0,Button[flag]);
			removeMousePointer=0;
			break;
		}
	}
}


void changePage()
{
	for(flag1=0; flag1<6; flag1++)
	{
		if(flag1==nextPage)
		{
			iShowBMP(0,0,Page[flag1]);
			removeMousePointer=1;
			menu=1;
			break;
		}
	}
}


void goBack()
{
	for(flag2=0; flag2<6; flag2++)
	{
		if(flag2==gameState)
		{
			iShowBMP(0,0,back[flag2]);
			break;
		}
	}
}


void MUSIC_ON_OFF()
{
	if(nextPage==4)
	{
		if(music==0)
		{
			iShowBMP(0,0,musicOnOff[music]);
		}
		else if(music==1)
		{
			iShowBMP(0,0,musicOnOff[music]);
		}
	}
}


void Enter_Name()
{
	iSetColor(0,0,0);
	iText(502, 380, name1, GLUT_BITMAP_TIMES_ROMAN_24);
}
void Enter_Name2()
{
	iSetColor(0,0,0);
	iText(502, 380, name2, GLUT_BITMAP_TIMES_ROMAN_24);
}


void Character_Selection()
{
	for(flag3=0; flag3<2; flag3++)
	{
		if(flag3==nextStep)
		{
			iShowBMP(0,0,selectGround[flag3]);
			break;
		}
	}
	
}



/*
function iDraw() is called again and again by the system.

*/

void iDraw()
{
	//place your drawing codes here
	iClear();
	point1=Ironman_score;
	point2=Batman_score;
	itoa(Ironman_score,scores1,10);
	itoa(Batman_score,scores2,10);
	itoa(score1,score11,10);
	itoa(score2,score22,10);
	itoa(score3,score33,10);


	/////For LOADING////////
	if (menu == -1)
	{
		if(musicON)
		{
		    musicON = false;
			PlaySound(0, 0, 0);
		}

		iShowImage(0, 0, 1200, 675, load[loadIndex]);
		gameStart();
		
	}


	/////HOME MENU////////
	else if(menu==0)
	{

		if(gameState == -1)
		{
			iShowBMP(0, 0, HomeMenu);
			sorted();
			highfunction();
		}
		else if(gameState == 0)
		{
			changeButtonColor();
		}
		else if(gameState == 1)
		{
			changeButtonColor();
		}
		else if(gameState == 2)
		{
			changeButtonColor();
		}
		else if(gameState == 3)
		{
			changeButtonColor();
		}
		else if(gameState == 4)
		{
			changeButtonColor();
		}
		else if(gameState == 5)
		{
			changeButtonColor();
		}
		else if(gameState == 6)
		{
			changeButtonColor();
		}
		iShowBMP2(1078,555,AUST,0);
		
	}

	


////////////////////////// CHANGING PAGE//////////////////////////////
	if(nextPage==0)
	{
		changePage();
	}
	else if(nextPage==1)
	{
		changePage();
	}
	else if(nextPage==2)
	{
		changePage();
		iSetColor(255,255,255);
		iText(10,500,"MARVEL CHARACTER",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(862,561,"DC CHARACTER",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0,255,0);
		iText(45,23,"Note: You need two keyboards to play and You can't play by holding down the key. You need to tap the key to play.",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if(nextPage==3)
	{
		changePage();
		iShowBMP(150,70,HighScore);
		iSetColor(255,255,255);

		iText(260,400,hs1,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(655,400,score11,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(260,350,hs2,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(655,350,score22,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(260,300,hs3,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(655,300,score33,GLUT_BITMAP_TIMES_ROMAN_24);

		iShowBMP2(940,90,Batman,0);
		iShowBMP2(190,90,Ironman,0);
	}
	else if(nextPage==4)
	{
		changePage();
	}
	else if(nextPage==5)
	{
		changePage();
	}
	else if(nextPage==-1)
	{
		exit(0);
	}
	

///////////////CHANGING COLOR OF BACK BUTTON/////////////////
	
	if(backButton==0)
	{
		if(nextPage==0)
		{
			goBack();
		}
		else if(nextPage==1)
		{
			goBack();
		}
		else if(nextPage==2)
		{
			goBack();

			iSetColor(255,255,255);
			iText(10,500,"MARVEL CHARACTER",GLUT_BITMAP_TIMES_ROMAN_24);
			iText(862,561,"DC CHARACTER",GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(0,255,0);
			iText(45,23,"Note: You need two keyboards to play and You can't play by holding down the key. You need to tap the key to play.",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if(nextPage==3)
		{
			goBack();
			iShowBMP(150,70,HighScore);
			iSetColor(255,255,255);

			iText(260,400,hs1,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(655,400,score11,GLUT_BITMAP_TIMES_ROMAN_24);

			iText(260,350,hs2,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(655,350,score22,GLUT_BITMAP_TIMES_ROMAN_24);

			iText(260,300,hs3,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(655,300,score33,GLUT_BITMAP_TIMES_ROMAN_24);

			iShowBMP2(940,90,Batman,0);
			iShowBMP2(190,90,Ironman,0);
		}
		else if(nextPage==4)
		{
			goBack();
		}
		else if(nextPage==5)
		{
			goBack();
		}
	}

	/////Function call of ON/OFF music////////
	MUSIC_ON_OFF();


	/////Function call of INOUT NAME 1////////
	if(menu==1 && nextPage==0)
	{
		Enter_Name();	
	}

	if(pic==0)
	{
		iShowBMP(0,0,page2);
		menu=2;
		removeMousePointer = 2;
	}


	/////Function call of INOUT NAME 2////////
	if(menu==2 && nextPage==0)
	{
		Enter_Name2();	
	}

	if(menu == 2)
	{
		if(backButton2==0)
		{
			iShowBMP(0,0,back2);
		}
	}



	if(pic==1)
	{
		iShowBMP(0,0,open2);
		menu=3;
		removeMousePointer = 3;
	}

	if(menu==3)
	{
		if(nextStep==0)
		{
			Character_Selection();
		}
		if(nextStep==1)
		{
			Character_Selection();
		}
	}
	


	if(ground == 0)
	{
		iShowBMP(0,0,Battle1);
		removeMousePointer = 4;
		menu=4;
		if(musicON)
		{
			musicON = false;
			PlaySound(0, 0, 0);
		}
	}

	if(ground == 1)
	{
		iShowBMP(0,0,Battle2);
		removeMousePointer = 4;
		menu=4;
		if(musicON)
		{
			musicON = false;
			PlaySound(0, 0, 0);
		}
	}


	if(ground == 2)
	{
		iShowBMP(0,0,Battle1);
		removeMousePointer = 5;
		menu=5;
		if(musicON)
		{
			musicON = false;
			PlaySound(0, 0, 0);
		}
	}


	if(ground == 3)
	{
		iShowBMP(0,0,Battle2);
		removeMousePointer = 5;
		menu=5;
		if(musicON)
		{
			musicON = false;
			PlaySound(0, 0, 0);
		}
		
	}



	////////////////////////ROUND 1//////////////////////
	if(menu==4 && ground==0)
	{
		batMovement();
		IRONMAN1();
		BATMAN1();
		IroncollisionChecker();
		BatCollisionChecker();
		iShowBMP2(325,530,ScoreBoard,0);
		lifePoints();
		Power_Key=false;

		iSetColor(0,0,0);
		iText(450,565,name1,GLUT_BITMAP_TIMES_ROMAN_24);	
		iText(660,565,name2,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(350,565,scores1,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(808,565,scores2,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,0);
		iFilledRectangle(1030,612,135,40);
		iSetColor(0,0,0);
		iText(1040,625,"ROUND : 1",GLUT_BITMAP_TIMES_ROMAN_24);

		if(Ironman_Health==0 || Batman_Health==0)
		{
			ground=3;
			Ironman_Health=200;
		    Batman_Health=200;
			IronCordinate_X = 300;
			IronCordinate_Y = 40;
			BatCordinate_X = 800;
			BatCordinate_Y = 40;
		}
	}


	////////////////////////ROUND 1//////////////////////
	if(menu==4 && ground==1)
	{
		batMovement();
		IRONMAN1();
		BATMAN1();
		IroncollisionChecker();
		BatCollisionChecker();
		iShowBMP2(325,530,ScoreBoard,0);
		lifePoints();
		Power_Key=false;

		iSetColor(0,0,0);
		iText(450,565,name1,GLUT_BITMAP_TIMES_ROMAN_24);	
		iText(660,565,name2,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(350,565,scores1,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(808,565,scores2,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,0);
		iFilledRectangle(1030,612,135,40);
		iSetColor(0,0,0);
		iText(1040,625,"ROUND : 1",GLUT_BITMAP_TIMES_ROMAN_24);

		if(Ironman_Health==0 || Batman_Health==0)
		{
			ground=2;
			Ironman_Health=200;
		    Batman_Health=200;
			IronCordinate_X = 300;
			IronCordinate_Y = 40;
			BatCordinate_X = 800;
			BatCordinate_Y = 40;
		}
	}


	////////////////////////ROUND 2//////////////////////
	if(menu==5)
	{
		batMovement();
		IRONMAN1();
		BATMAN1();
		IroncollisionChecker();
		BatCollisionChecker();
		iShowBMP2(325,530,ScoreBoard,0);
		lifePoints();
		Power_Key=true;

		iSetColor(0,0,0);
		iText(450,565,name1,GLUT_BITMAP_TIMES_ROMAN_24);	
		iText(660,565,name2,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(340,565,scores1,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(798,565,scores2,GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(255,255,0);
		iFilledRectangle(1030,612,135,40);
		iSetColor(0,0,0);
		iText(1040,625,"ROUND : 2",GLUT_BITMAP_TIMES_ROMAN_24);

		if(Ironman_Health==0 || Batman_Health==0)
		{
			menu=6;
		}
	}


	///////////////WINNING BOARD//////////////////
	if(menu==6)
	{
		iShowBMP(0,0,WinBoard);

		if(Ironman_score>Batman_score)
		{
			iSetColor(255,255,255);
			iText(500,480,name1,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(500,405,scores1,GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else
		{
			iSetColor(255,255,255);
			iText(500,480,name2,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(500,405,scores2,GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}
		
	
}

void iPassiveMouse(int mx, int my)
{
//////////////////////////////////////////////////////////When menu=0, changing button color of MAIN MENU will work///////////////////////////////////////////////////////////////////////////
	if(menu==0)
	{
		if(mx>=504 && mx<=637 && my>=509 && my<=554)
		{
			gameState=0;
		}
		else if(mx>=350 && mx<=793 && my>=433 && my<=474)
		{
			gameState=1;
		}
		else if(mx>=393 && mx<=746 && my>=356 && my<=393)
		{
			gameState=2;
		}
		else if(mx>=474 && mx<=671 && my>=273 && my<=313)
		{
			gameState=3;
		}
		else if(mx>=452 && mx<=690 && my>=193 && my<=233)
		{
			gameState=4;
		}
		else if(mx>=493 && mx<=653 && my>=114 && my<=152)
		{
			gameState=5;
		}
		else if(mx>=516 && mx<=630 && my>=34 && my<=73)
		{
			gameState=6;
		}
		else
			gameState=-1;
	}


////////////////////////////////////////////////When menu=1, changing button color of BACK and MUSIC ON/OFF will work////////////////////////////////////////////////////////////////////////
	
	if(menu==1)
	{
		if(mx>=13 && mx<=136 && my>=630 && my<=660)
		{
			backButton=0;
		}
		else if(mx>=468 && mx<=686 && my>=398 && my<=462)
		{
			music=0;
		}
		else if(mx>=468 && mx<=686 && my>=297 && my<=361)
		{
			music=1;
		}
		else
		{
			backButton=-1;
			music=-1;
		}
	}

/////////////////////////////////////////////When menu=2, changing button color of BACK of NAME INPUT 2 page will work////////////////////////////////////////////////////////////////////////
	if(menu==2)
	{
		if(mx>=13 && mx<=136 && my>=630 && my<=660)
		{
			backButton2=0;
		}
		else
		{
			backButton2=-1;
		}
	}

/////////////////////////////////////////////When menu=3, changing button color of SELECTING GROUND will work////////////////////////////////////////////////////////////////////////
	if(menu==3)
	{
		if(mx>=164 && mx<=454 && my>=234 && my<=427)
		{
			nextStep = 0;
		}
		else if(mx>=744 && mx<=1037 && my>=234 && my<=427)
		{
			nextStep = 1;
		}
		else
		{
			nextStep = -1;
		}
	}
	
}


/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	cout<<"x= "<<mx<<" y= "<<my<<endl;
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
//////////////////////////////////////When removeMousePointer=0, just the mouse pointer of MAIN MENU buttons will work/////////////////////////////////////////////////
	if(removeMousePointer==0)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=504 && mx<=637 && my>=509 && my<=554)
			{
				nextPage=0;
			}
			else if(mx>=350 && mx<=793 && my>=433 && my<=474)
			{
				nextPage=1;
			}
			else if(mx>=393 && mx<=746 && my>=356 && my<=393)
			{
				nextPage=2;
			}
			else if(mx>=474 && mx<=671 && my>=273 && my<=313)
			{
				nextPage=3;
			}
			else if(mx>=452 && mx<=690 && my>=193 && my<=233)
			{
				nextPage=4;
			}
			else if(mx>=493 && mx<=653 && my>=114 && my<=152)
			{
				nextPage=5;
			}
			else if(mx>=516 && mx<=630 && my>=34 && my<=73)
			{
				nextPage=-1;
			}
		}
	}

//////////////////////////////////////When removeMousePointer=1, just the mouse pointer of BACK button from menu buttons will work/////////////////////////////////////////////////
	if(removeMousePointer==1)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=13 && mx<=136 && my>=630 && my<=660)
			{
					menu=0;
					gameState=-1;
					nextPage=-2;
					backButton=-1;
					removeMousePointer=-1;
			}
				
		}
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(nextPage==4)
			{
				if(mx>=468 && mx<=686 && my>=398 && my<=462)
				{
					musicON = true;
					if(musicON)
					{
						PlaySound("MUSIC\\music 1.wav", NULL, SND_LOOP | SND_ASYNC);
					}
				}
				else if(mx>=468 && mx<=686 && my>=297 && my<=361)
				{
					if(musicON)
					{
						musicON = false;
						PlaySound(0, 0, 0);
					}
				}
			}
				
		}
	}

//////////////////////////////////////When removeMousePointer=2, just the mouse pointer of BACK button from NAME INPUT 2 will work/////////////////////////////////////////////////
	if(removeMousePointer==2)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=13 && mx<=136 && my>=630 && my<=660)
			{
				menu=1;
				backButton2=-1;
				backButton=0;
				pic=-1;
				removeMousePointer=1;
			}
		}
	}

//////////////////////////////////////When removeMousePointer=3, just the mouse pointer of SELECTING GROUND buttons will work/////////////////////////////////////////////////
	if(removeMousePointer==3)
	{
		if(mx>=164 && mx<=454 && my>=234 && my<=427)
		{
			ground = 0;
		}
		else if(mx>=744 && mx<=1037 && my>=234 && my<=427)
		{
			ground = 1;
		}
	}


}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(menu==1 && nextPage==0)
	{
		/////////////////TO ENTER NAME1/////////////////
		if (key != '\b' )
		{
			name1[indexNumber] = key;
			indexNumber++;
			name1[indexNumber] = '\0';
		}
		else
		{
			if(indexNumber <= 0)
				indexNumber=0;
			else
				indexNumber--;

			name1[indexNumber] = '\0';
		}
	}
	////////////if pic=0, it will take you in menu 2////////////
	if(menu==1 && nextPage==0)
	{
		if(key==' ')
		{
			pic = 0;
		}
	}

	if(menu==2 && nextPage==0)
	{
		/////////////////TO ENTER NAME2/////////////////
		if (key != '\b')
		{
			name2[indexNumber2] = key;
			indexNumber2++;
			name2[indexNumber2] = '\0';
		}
		else
		{
			if(indexNumber2 <= 0)
				indexNumber2=0;
			else
				indexNumber2--;

			name2[indexNumber2] = '\0';
		}
	}


	if(menu==2 && nextPage==0)
	{
		if(key==' ')
		{
			pic = 1;
		}
	}


	if(menu==4 || menu==5)
	{	/////IRON MAN WALK//// 
		if(key=='a')
		{
			if(IronCordinate_X<=0)
			{
				IronCordinate_X=0;
			}
			else{
			IronCordinate_X -= 8;
			}
			ironIndex1++;
			if(ironIndex1 >= 20)
				ironIndex1=0;

			ironStand = false;
			ironWalk = true;
			ironWalkF = true;
			ironWalkB = false;
			ironPunch = false;
			ironSuperPunch = false;
			ironKick = false;
			ironPower = false;
		}
		/////IRON MAN WALK//// 
		if(key=='d')
		{
			if(IronCordinate_X>=800)
			{
				IronCordinate_X=800;
			}
			else
			{
				IronCordinate_X += 8;
			}
			

			ironIndex2++;
			if(ironIndex2 >= 20)
				ironIndex2=0;

			ironStand = false;
			ironWalk = true;
			ironWalkF = false;
			ironWalkB = true;
			ironPunch = false;
			ironSuperPunch = false;
			ironKick = false;
			ironPower = false;
		}
		/////IRON MAN PUNCH/////
		if(key=='w')
		{
			if(IronCordinate_X>=800)
			{
				IronCordinate_X=800;
			}
			else
			{
				IronCordinate_X += 10;
			}
			ironIndex3++;
			if(ironIndex3 >= 2)
				ironIndex3=0;

			ironStand = false;
			ironWalk = true;
			ironWalkF = false;
			ironWalkB = false;
			ironPunch = true;
			ironSuperPunch = false;
			ironKick = false;
			ironPower = false;
		}
		/////IRON MAN SUPER PUNCH/////
		if(key=='e')
		{
			if(IronCordinate_X>=800)
			{
				IronCordinate_X=800;
			}
			else
			{
				IronCordinate_X += 10;
			}
			ironIndex4++;
			if(ironIndex4 >= 3)
				ironIndex4 = 0;

			ironStand = false;
			ironWalk = true;
			ironWalkF = false;
			ironWalkB = false;
			ironPunch = false;
			ironSuperPunch = true;
			ironKick = false;
			ironPower = false;
		}
		//////IRON MAN KICK//////
		if(key=='s')
		{
			if(IronCordinate_X>=800)
			{
				IronCordinate_X=800;
			}
			else
			{
				IronCordinate_X += 10;
			}
			ironIndex5++;
			if(ironIndex5 >= 3)
				ironIndex5=0;

			ironStand = false;
			ironWalk = true;
			ironWalkF = false;
			ironWalkB = false;
			ironPunch = false;
			ironSuperPunch = false;
			ironKick = true;
			ironPower = false;
		}
		if(Power_Key)
		{
			if(key=='q')
			{
				if(IronCordinate_X>=800)
				{
					IronCordinate_X=800;
				}
				else
				{
					IronCordinate_X += 10;
				}
				ironIndex6++;
				if(ironIndex6 >= 7)
					ironIndex6=0;

				ironStand = false;
				ironWalk = true;
				ironWalkF = false;
				ironWalkB = false;
				ironPunch = false;
				ironSuperPunch = false;
				ironKick = false;
				ironPower = true;
			}
		}

		///////BAT MAN SUPER PUNCH///////
		if(key=='1')
		{
			if(BatCordinate_X<=310)
			{
				BatCordinate_X=310;
			}
			else
			{
				BatCordinate_X -= 5;
			}
			batIndex4++;
			if(batIndex4 >= 2)
				batIndex4 = 0;

			batStand = false;
			batWalk = true;
			batWalkF = false;
			batWalkB = false;
			batPunch = false;
			batSuperPunch = true;
			batKick = false;
			batPower = false;
		}

		////////BATMAN POWER///////
		if(Power_Key)
		{
			if(key=='0')
			{
				if(BatCordinate_X<=310)
				{
					BatCordinate_X=310;
				}
				else
				{
					BatCordinate_X -= 5;
				}
				batIndex6++;
				if(batIndex6 >= 7)
					batIndex6=0;

				batStand = false;
				batWalk = true;
				batWalkF = false;
				batWalkB = false;
				batPunch = false;
				batSuperPunch = false;
				batKick = false;
				batPower = true;
			
			}
		}
	}

	if(menu==6)
	{
		if(key=='\r')
		{
			FILE *fp;
            fp = fopen("High Scores.txt", "a");

			if(Ironman_score>Batman_score)
			{
				fprintf(fp," %s %d ",name1,point1);
			}
			else
			{
				fprintf(fp," %s %d ",name2,point2);
			}
            
            fclose(fp);

            sorted();
            highfunction();


			memset(name1,0,sizeof(name1));
			memset(name2,0,sizeof(name2));
			
            Ironman_score=0;
			Batman_score=0;
			point1=0;
			point2=0;
			menu=0;
			gameState=-1;
			nextPage=-2;
			backButton=-1;
			removeMousePointer=-1;
			IronCordinate_X = 300;
			IronCordinate_Y = 40;
			BatCordinate_X = 800;
			BatCordinate_Y = 40;
			Ironman_Health = 100;
			Batman_Health = 100;
			pic=-1;
			ground =-1;
			backButton2=-1;
			nextPage2=-1;
			batCanFly = -1;
			indexNumber = 0;
            indexNumber2 = 0;
			musicON = true;
			if(musicON)
			{
				PlaySound("MUSIC\\music 1.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if(menu==4 || menu==5)
	{
		///////BAT MAN WALK///////
		if (key == GLUT_KEY_LEFT)
		{
			if(BatCordinate_X<=310)
			{
				BatCordinate_X=310;
			}
			else
			{
				BatCordinate_X -= 8;
			}
			

			batIndex1++;
			if(batIndex1 >= 18)
				batIndex1=0;

			batStand = false;
			batWalk = true;
			batWalkF = true;
			batWalkB = false;
			batPunch = false;
			batSuperPunch = false;
			batKick = false;
			batPower = false;
		}

		///////BAT MAN WALK///////
		if (key == GLUT_KEY_RIGHT)
		{
			if(BatCordinate_X>=1100)
			{
				BatCordinate_X=1100;
			}
			else{
			BatCordinate_X += 8;
			}

			batIndex2++;
			if(batIndex2 >= 18)
				batIndex2=0;

			batStand = false;
			batWalk = true;
			batWalkF = false;
			batWalkB = true;
			batPunch = false;
			batSuperPunch = false;
			batKick = false;
			batPower = false;
		}

		///////BAT MAN PUNCH///////
		if (key == GLUT_KEY_UP)
		{
			if(BatCordinate_X<=310)
			{
				BatCordinate_X=310;
			}
			else
			{
				BatCordinate_X -= 5;
			}
			BatCordinate_X -= 5;
			batIndex3++;
			if(batIndex3 >= 2)
				batIndex3=0;

			batStand = false;
			batWalk = true;
			batWalkF = false;
			batWalkB = false;
			batPunch = true;
			batSuperPunch = false;
			batKick = false;
			batPower = false;
		}

		///////BAT MAN KICK///////
		if (key == GLUT_KEY_DOWN)
		{
			if(BatCordinate_X<=310)
			{
				BatCordinate_X=310;
			}
			else
			{
				BatCordinate_X -= 5;
			}
			
			batIndex5++;
			if(batIndex5 >= 3)
				batIndex5=0;

			batStand = false;
			batWalk = true;
			batWalkF = false;
			batWalkB = false;
			batPunch = false;
			batSuperPunch = false;
			batKick = true;
			batPower = false;
		}
	}
}






int main()
{
	//place your own initialization codes here.
	setBatVariables();

	iSetTimer(50, change);


	if(musicON)
	{
		PlaySound("MUSIC\\music 1.wav", NULL, SND_LOOP | SND_ASYNC);
	}


	iInitialize(screenWidth, screenHeight, "Battle-Front : Marvel VS Dc");

	iSetTimer(500, loading);
	load[0] = iLoadImage("LOADING\\Battle-Front1.jpg");
	load[1] = iLoadImage("LOADING\\Battle-Front2.jpg");
	load[2] = iLoadImage("LOADING\\Battle-Front3.jpg");
	load[3] = iLoadImage("LOADING\\Battle-Front4.jpg");
	load[4] = iLoadImage("LOADING\\Battle-Front5.jpg");
	load[5] = iLoadImage("LOADING\\Battle-Front6.jpg");

	iStart(); // it will start drawing

	return 0;
}

