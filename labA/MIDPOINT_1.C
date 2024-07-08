#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	int xc,yc,x,y,p,r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter center of circle:");
	scanf("%d %d",&xc,&yc);
	printf("ENter the radius of circle:");
	scanf("%d",&r);
	//calculating decision parameter
	p=1-r;
	//calculating points on all eight octant
	x=0;
	y=r;
	while(x<=y){
		putpixel(x+xc,y+yc,RED);
		putpixel(x+xc,-y+yc,RED);
		putpixel(-x+xc,-y+yc,RED);
		putpixel(-x+xc,y+yc,RED);
		putpixel(y+xc,x+yc,RED);
		putpixel(y+xc,-x+yc,RED);
		putpixel(-y+xc,-x+yc,RED);
		putpixel(-y+xc,x+xc,RED);
		if(p<0){
			x= x+1;
			p=p+(2*x)+3;

		}else{
			x=x+1;
			y=y-1;
			p=p+(2*x)-(2*y)+5;
		}
	}
	getch();
}