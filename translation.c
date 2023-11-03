#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void translation(int fig[],int edges,int dx,int dy)
{
	for(int i=0; i<edges; i++)
	{
		fig[2*i]+=dx;
		fig[2*i+1]+=dy;
		
	}
}
int main()
{
	int fig[20],edges,dx,dy;
	int gd=DETECT,gm;

	//clrscr();
	
	
	printf("Number of edges:-");
	scanf("%d",&edges);
	
	for(int i=0; i<edges; i++)
	{
		printf("Enter edges(x%d,y%d):",i,i);
		scanf("%d %d",&fig[2*i],&fig[2*i+1]);
		
	}
	fig[2*i]=fig[0];
	fig[2*i+1]=fig[1];
	edges += 1;
	
	printf("Enter dx:");
	scanf("%d",&dx);
	printf("Enter dy:");
	scanf("%d",&dy);
	
	initgraph(&gd,&gm,(char*)"");
	cleardevice();
	
	drawpoly(edges,fig);
	getch();
	
	translation(fig,edges,dx,dy);
	setcolor(RED);
	drawploy(edges,fig);
	getch();
		
}
