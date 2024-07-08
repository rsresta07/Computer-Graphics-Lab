#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,BLUE);
	setcolor(RED);
	rectangle(100,100,300,200);
	floodfill(101,101,RED);
	outtextxy(180,150,"First");

	setfillstyle(SOLID_FILL,BLUE);
	setcolor(RED);
	rectangle(320,100,520,200);
	floodfill(321,101,RED);
	outtextxy(395,148,"Second");
	getch();


}