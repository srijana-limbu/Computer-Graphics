#include<stdio.h>
#include<graphics.h>

int main()
{
		initwindow(1000,800);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int points[]={118,9,174,111,119,210,59,113,118,9};
	drawpoly(5, points);
	
	
	getch();
	closegraph();
	return 0;
}
