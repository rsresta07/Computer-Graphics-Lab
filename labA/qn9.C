#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;
	int x1 = 100, y1 = 200;
	int x2 = 300, y2 = 200;
	int x3 = 200, y3 = 50;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(4);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	setfillstyle(1,2);
	floodfill(150,150,4);
	settextstyle(1,HORIZ_DIR,5);
	outtextxy(170,150,"Demo");
	getch();
}