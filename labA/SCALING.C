#include<stdio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	int x1,y1,x2,y2;
	int sx,sy;
	int x3,y3,x4,y4;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter the first coordinates (x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("ENter the final coordinates (x2,y2):");
	scanf("%d%d",&x2,&y2);
	printf("Enter scaling points:");
	scanf("%d%d",&sx,&sy);
	//line before scaling
	setcolor(RED);
	line(x1,y1,x2,y2);
	//performing scaling
	x3=x1*sx;
	y3=y1*sy;
	x4=x2*sx;
	y4=y3*sy;
	//line after scaling
	setcolor(GREEN);
	line(x3,y3,x4,y4);
	getch();
}