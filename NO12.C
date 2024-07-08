#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

//WAP to draw a line using DDA algorithm where x1 = 200, y1 = 200, x2 & y2
//is taken from the users

int main() {
	int gd = DETECT, gm;
	int x1 = 200, y1 = 200, x2, y2;
	int dx, dy, steplength, i;
	float xincrement, yincrement;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter the points (x, y): ");
	scanf("%d%d",&x2,&y2);

	dx = x2 - x1;
	dy = y2 - y1;

	if(abs(dx) > abs(dy)) {
		steplength = abs(dx);
	} else {
		steplength = abs(dy);
	}

	xincrement = dx / (float)steplength;
	yincrement = dy / (float)steplength;

	for(i = 0; i <= steplength; i++) {
		putpixel(x1, y1, 2);
		x1 = x1 + xincrement;
		y1 = y1 + yincrement;
	}

	getch();
	closegraph();
	return 0;
}