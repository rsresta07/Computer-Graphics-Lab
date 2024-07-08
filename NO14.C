#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP to draw a circle in green color using midpoint circle algorithm

void plotPoints(int xc, int yc, int x, int y) {
	putpixel(xc + x, yc + y, 2);
	putpixel(xc - x, yc + y, 2);
	putpixel(xc + x, yc - y, 2);
	putpixel(xc - x, yc - y, 2);
	putpixel(xc + y, yc + x, 2);
	putpixel(xc - y, yc + x, 2);
	putpixel(xc + y, yc - x, 2);
	putpixel(xc - y, yc - x, 2);
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
}	}
int main() {
	int gd = DETECT, gm;
	int xc, yc, r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter the coordinates (xc, yc): ");
	scanf("%d%d",&xc, &yc);
	printf("Enter the radius: ");
	scanf("%d",&r);
	drawCircle(xc, yc, r);
	getch();
	closegraph();
	return 0;
}
