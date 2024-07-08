#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

//WAP to rotate a line with coordinate x1, y1 & x2, y2 with rotation angle
//theta. All the required input should be taken from user.

void main(){
	int gd=DETECT,gm;
	int x1,y1,x2,y2;
	int xr,yr;
	float theta;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter the 1st coordinates of line(x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the 2nd coordinates of line (x2,y2): ");
	scanf("%d %d",&x2,&y2);
	printf("Enter rotation angle (theta): ");
	scanf("%1f",&theta);
	//before rotation
	setcolor(RED);
	line(x1,y1,x2,y2);
	theta=(theta*3.14)/180.0;
	xr=x1+((x2-x1)*cos(theta)-(y2-y1)*sin(theta));
	yr=y1+((x2-x1)*sin(theta)+(y2-y1)*cos(theta));
	//after rotation line is
	setcolor(GREEN);
	line(x1,y1,(int)xr,(int)yr);
	getch();
}