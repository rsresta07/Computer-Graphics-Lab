#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP to display text message "helloall" inside circle by using point type 1,
//vertical direction with font family 1.

void plotPoints(int xc, int yc, int x, int y) {
	putpixel(xc + x, yc + y, 4);
	putpixel(xc - x, yc + y, 4);
	putpixel(xc + x, yc - y, 4);
	putpixel(xc - x, yc - y, 4);
	putpixel(xc + y, yc + x, 4);
	putpixel(xc - y, yc + x, 4);
	putpixel(xc + y, yc - x, 4);
	putpixel(xc - y, yc - x, 4);
}

void drawCircle(int xc, int yc, int r) {
	int x = 0, y = r;
	int p = 1 - r;

	plotPoints(xc, yc, x, y);

	while(y > x) {
		if (p < 0) {
			p = p + (2 * x) + 3;
		} else {
			p = p + (2 * (x - y)) + 5;
			y--;
		}
		x++;

		plotPoints(xc, yc, x, y);

	}
}
void main() {
	int gd = DETECT, gm;
	int xc = 150, yc = 150, r = 100;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	drawCircle(xc, yc, r);

	settextstyle(1,1,2);
	outtextxy(100,100,"helloall");

	getch();
}

