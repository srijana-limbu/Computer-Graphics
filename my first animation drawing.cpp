#include<stdio.h>
#include<graphics.h>

int main()
{

	initwindow(1000,800);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int points[]={100,100,200,200,100,100};
	
	putpixel(100,100,WHITE);
		putpixel(100,103,WHITE);
			putpixel(100,105,WHITE);
			line(0,0,100,100);
			
//			x=getmaxx()/2;
//			y=getmaxx()/2;
//			setcolor(WHITE);
//			
			
			
			circle(50,50,100);
			
			ellipse(500,500,0,300,50,80);			
			rectangle(200,200,500,500);
				cleardevice();
				
			drawpoly(4,points);
			
			for(int i=100; i<=1000;i++)
			{
				setcolor(rand()%50);
				circle(rand()%i,rand()%i+20,rand()%100);
				delay(100);
			}
			
//	line(0,0,200,200);
	getch();
	closegraph();
	return 0;

}
