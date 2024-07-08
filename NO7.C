#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP to draw a semi cercle and u shaped circle
void main() {
	int gd = DETECT, gm;
	int xc = 200, yc = 200, r = 100;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	//x & y center, start angle(0 deg), end angle(180 deg) & radius.
	pieslice(xc, yc, 0, 180, r);

	getch();
}