#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//WAP to display the text in red with font family of your choice
void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(RED);
	settextstyle(3,HORIZ_DIR,4);//font style 3, horizontal direction, size 4
	outtextxy(100,100,"This is no 2 in red.");
	getch();
	closegraph();
}