#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	float x1,x2,x3,x4,y1,y2,y3,y4,theta,r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter coordinates for line (x1,y1,x2,y2):");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	printf("ENter rotation angle:");
	scanf("%f",&theta);
	setcolor(RED);
	line(x1,y1,x2,y2);
	r=theta*(3.14/180);
	x3=(x1*cos(r))-(y1*sin(r));
	y3=(x1*sin(r))+(y1*cos(r));
	x4=(x2*cos(r))-(y2*sin(r));
	y4=(x2*sin(r))+(y2*cos(r));
	setcolor(GREEN);
	line(x3,y3,x4,y4);
	getch();
}