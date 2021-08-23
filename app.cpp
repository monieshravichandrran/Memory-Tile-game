#include<fstream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>

struct player
     {
       char name[15];
       char password[10];
       int score;
       int level;
       int SEQ[6];
       int flash;
       int fast;
       int savedlevel;
       int savedgscore;
     }P,T;

char SCORE[10];
char LEVEL[2];
char SAVEDGSCORE[10];
char SAVEDLEVEL[2];

void border ()
     { int i, j;
       for (i=0, j=0; i<330; i++, j++)
	    {if (i%3==0)
	     setcolor(LIGHTGRAY);
	     else if (i%5==0)
		   setcolor (DARKGRAY);
		   else
		   setcolor (BLACK);
	     rectangle(320-i,0,320+i, 10);
	     rectangle(320-i,480, 320+i, 470);
	      if(j<245)
	      {
		rectangle(0,240-j,10,240+j);
		rectangle(645, 240-j, 628, 240+j);
	      }
	     delay(3);
	    }
     }

void borderq ()
     { int i, j;
       for (i=0, j=0; i<330; i++, j++)
	    {if (i%3==0)
	     setcolor(LIGHTGRAY);
	     else if (i%5==0)
		   setcolor (DARKGRAY);
		   else
		   setcolor (BLACK);
	     rectangle(320-i,0,320+i, 10);
	     rectangle(320-i,480, 320+i, 470);
	      if(j<245)
	      {
		rectangle(0,240-j,10,240+j);
		rectangle(645, 240-j, 628, 240+j);
	      }
	    }
     }

void menudet ()
     { setcolor(7);
     outtextxy (32, 30, "THE MEMORY TRIGGER");
     outtextxy (200, 90, "Main Menu");

     circle (177, 162, 5);
     outtextxy (200, 150, "PLAY");
     circle (177, 212, 5);
     outtextxy (200, 200, "HELP");
     circle (177, 262, 5);
     outtextxy (200, 250, "HIGHSCORES");
     circle (177, 312, 5);
     outtextxy (200, 300, "CREDITS");
     circle (177, 362, 5);
     outtextxy (200, 350, "QUIT");
     settextstyle (0, HORIZ_DIR, 2);
     outtextxy(18, 400, "(Use 'W' and 'S' to move up and down.)");
     outtextxy(18, 420, "(Press 'E' to select.)");
     }

void gamedet ()
       {
       int i, j;
      setfillstyle (CLOSE_DOT_FILL, 8);
      bar (0,0,645, 320);
      for (i=0, j=0; i<330; i++, j++)
      {if (i%3==0)
       setcolor(LIGHTGRAY);
       else if (i%5==0)
       setcolor (DARKGRAY);
       else
       setcolor (BLACK);
       rectangle(320-i, 360, 320+i, 370);
       rectangle(320-i, 320, 320+i, 330);
       }

       setfillstyle (0, LIGHTGRAY);
       bar(0, 330, 645, 360);
       bar(0, 370, 645, 480);
       settextstyle (0, HORIZ_DIR, 4);
       setcolor(WHITE);
       outtextxy(10, 380, "Player");
       outtextxy(240, 380, "Score");
       outtextxy(430, 380, "Level");
       settextstyle (0, HORIZ_DIR, 2);
       outtextxy(0, 335, "MOVEMENT-WASD | TO SELECT-O | SAVE-SPACE");
       settextstyle(0, HORIZ_DIR, 4);

       setfillstyle(1, 0);
       bar(170, 50, 250, 175);
       bar(170, 185, 250, 310);
       bar(275, 50, 355, 175);
       bar(275, 185, 355, 310);
       bar(380, 50, 460, 175);
       bar(380, 185, 460, 310);
 }

void pregamedet()
     { cleardevice();
       setfillstyle (CLOSE_DOT_FILL, 8);
       bar (0,0,645, 480);
       setfillstyle(1, 0);
       bar(170, 50, 250, 175);
       bar(170, 185, 250, 310);
       bar(275, 50, 355, 175);
       bar(275, 185, 355, 310);
       bar(380, 50, 460, 175);
       bar(380, 185, 460, 310);
     }

void gamestart(int countername)
     { cleardevice();
       setfillstyle (CLOSE_DOT_FILL, 8);
       bar (0,0,645, 480);
       settextstyle (0, HORIZ_DIR, 4);
       borderq();
       setcolor(15);
       if(countername==0)
	 {outtextxy(110,120, "REGISTERATION");
	  outtextxy(140,160, "SUCCESSFUL!");
	 }
       else
	 {outtextxy(230,120, "LOGIN");
	  outtextxy(150,160, "SUCCESSFUL!");
	 }
      for(int i=5; i>0; i--)
	{ setfillstyle(SOLID_FILL, 0);
	  pieslice(305,290,0,360,50);

	 setcolor(15);
	if (i==5)
	   outtextxy(292, 280, "5");
	else if (i==4)
	   outtextxy(292, 280, "4");
	else if (i==3)
	   outtextxy(292, 280, "3");
	else if (i==2)
	   outtextxy(292, 280, "2");
	else
	   outtextxy(292, 280, "1");
      for (int j=1; j<=360; j++)
	{setfillstyle(SOLID_FILL, 15);
	 setcolor(7);
	 pieslice(305,290,j-1,j,50);
	 delay(1);
	}

       setcolor(15);
       if(countername==0)
	  {outtextxy(110,120, "REGISTERATION");
	  outtextxy(140,160, "SUCCESSFUL!");
	  }
       else
		 {outtextxy(230,120, "LOGIN");
	  outtextxy(150,160, "SUCCESSFUL!");
	 }
    }
  }

void gamestart()
     { cleardevice();
       setfillstyle (CLOSE_DOT_FILL, 8);
       bar (0,0,645, 480);
       settextstyle (0, HORIZ_DIR, 4);
       borderq();
       setcolor(15);
	  outtextxy(245,120, "GAME");
	  outtextxy(170,160, "BEGINS IN");

      for(int i=5; i>0; i--)
	{
	setfillstyle(SOLID_FILL, 0);
	pieslice(305,290,0,360,50);

	if (i==5)
	   outtextxy(292, 280, "5");
	else if (i==4)
	   outtextxy(292, 280, "4");
	else if (i==3)
	   outtextxy(292, 280, "3");
	else if (i==2)
	   outtextxy(292, 280, "2");
	else
	   outtextxy(292, 280, "1");
      for (int j=1; j<=360; j++)
	{setfillstyle(SOLID_FILL, 15);
	 setcolor(7);
	 pieslice(305,290,j-1,j,50);
	 delay(1);
	}
	setcolor(15);
	   outtextxy(245,120, "GAME");
	   outtextxy(170,160, "BEGINS IN");
    }
  }

void gameset ();

void main()
{
 int gd=DETECT, gm, i, j, k;
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 //////////////////////
 //THE WELCOME SCREEN//
 //////////////////////

 setfillstyle(CLOSE_DOT_FILL, 8);
 bar(0,0,640,480);
 settextstyle(0, HORIZ_DIR, 20);
 setfillstyle(SOLID_FILL, 15);
 pieslice(320,240,0,360,230);
 for(i=5; i>0; i--)
    { setcolor(0);
	if (i==5)
	   outtextxy(265, 170, "5");
	else if (i==4)
	   outtextxy(250, 170, "4");
	else  if (i==3)
	    outtextxy(265, 170, "3");
	 else if (i==2)
		 outtextxy(265, 170, "2");
	      else
		 outtextxy(265, 170, "1");
      for (j=1; j<=360; j++)
	{setfillstyle(SOLID_FILL, 8);
	 setcolor(8);
	 pieslice(320,240,j-1,j,230);
	 delay(1);
	}
      setfillstyle(SOLID_FILL, 15);
      pieslice(320,240,0,360,230);
    }

  setfillstyle(CLOSE_DOT_FILL, 8);
 bar(0,0,640,480);

 for(i=0; i<=640; i++)
    {if (i%10==0)
	setcolor(0);
     else if (i%5==0)
	  setcolor(8);
	  else
     setcolor(7);
     rectangle(i,0,i,240);
     rectangle(640-i,240,640-i,480);
     delay(3);
    }

 settextstyle( 0, HORIZ_DIR, 10);
 setcolor(0);
 outtextxy(45, 200, "WELCOME");
 delay(3);

 setfillstyle(CLOSE_DOT_FILL, 8);
  for(i=0; i<=640; i++)
    {setcolor(7);
     bar(i,0,i,240);
     bar(640-i,240,640-i,480);
     delay(3);
    }
 for(i=0; i<=480; i++)
    {if (i%10==0)
	setcolor(0);
     else if (i%5==0)
	  setcolor(8);
	  else
     setcolor(7);
     rectangle(0,i,320,i);
     rectangle(320,480-i,640,480-i);
     delay(3);
    }

 setcolor(0);
 outtextxy(160,200,"TO");
 delay(1000);
 outtextxy(300,200,".");
 delay(750);
 outtextxy(330,200,".");
 delay(450);
 outtextxy(360,200,".");
 delay(225);
 outtextxy(390,200,".");
 delay(100);
 outtextxy(420,200,".");
 delay(50);

 setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);

 border ();

 setcolor(7);
 settextstyle( 0, HORIZ_DIR, 12);
 outtextxy(196, 57, "T");
 setcolor(8);
 delay(150);
 outtextxy(276, 57, "H");
 setcolor(7);
 delay(150);
 outtextxy(367, 57, "E");
 setcolor(8);
 delay(150);
 outtextxy(47, 157, "M");
 setcolor(7);
 delay(150);
 outtextxy(137, 157, "E");
 setcolor(8);
 delay(150);
 outtextxy(227, 157, "M");
 setcolor(7);
 delay(150);
 outtextxy(317, 157, "O");
 setcolor(8);
 delay(150);
 outtextxy(407, 157, "R");
 setcolor(7);
 delay(150);
 outtextxy(497, 157, "Y");
 setcolor(8);
 delay(150);
 outtextxy(42, 257, "T");
 setcolor(7);
 delay(150);
 outtextxy(122, 257, "R");
 setcolor(8);
 delay(150);
 outtextxy(200, 257, "I");
 setcolor(7);
 delay(150);
 outtextxy(263, 257, "G");
 setcolor(8);
 delay(150);
 outtextxy(337, 257, "G");
 setcolor(7);
 delay(150);
 outtextxy(425, 257, "E");
 setcolor(8);
 delay(150);
 outtextxy(515, 257, "R");
 delay(1000);

 settextstyle(0,HORIZ_DIR,2);
 setcolor(15);
 outtextxy(115,400,"PRESS ANY KEY TO CONTINUE!");
 setcolor(7);
 getch();
 cleardevice();

 ///////////////////////////
 //THE WELCOME SCREEN ENDS//
 ///////////////////////////

 char entry, inentry, inentry2, inentry3, inentry4;
 int wcou=0;

 settextstyle (0, HORIZ_DIR, 4);
 setcolor(7);
 setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);

 border ();
 menudet ();

 setcolor(GREEN);
 for (i=5; i>=0; i--)
     circle (177, 162, 5-i);
 setcolor (RED);
 for (i=5; i>=0; i--)
     circle (177, 212, 5-i);
 for (i=5; i>=0; i--)
     circle (177, 262, 5-i);
 for (i=5; i>=0; i--)
     circle (177, 312, 5-i);
 for (i=5; i>=0; i--)
     circle (177, 362, 5-i);

 do{  settextstyle (0, HORIZ_DIR, 4);
      setcolor(7);
      entry = getch();
      if ((entry=='w'||entry=='W')&&wcou!=0)
	 {wcou--;
	  if ( wcou==0)
	     { cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);

	       borderq();

	       menudet();

	       setcolor(GREEN);
	       for (i=5; i>=0; i--)
		   circle (177, 162, 5-i);
	       setcolor (RED);
	       for (i=5; i>=0; i--)
		   circle (177, 212, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 262, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 312, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 362, 5-i);
	     }
	  if (wcou==1)
	     { cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);

	       borderq();

	       menudet();

	       setcolor(GREEN);
	       for (i=5; i>=0; i--)
		   circle (177, 212, 5-i);
	       setcolor (RED);
	       for (i=5; i>=0; i--)
		   circle (177, 162, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 262, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 312, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 362, 5-i);
	     }
	  if (wcou==2)
	     { cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);

	       borderq();

	       menudet();

	       setcolor(GREEN);
	       for (i=5; i>=0; i--)
		   circle (177, 262, 5-i);
	       setcolor (RED);
	       for (i=5; i>=0; i--)
		   circle (177, 212, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 162, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 312, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 362, 5-i);
	     }
	  if (wcou==3)
	     {cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      borderq();

	      menudet();

	      setcolor(GREEN);
	      for (i=5; i>=0; i--)
		  circle (177, 312, 5-i);
	      setcolor (RED);
	      for (i=5; i>=0; i--)
		  circle (177, 212, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 262, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 162, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 362, 5-i);
	     }
	  if (wcou==4)
	     {cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      borderq();

	      menudet();
	      setcolor(GREEN);
	      for (i=5; i>=0; i--)
		  circle (177, 362, 5-i);
	      setcolor (RED);
	      for (i=5; i>=0; i--)
		  circle (177, 212, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 262, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 312, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 162, 5-i);
	     }
	 }
      else if ((entry=='s'||entry=='S')&&wcou!=4)
	 { wcou++;
	  if (wcou==0)
	     {cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      borderq();

	      menudet();

	      setcolor(GREEN);
	      for (i=5; i>=0; i--)
		  circle (177, 162, 5-i);
	      setcolor (RED);
	      for (i=5; i>=0; i--)
		  circle (177, 212, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 262, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 312, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 362, 5-i);
	     }
	  if (wcou==1)
	     { cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);

	       borderq();

	       menudet();

	       setcolor(GREEN);
	       for (i=5; i>=0; i--)
		   circle (177, 212, 5-i);
	       setcolor (RED);
	       for (i=5; i>=0; i--)
		   circle (177, 162, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 262, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 312, 5-i);
	       for (i=5; i>=0; i--)
		   circle (177, 362, 5-i);
	     }
	  if (wcou==2)
	     {cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      borderq();

	      menudet();

	      setcolor(GREEN);
	      for (i=5; i>=0; i--)
		  circle (177, 262, 5-i);
	      setcolor (RED);
	      for (i=5; i>=0; i--)
		  circle (177, 212, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 162, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 312, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 362, 5-i);
	     }
	  if (wcou==3)
	     {cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      borderq();

	      menudet();

	      setcolor(GREEN);
	      for (i=5; i>=0; i--)
		  circle (177, 312, 5-i);
	      setcolor (RED);
	      for (i=5; i>=0; i--)
		  circle (177, 212, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 262, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 162, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 362, 5-i);
	     }
	  if (wcou==4)
	     {cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      borderq();

	      menudet();

	      setcolor(GREEN);
	      for (i=5; i>=0; i--)
		  circle (177, 362, 5-i);
	      setcolor (RED);
	      for (i=5; i>=0; i--)
		  circle (177, 212, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 262, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 312, 5-i);
	      for (i=5; i>=0; i--)
		  circle (177, 162, 5-i);
	     }
	 }
      else if (entry=='e'||entry=='E')
	 {
	   if(wcou==0)    //PLAY
	     {
	       cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);
	       border();

	       int rcou=2, acou=0, ucou=1, dcou=0;
	       char SECRET[10];

	       ////////////////////////////////////////
	       //SPECIFICATION OF PLAYER/GAME DETAILS//
	       ////////////////////////////////////////

	       settextstyle(0, HORIZ_DIR, 2);
	       setcolor(15);
	       outtextxy(20, 40, "Enter your name:");
	       outtextxy(20, 400, "Press space to stop entering.");
	       borderq();
	       setcolor(15);

	       setcolor(0);
	       setfillstyle(SOLID_FILL,0);
	       bar(17,74,400,100);
	       setcolor(7);
	       for(i=0; i<5; i++)
	       rectangle(15+i,72+i,402-i,102-i);

	       int namei, passi, countername=0, counterpass=0, inwcou=0, innwcou=0;  /////////

	       do{
		  countername=0;
		  counterpass=0;
		  namei=-1;

		  do{
		     namei++;
		     P.name[namei]=getch();
		     if(P.name[namei]==' ')
		       P.name[namei]='\0';
		     else
		       P.name[namei+1]='\0';

		     for (i=0; i<=namei; i++)
			 setcolor(DARKGRAY);
		     outtextxy(20, 80, P.name);
		    } while (namei<8&&P.name[namei]!='\0');

		  ifstream finc;
		  finc.open("GAMES.DAT",ios::binary);
		  while(finc.read((char*)&T,sizeof(T)))
		       {if(strcmp(T.name,P.name)==0)
			  { for(i=0; i<6; i++)
			       P.SEQ[i]=T.SEQ[i];
			    P.flash=T.flash;
			    P.fast=T.fast;
			    P.savedlevel=T.savedlevel;
			    P.savedgscore=T.savedgscore;
			    countername++;
			    break;
			  }
		       }
		  finc.close();

		  if (countername==1)
		     {
		      cleardevice();
		      setfillstyle (CLOSE_DOT_FILL, 8);
		      bar (0,0,645, 480);
		      settextstyle(0, HORIZ_DIR, 2);
		      borderq();
		      setcolor(7);
		      outtextxy(20, 40,"It seems the name you entered already");
		      outtextxy(20, 60,"exists. Type the required password to");
		      outtextxy(20, 80,"play as ");
		      outtextxy(140, 80, P.name);
		      outtextxy(50, 110, "Enter password");
		      outtextxy(20, 150, "or choose another name");
		      setcolor(7);
		      outtextxy(50, 170, "Yes please!");
		      outtextxy(20, 400, "(Use 'W', and  'S' to move up and down.");
		      outtextxy(20, 420, "Press 'E' to select.)");
		      circle (35,115,5);
		      circle (35,175,5);
		      setcolor(GREEN);
		      for (i=5; i>=0; i--)
			  circle (35, 115, i);
		      setcolor(RED);
		      for (i=5; i>=0; i--)
			  circle (35, 175, i);
		      setcolor(8);

		      do{
			 inentry3 = getch();
			 if (inentry3=='w'||inentry3=='W')
			    if(inwcou==1)
			      {
			       inwcou--;
			       cleardevice();
			       setfillstyle (CLOSE_DOT_FILL, 8);
			       bar (0,0,645, 480);
			       settextstyle(0, HORIZ_DIR, 2);
			       borderq();
			       setcolor(7);
			       outtextxy(20, 40,"It seems the name you entered already");
			       outtextxy(20, 60,"exists. Type the required password to");
			       outtextxy(20, 80,"play as ");
			       outtextxy(140, 80, P.name);
			       outtextxy(50, 110, "Enter password");
			       outtextxy(20, 150, "or choose another name");
			       setcolor(7);
			       outtextxy(50, 170, "Yes please!");
			       outtextxy(20, 400, "Use 'W', and  'S' to move up and down.");
			       outtextxy(20, 420, "Press 'E' to select.)");

			       circle (35, 115, 5);
			       circle (35, 175, 5);
			       setcolor(GREEN);
			       for (i=5; i>=0; i--)
				   circle (35, 115, i);
			       setcolor(RED);
			       for (i=5; i>=0; i--)
				   circle (35, 175, i);

			       setcolor(8);
			      }
			 if (inentry3=='s'||inentry3=='S')
			    if(inwcou==0)
			      {
			       inwcou++;
			       cleardevice();
			       setfillstyle (CLOSE_DOT_FILL, 8);
			       bar (0,0,645, 480);
			       settextstyle(0, HORIZ_DIR, 2);
			       borderq();
			       setcolor(7);
			       outtextxy(20, 40,"It seems the name you entered already");
			       outtextxy(20, 60,"exists. Type the required password to");
			       outtextxy(20, 80,"play as ");
			       outtextxy(140, 80, P.name);
			       outtextxy(20, 150, "or choose another name");
			       outtextxy(50, 110, "Enter password");
			       setcolor(7);
			       outtextxy(50, 170, "Yes please!");
			       outtextxy(20, 400, "Use 'W', and  'S' to move up and down.");
			       outtextxy(20, 420, "Press 'E' to select.)");

			       circle (35, 115, 5);
			       circle (35,175, 5);
			       setcolor(RED);
			       for (i=5; i>=0; i--)
				   circle (35, 115, i);
			       setcolor(GREEN);
			       for (i=5; i>=0; i--)
				   circle (35, 175, i);

			       setcolor(8);
			      }
			 if (inentry3=='e'||inentry3=='E')
			    {
			    if(inwcou==0)
			      {
			       cleardevice();
			       setfillstyle (CLOSE_DOT_FILL, 8);
			       bar (0,0,645, 480);
			       settextstyle(0, HORIZ_DIR, 2);
			       borderq();
			       setcolor(7);
			       outtextxy(20, 40,"It seems the name you entered already");
			       outtextxy(20, 60,"exists. Type the required password to");
			       outtextxy(20, 80,"play as ");
			       outtextxy(140, 80, P.name);
			       outtextxy(20, 150, "or choose another name");
			       setcolor(7);
			       outtextxy(50, 170, "Yes please!");
			       outtextxy(20, 400, "Press space to stop entering.");
			       setcolor(0);
			       setfillstyle(SOLID_FILL,0);
			       bar(50,110,400,135);
			       setcolor(7);
			       for(i=0; i<5; i++)
				  rectangle(48+i,108+i,402-i,137-i);

			       circle (35, 115, 5);
			       circle (35,175, 5);
			       setcolor(GREEN);
			       for (i=5; i>=0; i--)
				   circle (35, 115, i);
			       setcolor(RED);
			       for (i=5; i>=0; i--)
				   circle (35, 175, i);

			       setcolor(8);
			       passi=-1;
			       do { passi++;
				    P.password[passi]=getch();
				    if(P.password[passi]==' ')
				      P.password[passi]='\0';
				    else
				      P.password[passi+1]='\0';

				      SECRET[passi]='*';
				      SECRET[passi+1]='\0';

				      outtextxy(53,115,SECRET);

				  }while(P.password[passi]!='\0'&&passi<10);

			       SECRET[0]='\0';

			       if(strcmp(P.password,T.password)!=0)
				 {cleardevice();
				  setfillstyle (CLOSE_DOT_FILL, 8);
				  bar (0,0,645, 480);
				  settextstyle(0, HORIZ_DIR, 2);

				  outtextxy(150, 225, "Incorrect Password.");
				  outtextxy(100, 245, "You could try a new name...");

				  settextstyle(0, HORIZ_DIR, 10);
				  setcolor(0);
				  outtextxy(260, 280, ".");
				  outtextxy(285, 280, ".");
				  outtextxy(310, 280, ".");
				  setcolor(15);
				  delay(1000);
				  outtextxy(260, 280, ".");
				  delay(1000);
				  outtextxy(285, 280, ".");
				  delay(1000);
				  outtextxy(310, 280, ".");

				  counterpass=1;
				  cleardevice();
				  setfillstyle (CLOSE_DOT_FILL, 8);
				  bar (0,0,645, 480);
				  setcolor(0);
				  setfillstyle(SOLID_FILL,0);
				  bar(17,74,400,100);
				  settextstyle(0, HORIZ_DIR, 2);
				  setcolor(15);
				  settextstyle(0, HORIZ_DIR, 2);
				  borderq();
				  setcolor(15);
				  outtextxy(20, 40, "Enter your name:");
				  outtextxy(20, 400, "Press space to stop entering.");
				  setcolor(7);
				  for(i=0; i<5; i++)
				     rectangle(15+i,72+i,402-i,102-i);
				  break;
				 }
			       else if(strcmp(P.password,T.password)==0)
				 {
				  counterpass=0;
				  break;
				 }
			      } //if(inwcou==0)
			    if(inwcou==1)
			      {counterpass=1;
			       cleardevice();
			       setfillstyle (CLOSE_DOT_FILL, 8);
			       bar (0,0,645, 480);
			       setcolor(0);
			       setfillstyle(SOLID_FILL,0);
			       bar(17,74,400,100);
			       settextstyle(0, HORIZ_DIR, 2);
			       setcolor(15);
			       settextstyle(0, HORIZ_DIR, 2);
			       borderq();
			       setcolor(15);
			       outtextxy(20, 40, "Enter your name:");
			       outtextxy(20, 400, "Press space to stop entering.");
			       setcolor(7);
			       for(i=0; i<5; i++)
				  rectangle(15+i,72+i,402-i,102-i);
			       inwcou--;
			       break;
			      }
			    } //if(inentry3==e)
			}while ((inentry3!='w'&&inentry3!='W')||(inentry3!='s'&&inentry3!='S'));
		     } //if(countername==1)
		  else if (countername==0)
		     { cleardevice();
		       setfillstyle (CLOSE_DOT_FILL, 8);
		       bar (0,0,645, 480);
		       settextstyle(0, HORIZ_DIR, 2);
		       setcolor(7);
		       borderq();
		       setcolor(7);
		       outtextxy(20, 40, "Your Name: ");
		       outtextxy(200, 40, P.name);

		       outtextxy(20, 110, "Enter a Password. Make sure you");
		       outtextxy(20, 130, "remember this password as you");
		       outtextxy(20, 150, "will be needing it when you login");
		       outtextxy(20, 170, "in the future!");
		       outtextxy(20, 400, "Press space to stop entering.");
		       setfillstyle(SOLID_FILL,0);
		       bar(20,200,400,235);
		       setcolor(7);
		       for(i=0; i<5; i++)
			  rectangle(18+i,198+i,402-i,237-i);

		       setcolor(8);
		       passi=-1;
		       do {
			   passi++;
			   P.password[passi]=getch();
			   if(P.password[passi]==' ')
			     P.password[passi]='\0';
			   else
			     P.password[passi+1]='\0';
			   SECRET[passi]='*';
			   SECRET[passi+1]='\0';

			   outtextxy(28, 210, SECRET);
			  }while(P.password[passi]!='\0'&&passi<10);
		     }///else if (countername==0)
		 } while(counterpass==1);

	       cleardevice();
	       gamestart(countername);

	       if(P.flash!=0)
		 { cleardevice();
		   setfillstyle (CLOSE_DOT_FILL, 8);
		   bar (0,0,645, 480);
		   settextstyle (0, HORIZ_DIR, 2);
		   borderq();
		   setcolor(15);
		   outtextxy(20, 40,"Oops! It seems you have a saved");
		   outtextxy(20, 60,"game in progress! What would");
		   outtextxy(20, 80,"you like to do?");

		   outtextxy(50, 130, "CONTINUE WITH SAVED GAME");
		   outtextxy(50, 150, "START NEW GAME");

		   outtextxy(20, 200,"Saved Game Progress:");
		   outtextxy(20, 240, "Your Level: ");
		   itoa(P.savedlevel, SAVEDLEVEL, 10);
		   outtextxy(250, 240, SAVEDLEVEL);

		   outtextxy(20, 280, "Your Score: ");
		   itoa(P.savedgscore, SAVEDGSCORE, 10);
		   outtextxy(250, 280, SAVEDGSCORE);

		   setcolor(8);
		   circle(25, 135, 5);
		   circle(25, 155, 5);
		   setcolor(GREEN);
		   for (i=5; i>=0; i--)
		       circle(25, 135, i);
		   setcolor(RED);
		   for (i=5; i>=0; i--)
		       circle(25, 155, i);

		   do { inentry4 = getch();
			if (inentry4=='w'||inentry4=='W')
			   if(innwcou==1)
			     { innwcou--;
			       setcolor(8);
			       circle(25, 135, 5);
			       circle(25, 155, 5);
			       setcolor(GREEN);
			       for (i=5; i>=0; i--)
				   circle(25, 135, i);
			       setcolor(RED);
			       for (i=5; i>=0; i--)
				   circle(25, 155, i);
			     }
			if (inentry4=='s'||inentry4=='S')
			   if(innwcou==0)
			     { innwcou++;
			       setcolor(8);
			       circle(25, 135, 5);
			       circle(25, 155, 5);
			       setcolor(RED);
			       for (i=5; i>=0; i--)
				   circle(25, 135, i);
			       setcolor(GREEN);
			       for (i=5; i>=0; i--)
				   circle(25, 155, i);
			     }
			if (inentry4=='e'||inentry4=='E')
			   {
			   if(innwcou==0)
			     {
			      P.score=P.savedgscore;
			      P.level=P.savedlevel;
			      break;
			     }
			   if(innwcou==1)
			     {
			      P.flash=0;
			      P.fast=0;
			      P.savedgscore=0;
			      P.savedlevel=1;
			      P.score=0;
			      P.level=1;
			      break;
			     }
			   }
		      } while ((inentry4!='w'&&inentry4!='W')||(inentry4!='s'&&inentry4!='S'));
		 }
	       else
		 { P.savedlevel=1;
		   P.level=1;
		 }

	       ////////////////////////////////////////////////
	       //END OF SPEECIFICATION OF PLAYER/GAME DETAILS//
	       ////////////////////////////////////////////////

	 ////////////////////
	 //PLAYING THE GAME//
	 ////////////////////

	 gamestart();

	 int num=0;


	 gameset();

	 gamedet();

		       setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
		       itoa(P.level, LEVEL, 10);              //LEVEL USED HERE
		       outtextxy(450, 420, LEVEL);
			itoa(P.score, SCORE, 10);
		      outtextxy (240, 420, SCORE);
		      setcolor(LIGHTGRAY);
		      rectangle (168, 48, 252, 177);
		      rectangle (169, 49, 251, 176);
		      rectangle (170, 50, 250, 175);
		      rectangle (171, 51, 249, 174);

		      do{  itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 inentry2=getch();
			   if ((inentry2=='a'||inentry2=='A')&&acou!=0)
			   {acou--, rcou++;
		      if (acou==0)
			 {
		      gamedet();
		       setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			 itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);

		      setcolor(LIGHTGRAY);
		      if (ucou==1&&dcou==0)
		      {rectangle (168, 48, 252, 177);
		       rectangle (169, 49, 251, 176);
		       rectangle (170, 50, 250, 175);
		       rectangle (171, 51, 249, 174);
			  itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		      }
		      if (ucou==0&&dcou==1)
		      {rectangle (168, 183, 252, 312);
		       rectangle (169, 184, 251, 311);
		       rectangle (170, 185, 250, 310);
		       rectangle (171, 186, 249, 309);
			 itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		      }
		      }
		  if (acou==1)
		     {
		      gamedet();
		       setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			 itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);

		      setcolor(LIGHTGRAY);
		     if (ucou==0&&dcou==1)
		     {rectangle (273, 183, 357, 312);
		      rectangle (274, 184, 356, 311);
		      rectangle (275, 185, 355, 310);
		      rectangle (276, 186, 354, 309);
			itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		     }
		    if (ucou==1&&dcou==0)
		     {rectangle (273, 48, 357, 177);
		      rectangle (274, 49, 356, 176);
		      rectangle (275, 50, 355, 175);
		      rectangle (276, 51, 354, 174);
		       itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		     }
		    }
		    if (acou==2)
		       { gamedet();
			  setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
		      setcolor(LIGHTGRAY);
		     if (ucou==1&&dcou==0)
		      {rectangle (378, 48,462, 177);
		       rectangle (379, 49,461, 176);
		       rectangle (380, 50,460, 175);
		       rectangle (381, 51,459, 174);
			 itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		      }
		     if (dcou==1&&ucou==0)
		       {rectangle (378, 183, 462, 312);
			rectangle (379, 184, 461, 311);
			rectangle (380, 185, 460, 310);
			rectangle (381, 186, 459, 309);
			  itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		       }
		      }
		     }
		    if ((inentry2=='d'||inentry2=='D')&&rcou!=0)
			{rcou--, acou++;
			 if (rcou==2)
			      {gamedet();
				setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			 itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
		      setcolor(LIGHTGRAY);
		     if (ucou==1&&dcou==0)
		      {rectangle (168, 48, 252, 177);
		       rectangle (169, 49, 251, 176);
		       rectangle (170, 50, 250, 175);
		       rectangle (171, 51, 249, 174);
			 itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		      }
		     if (ucou==0&&dcou==1)
		      {rectangle (168, 183, 252, 312);
		       rectangle (169, 184, 251, 311);
		       rectangle (170, 185, 250, 310);
		       rectangle (171, 186, 249, 309);
			 itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		      }
		      }
		  if (rcou==1)
		     {gamedet();
		       setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			 itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
		      setcolor(LIGHTGRAY);
		     if (ucou==0&&dcou==1)
		     {rectangle (273, 183, 357, 312);
		      rectangle (274, 184, 356, 311);
		      rectangle (275, 185, 355, 310);
		      rectangle (276, 186, 354, 309);
			itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		     }
		    if (ucou==1&&dcou==0)
		     {rectangle (273, 48, 357, 177);
		      rectangle (274, 49, 356, 176);
		      rectangle (275, 50, 355, 175);
		      rectangle (276, 51, 354, 174);
			itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		     }
		    }
		    if (rcou==0)
		       { gamedet();
			  setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			 itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
		      setcolor(LIGHTGRAY);
		     if (ucou==1&&dcou==0)
		      {rectangle (378, 48,462, 177);
		       rectangle (379, 49,461, 176);
		       rectangle (380, 50,460, 175);
		       rectangle (381, 51,459, 174);
			 itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		      }
		     if (dcou==1&&ucou==0)
		       {rectangle (378, 183, 462, 312);
			rectangle (379, 184, 461, 311);
			rectangle (380, 185, 460, 310);
			rectangle (381, 186, 459, 309);
			  itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
		       }
		      }
		     }

		  if ((inentry2=='w'||inentry2=='W')&&dcou!=0)
		    { dcou--; ucou++;
		      if (dcou==0)
		      {gamedet();
		       setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			 itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
		       setcolor(LIGHTGRAY);
		      if (rcou==2)
			 {rectangle (168, 48, 252, 177);
			  rectangle (169, 49, 251, 176);
			  rectangle (170, 50, 250, 175);
			  rectangle (171, 51, 249, 174);
			    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 }
		      if (rcou==1)
			 {rectangle (273, 48, 357, 177);
			  rectangle (274, 49, 356, 176);
			  rectangle (275, 50, 355, 175);
			  rectangle (276, 51, 354, 174);
			    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 }
		      if (rcou==0)
			 {rectangle (378, 48, 462, 177);
			  rectangle (379, 49, 461, 176);
			  rectangle (380, 50, 460, 175);
			  rectangle (381, 51, 459, 174);
			    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 }
		      }
		     if (dcou==1)
			{gamedet();
			 setcolor(DARKGRAY);
			 settextstyle (0, HORIZ_DIR, 2);
			 outtextxy (10, 420, P.name);
			   itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
			 setcolor(LIGHTGRAY);
			 if (rcou==2)
			    { rectangle(168, 183, 252, 312);
			      rectangle(169, 184, 251, 311);
			      rectangle(170, 185, 250, 310);
			      rectangle(171, 186, 249, 309);
				itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			    }
			 if (rcou==1)
			    { rectangle(273, 183, 357, 312);
			      rectangle(274, 184, 356, 311);
			      rectangle(275, 185, 355, 310);
			      rectangle(276, 186, 354, 309);
				itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			    }
			 if (rcou==0)
			    { rectangle(378, 183, 462, 312);
			      rectangle(379, 184, 461, 311);
			      rectangle(380, 185, 460, 310);
			      rectangle(381, 186, 459, 309);
				itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			    }
			}
		    }
		  if ((inentry2=='s'||inentry2=='S')&&ucou!=0)
		     { ucou--; dcou++;
		       if (ucou==0)
			  { gamedet();
			    setcolor(DARKGRAY);
			    settextstyle (0, HORIZ_DIR, 2);
			    outtextxy (10, 420, P.name);
			     itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);

			    setcolor(LIGHTGRAY);
			    if (rcou==2)
			    { rectangle(168, 183, 252, 312);
			      rectangle(169, 184, 251, 311);
			      rectangle(170, 185, 250, 310);
			      rectangle(171, 186, 249, 309);
			      itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			    }
			    if (rcou==1)
			    { rectangle(273, 183, 357, 312);
			      rectangle(274, 184, 356, 311);
			      rectangle(275, 185, 355, 310);
			      rectangle(276, 186, 354, 309);
			      itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			    }
			 if (rcou==0)
			    { rectangle(378, 183, 462, 312);
			      rectangle(379, 184, 461, 311);
			      rectangle(380, 185, 460, 310);
			      rectangle(381, 186, 459, 309);
			      itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			    }
			 }
		       if (ucou==1)
			  { gamedet();
			    setcolor(DARKGRAY);
			    settextstyle (0, HORIZ_DIR, 2);
			    outtextxy (10, 420, P.name);
			     itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);

			    setcolor(LIGHTGRAY);
		      if (rcou==2)
			 {rectangle (168, 48, 252, 177);
			  rectangle (169, 49, 251, 176);
			  rectangle (170, 50, 250, 175);
			  rectangle (171, 51, 249, 174);
			   itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 }
		      if (rcou==1)
			 {rectangle (273, 48, 357, 177);
			  rectangle (274, 49, 356, 176);
			  rectangle (275, 50, 355, 175);
			  rectangle (276, 51, 354, 174);
			   itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 }
		      if (rcou==0)
			 {rectangle (378, 48, 462, 177);
			  rectangle (379, 49, 461, 176);
			  rectangle (380, 50, 460, 175);
			  rectangle (381, 51, 459, 174);
			   itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			 }
		       }
		     }
		   if (inentry2=='o'||inentry2=='O')
		      { if (rcou==2&&dcou==0)
			   {  setfillstyle(1, WHITE);
			      bar(170, 50, 250, 175);
			      delay(50);
			      setfillstyle( 1, 0);
			      bar(170, 50, 250, 175);

			    if (P.SEQ[num]!=0)
			      {cleardevice();
			       setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);
			       setcolor(15);
			       settextstyle(0, HORIZ_DIR, 6);
			       outtextxy(210, 190, "GAME");
			       outtextxy(210, 250, "OVER");
				settextstyle(0, HORIZ_DIR, 2);
			       outtextxy(190, 400, "Press E to exit.");
			       delay(2000);
			       break;
			      }
			    else
			       {P.score+=20;

			       }
				setfillstyle (1, 0);
				bar (240, 420, 420, 440);
			   itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			   }
			if (rcou==2&&dcou==1)
			   { setfillstyle(1, WHITE);
			     bar(170, 185, 250, 310);
			      delay(50);
			      setfillstyle( 1, 0);
			       bar(170, 185, 250, 310);

			    if (P.SEQ[num]!=1)
			      { cleardevice();
				setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);
  setcolor(15);
			       settextstyle(0, HORIZ_DIR, 6);
				outtextxy(210, 190, "GAME");
			       outtextxy(210, 250, "OVER");
				settextstyle(0, HORIZ_DIR, 2);
			       outtextxy(190, 400, "Press E to exit.");
			       delay(2000);
			       break;
			      }
			      else
			       P.score+=20;


				setfillstyle (1, 0);
				bar (240, 420, 420, 440);
				    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			  }
			if (rcou==1&&dcou==0)
			   {  setfillstyle(1, WHITE);
			      bar(275, 50, 355, 175);
			      delay(50);
			      setfillstyle( 1, 0);
				 bar(275, 50, 355, 175);

			    if (P.SEQ[num]!=2)
			      {
				cleardevice();
				setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);
  setcolor(15);
			       settextstyle(0, HORIZ_DIR, 6);
				outtextxy(210, 190, "GAME");
			       outtextxy(210, 250, "OVER");
				settextstyle(0, HORIZ_DIR, 2);
			       outtextxy(190, 400, "Press E to exit.");
			       delay(2000);
			       break;
			      }
			      else
			       P.score+=20;


				setfillstyle (1, 0);
				bar (240, 420, 420, 440);
				    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			   }
			if (rcou==1&&dcou==1)
			   { setfillstyle(1, WHITE);
			     bar(275, 185, 355, 310);
			      delay(50);
			      setfillstyle( 1, 0);
			      bar(275, 185, 355, 310);

			    if (P.SEQ[num]!=3)
			      {
				cleardevice();
				setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);
  setcolor(15);
			       settextstyle(0, HORIZ_DIR, 6);
				outtextxy(210, 190, "GAME");
			       outtextxy(210, 250, "OVER");
			       settextstyle(0, HORIZ_DIR, 2);
			       outtextxy(200, 400, "Press E to exit.");
			       delay(2000);
			       break;
			      }
			      else
			       P.score+=20;


				setfillstyle (1, 0);
				bar (240, 420, 420, 440);
				    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			   }
			if (rcou==0&&dcou==0)
			   {  setfillstyle(1, WHITE);
			      bar(380, 50, 460, 175);
			      delay(50);
			      setfillstyle( 1, 0);
				bar(380, 50, 460, 175);

			    if (P.SEQ[num]!=4)
			      {
				cleardevice();
				setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);
  setcolor(15);
			       settextstyle(0, HORIZ_DIR, 6);
				outtextxy(210, 190, "GAME");
			       outtextxy(210, 250, "OVER");
				settextstyle(0, HORIZ_DIR, 2);
			       outtextxy(190, 400, "Press E to exit.");
			       delay(2000);
			       break;
			      }
			      else
			       P.score+=20;


				setfillstyle (1, 0);
				bar (240, 420, 420, 440);
				    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			   }
			if (rcou==0&&dcou==1)
			   {  setfillstyle(1, WHITE);
			      bar(380, 185, 460, 310 );
			      delay(50);
			      setfillstyle( 1, 0);
				bar(380, 185, 460, 310);

			    if (P.SEQ[num]!=5)
			      {
				cleardevice();
				setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);
  setcolor(15);
			       settextstyle(0, HORIZ_DIR, 6);
				outtextxy(210, 190, "GAME");
			       outtextxy(210, 250, "OVER");
				settextstyle(0, HORIZ_DIR, 2);
			       outtextxy(190, 400, "Press E to exit.");
			       delay(2000);
			       break;
			      }
			      else
			       P.score+=20;


				setfillstyle (1, 0);
				bar (240, 420, 420, 440);
				    itoa(P.score, SCORE, 10);
			   outtextxy (240, 420, SCORE);
			   }


			num++;

			if (num==P.flash)
			   {P.level++;
			    P.flash=0;

			    P.savedgscore=P.score;
			    P.savedlevel=P.level;

			    gameset();

			    gamedet();

		       setcolor(DARKGRAY);
		       settextstyle (0, HORIZ_DIR, 2);
		       outtextxy (10, 420, P.name);
			itoa(P.level, LEVEL, 10);
		       outtextxy(450, 420, LEVEL);
		      setcolor(LIGHTGRAY);
		      rectangle (168, 48, 252, 177);
		      rectangle (169, 49, 251, 176);
		      rectangle (170, 50, 250, 175);
		      rectangle (171, 51, 249, 174);
		      rcou=2; acou=0; ucou=1; dcou=0;

			    num=0;
			   }
		      }
		   if (inentry2==' ')
		      { cleardevice();
			setfillstyle (CLOSE_DOT_FILL, 8);
			bar (0,0,645, 480);
			settextstyle (0, HORIZ_DIR, 4);
			borderq();
			setcolor(15);
			outtextxy(120, 200, "Your Progress");
			outtextxy(105, 240, "is being saved");
			settextstyle(0, HORIZ_DIR, 10);
					   setcolor(0);
					   outtextxy(260, 280, ".");
					   outtextxy(285, 280, ".");
					   outtextxy(310, 280, ".");
					   setcolor(15);
					   delay(1000);
					   outtextxy(260, 280, ".");
					   delay(1000);
					   outtextxy(285, 280, ".");
					   delay(1000);
					   outtextxy(310, 280, ".");
			settextstyle(0, HORIZ_DIR, 2);
			outtextxy(155, 400, "Press 'E' to continue.");

			break;
		      }

		 } while ((inentry2!='a'&&inentry2!='A')||(inentry2!='s'&&inentry2!='S')||(inentry2!='d'&&inentry2!='D')||(inentry2!='w'&&inentry2!='W')||(inentry2!='o'&&inentry2!='O'));

	 ///////////////////////////
	 //END OF PLAYING THE GAME//
	 ///////////////////////////

	 /////////////////////////////
	 //STORING DETAILS ONTO FILE//
	 /////////////////////////////
	     int c=0;

	     if(countername==1)  //writing onto file, when the same name already exists
	       {
		   ifstream fin;
		 fin.open("GAMES.DAT",ios::binary);
		 ofstream fout("tempo.dat",ios::binary);

		 while(fin.read((char*)&T,sizeof(T)))
		  {if(strcmp(T.name,P.name)==0)
		     if (inentry2!=' ') //game over
			{if(P.score<=T.score)  //if new score is lesser than previous score, old details are not altered.
			   { P.name[0]='\0';
			     P.score=0;
			     P.level=1;
			     P.flash=0;
			     P.fast=0;
			     P.savedgscore=0;
			     P.savedlevel=1;
			     for(i=0;i<6;i++)
				P.SEQ[i]=0;
			     break;
			   }
			 else  if (P.score>T.score)  // new score is more than previous score
			  {
		 fin.close();
		 fin.open("GAMES.DAT",ios::binary);
		 while(fin.read((char*)&T,sizeof(T)))
		     { if(strcmpi(T.name,P.name)!=0)
			 fout.write((char*)&T, sizeof(T));
		     }
		 fin.close();
		 fout.close();
		 remove("GAMES.DAT");
		 rename("tempo.dat","GAMES.DAT");

		 fin.open("GAMES.DAT",ios::binary);
		 fout.open("tempo.dat",ios::binary);
		 while(fin.read((char*)&T,sizeof(T)))
		 {
		 if(P.score<T.score)
			   fout.write((char*)&T,sizeof(T));
			else
			  {  P.flash=0;
			    P.fast=0;
			    P.savedgscore=0;
			    P.savedlevel=1;
			    for(i=0;i<6;i++)
			       P.SEQ[i]=0;

			   fout.write((char*)&P,sizeof(P));

			   P.name[0]='\0';
			   P.score=0;
			   P.level=1;

			   c++;
			   break;
			  }
		       }
		   if (c==0)
		     { P.flash=0;
		       P.fast=0;
		       P.savedgscore=0;
		       P.savedlevel=1;
		       for(i=0;i<6;i++)
			  P.SEQ[i]=0;
		       fout.write((char*)&P,sizeof(P));

			P.name[0]='\0';
			P.score=0;
			P.level=1;
		     }
		       while(fin)
			   {fout.write((char*)&T,sizeof(T));
			    fin.read((char*)&T,sizeof(T));
			   }
		  fin.close();
		  fout.close();
		  remove("GAMES.DAT");
		  rename("tempo.dat","GAMES.DAT");
			  }
			}
		     else    //game saved
			{
			 P.score=0;
			 P.level=1;
			 fin.seekg((int)((-1)*(sizeof(P))),ios::cur);
			 fout.write((char*)&P,sizeof(P));
			 P.name[0]='\0';

			 P.flash=0;
			 P.fast=0;
			 P.savedgscore=0;
			 P.savedlevel=1;
			 for(i=0;i<6;i++)
			    P.SEQ[i]=0;
			}
		  }

		 fin.close();
		 fout.close();
	       }
	     else if (countername==0) //first time registration
	       { if(inentry2!=' ') //first time registration and game over
		  {int c=0;
		   ifstream fin("GAMES.DAT",ios::binary);
		   ofstream fout("tempo.dat",ios::binary);
		   while(fin.read((char*)&T,sizeof(T)))
		       {if(P.score<T.score)
			   fout.write((char*)&T,sizeof(T));
			else
			  {P.flash=0;
			   P.fast=0;
			   P.savedgscore=0;
			   P.savedlevel=1;
			   for(i=0;i<6;i++)
			      P.SEQ[i]=0;

			   fout.write((char*)&P,sizeof(P));

			   P.name[0]='\0';
			   P.score=0;
			   P.level=1;

			   c++;
			   break;
			  }
		       }
		   if (c==0)
		     { P.flash=0;
		       P.fast=0;
		       P.savedgscore=0;
		       P.savedlevel=1;
		       for(i=0;i<6;i++)
			  P.SEQ[i]=0;
		       fout.write((char*)&P,sizeof(P));

			P.name[0]='\0';
			P.score=0;
			P.level=1;
		     }
		       while(fin)
			   {fout.write((char*)&T,sizeof(T));
			    fin.read((char*)&T,sizeof(T));
			   }
		  fin.close();
		  fout.close();
		  remove("GAMES.DAT");
		  rename("tempo.dat","GAMES.DAT");

		 }
		 else    //first time registration and game saved
		 {ofstream fout("GAMES.DAT",ios::binary|ios::app);
		  P.score=-1; //such names should not appear on highscores, see highscores page testing condition for the for loop
		  P.level=1;
		  fout.write((char*)&P,sizeof(P));
		  P.name[0]='\0';
		  P.flash=0;
		  P.fast=0;
		  P.savedgscore=0;
		  P.savedlevel=1;
		  for(i=0;i<6;i++)
		      P.SEQ[i]=0;
		  fout.close();
		  }
		}
	 ///////////////////////////////
	 //END OF STORING GAME DETAILS//
	 ///////////////////////////////
					do { inentry=getch();
			   } while (inentry!='e'&&inentry!='E');
		if (inentry=='e'||inentry=='E');
			      {wcou=0;
			       settextstyle (0, HORIZ_DIR, 4);
			       setcolor(7);
				    cleardevice();
	  setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);

 border();

 menudet();

     setcolor(GREEN);
     for (i=5; i>=0; i--)
	 circle (177, 162, 5-i);
     setcolor (RED);
     for (i=5; i>=0; i--)
	 circle (177, 212, 5-i);
     for (i=5; i>=0; i--)
	 circle (177, 262, 5-i);
     for (i=5; i>=0; i--)
	 circle (177, 312, 5-i);
     for (i=5; i>=0; i--)
	 circle (177, 362, 5-i);
     }



	     }
	  if (wcou==1)  //HELP
	     {
	      cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      border();
	      setcolor (15);
	      outtextxy (255, 40, "HELP");
	      settextstyle (0, HORIZ_DIR, 2);
	      outtextxy (20, 80,  "The Idea...");
	      setcolor(8);
	      outtextxy (20, 110, "The game focuses mainly on boosting");
	      outtextxy (20, 130, "one's memory power.");
	      setcolor (WHITE);
	      outtextxy (20, 160, "How The Game Works...");
	      setcolor (8);
	      outtextxy (20, 190, "The game works by displaying in front");
	      outtextxy (20, 210, "of you a set of tiles.");
	      outtextxy (20, 230, "A pattern of 4 to 6 flashes will be");
	      outtextxy (20, 250, "shown on different tiles.");
	      outtextxy (20, 270, "Recreate the pattern to earn");
	      outtextxy (20, 290, "points!");
	      setcolor (WHITE);
	      outtextxy (20, 320, "How to Play...");
	      setcolor (8);
	      outtextxy (20, 350, "Use the keys 'W', 'A', 'S',and 'D'");
	      outtextxy (20, 370, "to move around the tiles, and 'O'");
	      outtextxy (20, 390, "to click the tile you are on.");
	      settextstyle (0, HORIZ_DIR, 2);
	      setcolor (WHITE);
	      outtextxy (200, 420, "Back to Main Menu");
	      circle (180, 427, 5);
	      setcolor (GREEN);
	      for (i=5; i>=0; i--)
		  circle (180, 427, i);

	       do { inentry=getch();
		  } while (inentry!='e'&&inentry!='E');
	       if (inentry=='e'||inentry=='E');
		  {wcou=0;
		   settextstyle (0, HORIZ_DIR, 4);
		   setcolor(7);
		   cleardevice();
		   setfillstyle (CLOSE_DOT_FILL, 8);
		   bar (0,0,645, 480);

		   border();

		   menudet();

		   setcolor(GREEN);
		   for (i=5; i>=0; i--)
		       circle (177, 162, 5-i);
		   setcolor (RED);
		   for (i=5; i>=0; i--)
		       circle (177, 212, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 262, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 312, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 362, 5-i);
		  }

	     }
	  if (wcou==2)
	     {//scores
	      char sc[10];
	      cleardevice();
	      setfillstyle (CLOSE_DOT_FILL, 8);
	      bar (0,0,645, 480);

	      border();
	      setcolor(WHITE);
	      outtextxy(165, 40, "HIGHSCORES");
	      setcolor (LIGHTGRAY);
	      settextstyle (0, HORIZ_DIR, 2);

	      outtextxy(120, 110, "Player");
	      outtextxy(450, 110, "Score");
	      setcolor(DARKGRAY);
	      line(325, 110, 325, 400);
	      line(120, 150, 528, 150);

	      ifstream fin1;
	      fin1.open("GAMES.DAT",ios::binary);
	      fin1.read((char*)&T,sizeof(T));

	      for (i=0; fin1&&T.score!=-1&&i<5; i++)   //fin1-when eof is reached, T.score!=-1 - when the set of records which are newly created and saved in the first game itself are encountered, their scores are assigned to -1, and are not displayed.
		  { outtextxy(120, 170+(50*i), T.name);
		    itoa(T.score, SCORE, 10);
		    outtextxy(350, 170+(50*i), SCORE);
		    fin1.read((char*)&T,sizeof(T));
		  }
	      fin1.close();

	      setcolor(WHITE);
	      outtextxy (200, 420, "Back to Main Menu");
	      circle (180, 427, 5);
	      setcolor (GREEN);
	      for (i=5; i>=0; i--)
		  circle (180, 427, i);

	       do { inentry=getch();
		  } while (inentry!='e'&&inentry!='E');
	       if (inentry=='e'||inentry=='E');
		  {wcou=0;
		   settextstyle (0, HORIZ_DIR, 4);
		   setcolor(7);
		   cleardevice();
		   setfillstyle (CLOSE_DOT_FILL, 8);
		   bar (0,0,645, 480);

		   border();

		   menudet();

		   setcolor(GREEN);
		   for (i=5; i>=0; i--)
		       circle (177, 162, 5-i);
		   setcolor (RED);
		   for (i=5; i>=0; i--)
		       circle (177, 212, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 262, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 312, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 362, 5-i);
		  }

	     }
	  if (wcou==3)
	     { cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);

	       border();

	       setcolor(7);
	       settextstyle(0,HORIZ_DIR,2);
	       outtextxy(20, 120, "Game Creation:");
	       outtextxy(20, 180, "Arvind P");
	       delay(2000);
		cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);
	       borderq();
	       setcolor(7);
	       settextstyle(0,HORIZ_DIR,2);
	       outtextxy(20, 120, "Introductory Effects:");
	       outtextxy(20, 180, "Moneish R");
	       delay(3000);
		cleardevice();
	       setfillstyle (CLOSE_DOT_FILL, 8);
	       bar (0,0,645, 480);

	       borderq();

	       setcolor(7);
	       settextstyle(0,HORIZ_DIR,2);
	       outtextxy(20, 120, "Report Creation:");
	       outtextxy(20, 180, "Deepak Rohit");
	       delay(2000);

	       setfillstyle (CLOSE_DOT_FILL, 8);
 bar (0,0,645, 480);

 borderq();

 setcolor(7);
 settextstyle( 0, HORIZ_DIR, 12);
 outtextxy(196, 57, "T");
 setcolor(8);
 delay(150);
 outtextxy(276, 57, "H");
 setcolor(7);
 delay(150);
 outtextxy(367, 57, "E");
 setcolor(8);
 delay(150);
 outtextxy(47, 157, "M");
 setcolor(7);
 delay(150);
 outtextxy(137, 157, "E");
 setcolor(8);
 delay(150);
 outtextxy(227, 157, "M");
 setcolor(7);
 delay(150);
 outtextxy(317, 157, "O");
 setcolor(8);
 delay(150);
 outtextxy(407, 157, "R");
 setcolor(7);
 delay(150);
 outtextxy(497, 157, "Y");
 setcolor(8);
 delay(150);
 outtextxy(42, 257, "T");
 setcolor(7);
 delay(150);
 outtextxy(122, 257, "R");
 setcolor(8);
 delay(150);
 outtextxy(200, 257, "I");
 setcolor(7);
 delay(150);
 outtextxy(263, 257, "G");
 setcolor(8);
 delay(150);
 outtextxy(337, 257, "G");
 setcolor(7);
 delay(150);
 outtextxy(425, 257, "E");
 setcolor(8);
 delay(150);
 outtextxy(515, 257, "R");
 delay(1000);

 settextstyle(0,HORIZ_DIR,2);
 setcolor(15);
 outtextxy(20,400, "A Project done by");
 outtextxy(20,440, "Arvind P, Deepak Rohit, and Moneish R");

	       do { inentry=getch();
		  } while (inentry!='e'&&inentry!='E');
	       if (inentry=='e'||inentry=='E');
		  {wcou=0;
		   settextstyle (0, HORIZ_DIR, 4);
		   setcolor(7);
		   cleardevice();
		   setfillstyle (CLOSE_DOT_FILL, 8);
		   bar (0,0,645, 480);

		   border();

		   menudet();

		   setcolor(GREEN);
		   for (i=5; i>=0; i--)
		       circle (177, 162, 5-i);
		   setcolor (RED);
		   for (i=5; i>=0; i--)
		       circle (177, 212, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 262, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 312, 5-i);
		   for (i=5; i>=0; i--)
		       circle (177, 362, 5-i);
		  }
	     }
	  if (wcou==4)
	     {
	      cleardevice();
	      closegraph();
	      exit(0);
	     }
	 }
    } while ((entry!='w'&&entry!='W')||(entry!='s'&&entry!='S'));

 getch();
 closegraph();
}

void gameset()
     { int a, b, color, j=0;
       gamedet();

       randomize();
       if (P.flash==0) //after getting into a saved game, during the first time, P.flash must not be reassigned, and in the first time flash will not be zero.
	  P.flash=4+random(3);

       for (int i=0; i<P.flash; i++)
	    {
	     a=random(6);
	     color=random(15);
	     switch (a)
		  { case 0 :   pregamedet();
			       if(color!=0)
			       setfillstyle  (1, color);
			       else
			       setfillstyle (1, 15);
			       bar(170, 50, 250, 175);
			       itoa(P.level, LEVEL, 10);
			       outtextxy(305, 380, LEVEL);
			       outtextxy(240, 340, "LEVEL");
			       delay(1000-P.fast);
			       break;

		    case 1 :   pregamedet();
			       if(color!=0)
			       setfillstyle  (1, color);
			       else
			       setfillstyle (1, 15);
			       bar(170, 185, 250, 310);
			       itoa(P.level, LEVEL, 10);
			       outtextxy(305, 380, LEVEL);
			       outtextxy(240, 340, "LEVEL");
			       delay(1000-P.fast);
			       break;

		    case 2 :   pregamedet();
			       if(color!=0)
			       setfillstyle  (1, color);
			       else
			       setfillstyle (1, 15);
			       bar(275, 50, 355, 175);
			       itoa(P.level, LEVEL, 10);
			       outtextxy(305, 380, LEVEL);
			       outtextxy(240, 340, "LEVEL");
			       delay(1000-P.fast);
			       break;

		    case 3 :   pregamedet();
			       if(color!=0)
			       setfillstyle  (1, color);
			       else
			       setfillstyle (1, 15);
			       bar(275, 185, 355, 310);
			       itoa(P.level, LEVEL, 10);
			       outtextxy(305, 380, LEVEL);
			       outtextxy(240, 340, "LEVEL");
			       delay(1000-P.fast);
			       break;

		    case 4 :   pregamedet();
			       if(color!=0)
			       setfillstyle  (1, color);
			       else
			       setfillstyle (1, 15);
			       bar(380, 50, 460, 175);
			       itoa(P.level, LEVEL, 10);
			       outtextxy(305, 380, LEVEL);
			       outtextxy(240, 340, "LEVEL");
			       delay(1000-P.fast);
			       break;

		    case 5 :   pregamedet();
			       if(color!=0)
			       setfillstyle  (1, color);
			       else
			       setfillstyle (1, 15);
			       bar(380, 185, 460, 310);
			       itoa(P.level, LEVEL, 10);
			       outtextxy(305, 380, LEVEL);
			       outtextxy(240, 340, "LEVEL");
			       delay(1000-P.fast);
			       break;
		  }
	     P.SEQ[j]=a;
	     j++;
	    }
       if(1000-P.fast>200)
	 P.fast+=40;
       else if (1000-P.fast<=200&&1000-P.fast>100)
	       P.fast+=5;
     }

