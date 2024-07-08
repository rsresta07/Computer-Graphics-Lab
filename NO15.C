#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//WAP to translate a line with coordinate x1, y1 & x2, y2 with translation
//factor tx, ty. All the required input should be taken user

int main() {
	int gd = DETECT, gm;
	int x1, y1, x2, y2, tx, ty;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter the points (x1, y1, x2, y2): ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

	printf("Enter translation factor (tx, ty): ");
	scanf("%d%d",&tx,&ty);

	setcolor(2);
	line(x1, y1, x2, y2);

	//translation

	x1 += tx;
	y1 += ty;
	x2 += tx;
	y2 += ty;

	setcolor(3);
	line(x1, y1, x2, y2);

	getch();
	closegraph();
	return 0;

}