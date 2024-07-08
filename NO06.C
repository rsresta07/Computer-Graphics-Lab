#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
	int gd=DETECT,gm;
	int x = 300, y = 230, r = 140;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	setcolor(4);
	circle(x, y, r);
	setfillstyle(1,1);
	floodfill(300,240,4);

	settextstyle(1,0,4);
	outtextxy(190,160,"This is circle");

	getch();
}