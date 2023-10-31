#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	putpixel(100,100,RED);
	line(0,0,100,100);
	getch();
	closegraph();
	return 0;
}
