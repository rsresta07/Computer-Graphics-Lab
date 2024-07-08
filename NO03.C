#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//WAP to display following figure
void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(WHITE);
	setcolor(GREEN);
	rectangle(490,250,200,150);
	setcolor(BLUE);
	outtextxy(220,200,"This is computer graphics using C");
	getch();
}