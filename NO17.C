#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP a program to scale a size of line x1, y1 & x1, y2 with scaling factor
//sx,sy. All the required input should be taken from the user.

int main() {
	int gd = DETECT, gm;
	int x1, y1, x2, y2;
	float sx, sy;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter the points (x1, y1, x2, y2): ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("Enter scaling factor (sx, sy): ");
	scanf("%f%f",&sx,&sy);

	setcolor(2);
	line(x1, y1, x2, y2);

	x1 *= sx;
	y1 *= sy;
	x2 *= sx;
	y2 *= sy;

	setcolor(1);
	line(x1, y1, x2, y2);

	getch();
	closegraph();
	return 0;

}