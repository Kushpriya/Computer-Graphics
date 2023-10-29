#include<stdio.h>
#include<graphics.h>
int main()
{
	initwindow(1000,800);
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,(char*)"");
	int points[]={100,100,200,200,100,200,100,100};
	
	putpixel(100,100,RED);
	line(0,0,100,100);
	
	x=getmaxx()/2;
	y=getmaxy()/2;
	setcolor(YELLOW);
	
	circle(50,50,100);
	ellipse(500,500,0,360,50,80);
	

	rectangle(200,200,500,500);
	cleardevice();
	lineto(400,300);
	
	
	drawpoly(4,points);
	for(int i=100;i<=1000;i++)
	{
		setcolor(rand()%50);
		circle(rand()%i,rand()%i+20,rand()%100);
		delay(100);
	}
	
	getch();
	closegraph();
	return 0;
}
