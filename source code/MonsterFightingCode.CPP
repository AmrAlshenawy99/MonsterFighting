

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<mouse_c.h>
#include<key.h>
#include<math.h>
#include<bitmap.h>
//--------------------------------------------------------------------------
       void face(int y3,int t)
	{

	setcolor(t);
	circle(623,y3,10);
	circle(619,y3-5,1);
	circle(627,y3-5,1);
	arc(623,y3+2,180,0,4);

	}
//--------------------------------------------------------------------------
  void tooth(int x2,int y2)
       {

	line(x2,y2,x2+8,y2+10);
	line(x2+8,y2+10,x2+16,y2);

       }
//-----------------------------------------------------------------------------
      void rocket(int x,int y,int q)
      {

      setcolor(q);
      line(x,y,x-2,y-20);
      line(x+6,y,x+8,y-20);
      line(x,y,x+3,y-6);
      line(x+6,y,x+3,y-6);
      line(x-2,y-20,x+8,y-20);
      line(x-2,y-20,x+3,y-30);
      line(x+8,y-20,x+3,y-30);

      }
//-----------------------------------------------------------------------------
      void bullet(int x0,int y0,int w)
      {

      setcolor(w);
      line(x0,y0,x0,y0+14);
      line(x0+6,y0,x0+6,y0+14);
      ellipse(x0+3,y0+11,0,360,3,7);

      }
//-----------------------------------------------------------------------------
      void shot(int x1,int y1,int e)
      {
      setcolor(e);
      line(x1,y1,x1+80,y1);
      line(x1,y1+6,x1+80,y1+6);

      ellipse(x1+80,y1+3,270,90,6,3);
      ellipse(x1,y1+3,90,270,6,3);
      ellipse(x1+40,y1,0,180,40,12);

      line(x1+35,y1-20,x1+35,y1-12);
      line(x1+45,y1-12,x1+45,y1-20);
      ellipse(x1+40,y1-20,0,360,5,3);

      }
//-----------------------------------------------------------------------------
	void enemy(int x2 ,int y2,int r)
	{

	setcolor(r);
	tooth (x2+10,y2+14);  tooth (x2+10,y2+15);
	tooth(x2+26,y2+14);   tooth(x2+26,y2+15);
	tooth(x2+74,y2+14);  tooth(x2+74,y2+15);
	tooth(x2+58,y2+14);  tooth(x2+58,y2+15);
	rectangle(x2,y2,x2+100,y2+7);
	rectangle(x2+10,y2+7,x2+90,y2+14);
	line(x2+45,y2+14,x2+45,y2+27);
	line(x2+55,y2+14,x2+55,y2+27);
	ellipse(x2+50,y2+27,0,360,5,2);

	}
//-----------------------------------------------------------------------------
       void main()
       {
       int  d,v=2,u,f,g=90, c,k,i=0,w=70,h=70,x0,y0,x,y,x1,y1,x2,y2,x3,y3;
       int gd = DETECT,gm,errormode;
       initgraph(&gd,&gm,"");
//--------------------------------------------------------------------------
       setbkcolor(15);
       setcolor(12);
     //  rectangle(120,194,480,201);
	rectangle(120,195,480,201);
	outtextxy(180,180,"LOADIND....PLEASE WAIT!!");
	outtextxy(156,207,"THIS GAME IS DEVELOPED BY AMR ALSHENAWY");
       for(d=121;d<=479;d++)
       {
       setcolor(9);
       line(d,196,d,200);
       delay(v);
       if(d==140) {v=30;}

       if(d==240) { v=8; }

       if(d==390) { v=60; }

       if(d==410) { v=5; }

       }
       delay(3000);
//--------------------------------------------------------------------------
       cleardevice();
//--------------------------------------------------------------------------
		setbkcolor(12);int a,b=0,s=460,m=360;//???????
		for(a=0;a<=90;a++)
		//for the 4 moves as all steps in x,y  equal 90
		{

		setfillstyle(1,15);
		bar(180,b,460,b+20);
		bar(180,s,460,s+20);

		bar(b,230,b+280,250);
		bar(m,330,m+280,350);

		delay(20);
		setfillstyle(1,12);
		bar(180,b,460,b+20);
		bar(180,s,460,s+20);

		bar(b,230,b+280,250);
		bar(m,330,m+280,350);

		b+=2;   s-=2; m-=2;

		}
		setfillstyle(1,15); bar(180,180,460,200);
		setfillstyle(1,15); bar(180,230,460,250);

		setfillstyle(1,15); bar(180,280,460,300);
		setfillstyle(1,15); bar(180,330,460,350);
		delay(30);
		setcolor(9);
		outtextxy(187,187,"PRESS <= => TO MOVE LEFT AND RIGHT");
		delay(350);//sound(4) delay(2000);nosound();
		outtextxy(233,235,"PRESS SPACE TO SHOT");
		delay(350);//sound(4) delay(2000);nosound();
		outtextxy(238,285,"PRESS ESC TO EXIT");
		delay(350);//sound(4) delay(2000);nosound();
		outtextxy(230,335,"PRESS ANY KEY TO START");



		getch();
		getch();
//***--------------------------------------------------------------------------
		cleardevice();

//***--------------------------------------------------------------------------


       setbkcolor(9);
       setcolor(4);

//--------------------------------------------------------------------------
       for(f=1;f<=10;f++)
       {
       face(h,15);
       h+=30;
       }
//--------------------------------------------------------------------------
       setcolor(12);
       rectangle(5,90,10,350);
       setfillstyle(1,12); bar(3,87,12,353);
       setfillstyle(1,14);
       bar(5,90,10,350);

//--------------------------------------------------------------------------
	x1=0;x2=300;y0=35;
	char score[5];

	for(;;)
	{
	setcolor(4);
	outtextxy(575,5,"SCORE:"); //make the score visible if the enemy shape pass on it

//--------------------------------------------------------------------------
	enemy(x2,5,14);
	delay(10);
	enemy(x2,5,9);
	x2+=20;

	if(x2>=540)
	{ x2=0; }

//--------------------------------------------------------------------------
	 for(y0=35;y0<=475;y0+=15) // bullet for loop
	 {

	 bullet(x2+46,y0,10);
	 delay(1);
	 bullet(x0+46,y0,9);

	if(x2+46>=x1-15&&x2+46<=x1+80&&y0==440)
	{

	 shot(x1,468,12); delay(150); shot(x1,468,15) ;delay(150);
	 shot(x1,468,12); delay(150); shot(x1,468,15);// bullet(x2+46,440,9);
	 face(w,12);delay(150);
	 face(w,15);delay(150);
	 face(w,12);delay(150);
	 face(w,15);delay(150);
	 face(w,9);
	 w+=30;
	 if(w==370)
	  {
	  delay(300);  shot(x1,468,12);
	  delay(150);  shot(x1,468,15);
	  delay(150);  shot(x1,468,12);
	  delay(150);  shot(x1,468,15);// bullet(x2+46,440,9);
	  delay(300);  shot(x1,468,12);
	  delay(150);  shot(x1,468,15);
	  delay(150);  shot(x1,468,12);
	  delay(150);  shot(x1,468,12);
	  delay(1000);
	 cleardevice();
	 setbkcolor(9); setcolor(4);
	 setfillstyle(1,15); bar(160,195,440,210);
	 outtextxy(260,200,"GAME OVER");
	 delay(2500);
	 setcolor(15);
	 outtextxy(260,200,"GAME OVER");
	 setcolor(4);
	 outtextxy(260,200,"YOUR SCORE IS: ");
	 outtextxy(375,200,score);
	 delay(3000);

//--------------------------------------------------------------------------
	 cleardevice();setbkcolor(9); setcolor(4);
       setfillstyle(1,15);
       for(int l=0;l<=225;l++)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(1);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }
	for(l=225;l>=130;l--)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(5);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }
	for( l=130;l<=225;l++)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(10);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }


	setfillstyle(1,15);
	bar(190,195+15+15,485,210+15+15);
	bar(190,195+30+15+15,485,210+30+15+15);
	delay(200);
	setcolor(12);

	outtextxy(210,200+15+15,"THANKS FROM ME { AMR ALSHENAWY }");
	 delay(900);
	 setcolor(4);
       outtextxy(210,200+30+15+15,"PRESS ANY KEY TO EXIT THE GAME");
       getch();
       getch();

       closegraph();
	}
	}


//--------------------------------------------------------------------------
	 shot(x1,468,15); //To still visible when you stop moving

	 int a ;
	 if(kbhit())
	 a=getkey();
	 if(it_key(a)==1)
	 switch(a)
	 {

	 case Right:
	 {

	 if(x1==560)
	 {

	  break;
	 }

	 shot(x1,468,15) ;
	 delay(30);
	 shot(x1,468,9);
	 x1+=7;  break;
	 } // right

	 case Left:
	 {
	 if(x1==0)
	 {

	 break;
	 }
	 shot(x1,468,15) ;
	 delay(30);
	 shot(x1,468,9);
	 x1-=7; break;
	 }

	  shot(x1,468,15) ;

	  case Space:
	  {

	  for(y1=450;y1>=5;y1-=10) //rocket for loop
	  {
	  shot(x1,468,15);
	 rocket(x1+35,y1,11);
	 delay(5);
	 rocket(x1+35,y1,9);
//--------------------------------------------------------------------------
	if(x1+35>=x2-10&&x1+35<=x2+100&&y1==30)//shotting th enemy condition
	{
	 enemy(x2,5,12); delay(150); enemy(x2,5,14) ;delay(150);
	 enemy(x2,5,12); delay(150); enemy(x2,5,14);
      //break;//In order not to show the tail of the narrow after shocking
//--------------------------------------------------------------------------
       setfillstyle(1,9); bar(5,g,10,g+13);  g+=13;
       if(g==285)
       { setfillstyle(1,4); bar(5,285,10,350); }
       //decrease the spirit of the enemy

//--------------------------------------------------------------------------

	 i+=1; setcolor(9);   outtextxy(623 ,5,score);
	  //not to write on the previous value
	 setcolor(4);outtextxy(575,5,"SCORE:");
	 sprintf(score,"%d",i); setcolor(15);   outtextxy(623,5,score);
	 if(i==20)
	 {
	 delay(200);  enemy(x2,5,12);
	 delay(300);  enemy(x2,5,14);
	 delay(150);  enemy(x2,5,12);
	 delay(150);  enemy(x2,5,14);
	 delay(200);  enemy(x2,5,12);
	 delay(500);  enemy(x2,5,9); delay(300);


//--------------------------------------------------------------------------

	 cleardevice();setbkcolor(9); setcolor(4);
	 setfillstyle(1,15); bar(190,195,485,210);
	 outtextxy(200,200,"CONGRATULATION YOU'V KILLED THE ENEMY"); delay(2500);
	 setcolor(15); outtextxy(200,200,"CONGRATULATION YOU'V KILLED THE ENEMY");
	 setcolor(4);  outtextxy(260,200,"YOUR SCORE IS: ");
	 outtextxy(375,200,score);   delay(3000);


	 cleardevice();setbkcolor(9); setcolor(4);
       setfillstyle(1,15);
       for(int l=0;l<=225;l++)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(1);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }
	for(l=225;l>=130;l--)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(5);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }
	for( l=130;l<=225;l++)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(10);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }


	setfillstyle(1,15);
	bar(190,195+15+15,485,210+15+15);
	bar(190,195+30+15+15,485,210+30+15+15);
	delay(200);
	setcolor(12);

	outtextxy(210,200+15+15,"THANKS FROM ME { AMR ALSHENAWY }");
	 delay(900);
	 setcolor(4);
       outtextxy(210,200+30+15+15,"PRESS ANY KEY TO EXIT THE GAME");
       getch();
       getch();

//--------------------------------------------------------------------------
	getch();
	getch();
	closegraph();
	}
	}// end if
//--------------------------------------------------------------------------

       } // end of rocket for loop
	break;

       } //end of case space

	 case Esc:
	goto exit;

	} //end of switch

	 bullet(x2+46,y0,9);
	 enemy(x2,5,14);

	}// end of bullet for Loop



	} // end of infinity for loop
//--------------------------------------------------------------------------

       exit:
       cleardevice();setbkcolor(9); setcolor(4);
       setfillstyle(1,15);
       for(int l=0;l<=225;l++)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(1);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }
	for(l=225;l>=130;l--)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(5);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }
	for( l=130;l<=225;l++)
       {
	setfillstyle(1,15);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);
	delay(10);
	setfillstyle(1,9);
	bar(190,l,485,l+15);
	bar(190,l+30,485,l+15+30);


       }


	setfillstyle(1,15);
	bar(190,195+15+15,485,210+15+15);
	bar(190,195+30+15+15,485,210+30+15+15);
	delay(200);
	setcolor(12);

	outtextxy(210,200+15+15,"THANKS FROM ME { AMR ALSHENAWY }");
	 delay(900);
	 setcolor(4);
       outtextxy(210,200+30+15+15,"PRESS ANY KEY TO EXIT THE GAME");



	getch();
	getch();
       closegraph();


//--------------------------------------------------------------------------

       closegraph();

       }
