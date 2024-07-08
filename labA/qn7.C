#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT, gm;
	int xc = 300, yc = 200, r = 100;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	pieslice(xc,yc,0,180,r);
	arc(xc,350,180,360,r);
	getch();
}