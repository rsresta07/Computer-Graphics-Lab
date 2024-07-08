#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(RED);
	settextstyle(3,0,4);
	outtextxy(100,100,"Displaying red color");
	getch();
}