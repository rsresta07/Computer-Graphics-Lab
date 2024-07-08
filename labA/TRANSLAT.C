#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	//initial coordinate
	int x1,y1,x2,y2;
	int tx,ty;//translation coordinate
	//final coordinate after translation
	int x3,y3,x4,y4;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter first coordinate for line: (x1,y1)");
	scanf("%d%d",&x1,&y1);
	printf("Enter final coordinate for line: (x2,y2)");
	scanf("%d%d",&x2,&y2);
	printf("Enter translation factor:");
	scanf("%d%d",&tx,&ty);
	//line for translation
	setcolor(RED);
	line(x1,y1,x2,y2);
	//performing translation
	x3=x1+tx;
	y3=y1+ty;
	x4=x2+tx;
	y4=y2+ty;
	//after translation
	setcolor(GREEN);
	line(x3,y3,x4,y4);
	getch();
}