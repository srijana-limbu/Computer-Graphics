
/*
1. Declare the variables, x1, y1 and x2, y2, dx, dy, del x, del y as real and k as integer.
2. Perform 
dx = x2-x1
dy = y2-y1
3. Test if |dy|<|dx| then
	Else steps = |dy|
4. set del x = dx/steps
		del x =  dy/steps
		x = x1
		y = y1
5. Plot(x,y)
6.Do for k = 1 to steps
	x=delx
	y = y+dely
	
	Plot (x,y)
	
	end do.	
*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main() {

int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    
    double x1, y1, x2, y2, dx, dy, delx, dely;
    int k, steps;
    

    printf("Enter the values of x1, y1, x2, y2: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    

    dx = x2 - x1;
    dy = y2 - y1;
    

    if (fabs(dy) < fabs(dx)) {
        steps = fabs(dx);
    } else {
        steps = fabs(dy);
    }
    

    delx = dx / steps;
    dely = dy / steps;
    

    double x = x1;
    double y = y1;
    

    printf("Plot(%lf, %lf)\n", x, y);
    

    for (k = 1; k <= steps; k++) {
        x += delx;
        y += dely;
        printf("Plot(%lf, %lf)\n", x, y);
           putpixel(x,y,RED);
    }
    
//    putpixel(x,y,RED);
    
      getch();
    closegraph();
    return 0;
}