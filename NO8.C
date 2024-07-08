#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP to draw a two rectangle horizonatally in same direction with some
//text in center in red color and fill rectangle with blue color
void main() {
     int gd = DETECT, gm;
     int l1 = 50, top = 50, r1 = 300, bottom = 150;
     int l2 = 330, r2 = 580;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

     rectangle(l1,top,r1,bottom);
     setfillstyle(1,1);//pattern, color
     floodfill(55,55,15);
     setcolor(4);
     settextstyle(1,0,4);
     outtextxy(85,80,"Rectangle 1");

     setcolor(15);
     rectangle(l2,top,r2,bottom);
     setfillstyle(1,1);
     floodfill(335,55,15);
     setcolor(4);
     settextstyle(4,0,4);
     outtextxy(375,80,"Rectangle 2");

     getch();
}