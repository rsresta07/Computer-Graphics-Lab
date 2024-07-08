#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(BLACK);
	setcolor(2);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(450,300,200,150);
	floodfill(250,160,2);
	settextstyle(4,0,4);
	outtextxy(220,150,"Rectangle");
	getch();
}