#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP to draw a line using BSA algorithm where ending coordinateis 600 & 300
//& starting coordinates should be taken by user

void plotPoints(int x1, int y1, int x2, int y2) {
	int dx, dy, m, pk, x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	m = (dy / dx);
	x = x1;
	y = y1;

	if(m <= 1) {
		pk = (2 * dy) - dx;
		while(x <= x2) {
			putpixel(x, y, 4);

			if (pk < 0) {
				pk = pk + (2 * dy);
			} else {
				pk = pk + (2 * dy) - (2 * dx);
				y++;
			}
			x++;
			dx--;

		}
	} else {
		pk = (2 * dx) - dy;
		while(y <= y2) {
			putpixel(x, y, 4);
			if (pk < 0) {
				pk = pk + (2 * dx);
			} else {
				pk = pk + (2 * dx) - (2 * dy);
				x++;
			}
			y++;
			dy--;
		}

	}
}

int main() {
	int gd = DETECT, gm;
	int x1, y1, x2 = 600, y2 = 300, temp;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter starting values (x1, y1): ");
	scanf("%d%d",&x1,&y1);

	if(x1 > x2 && y1 > y2) {
		temp = x1;
		x1 = x2;
		x2 = temp;
		temp = y1;
		y1 = y2;
		y2 = temp;
	}

	plotPoints(x1, y1, x2, y2);

	getch();
	closegraph();
	return 0;
}