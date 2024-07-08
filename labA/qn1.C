#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(YELLOW);
	setcolor(BLUE);
	line(100,100,20,50);
	setcolor(RED);
	circle(200,300,30);
	setcolor(GREEN);
	rectangle(200,200,10,105);
	getch();
}