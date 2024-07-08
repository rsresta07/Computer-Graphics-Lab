#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
   int gd = DETECT, gm;
   int xc = 100;
   int yc = 100;
   int r = 50;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

   circle(xc,yc,r);
   setcolor(WHITE);
   settextstyle(1,VERT_DIR,2);
   outtextxy(xc -20, yc -30, "helloall");
   getch();
}