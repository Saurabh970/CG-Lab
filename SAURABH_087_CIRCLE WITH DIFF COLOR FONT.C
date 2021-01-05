#include<graphics.h>  
#include<conio.h>  
Void main()  
{  
    Intgd=DETECT, gm, I, x, y;  
    Initgraph(&gd, &gm, “C:\\TC\\BGI”);  
    X=getmaxx()/3;  
    Y=getmaxx()/3;  
    Setbkcolor(WHITE);  
    Setcolor(BLUE);  
    For(i=1;i<=8;i++)  
          {  
        Setfillstyle(I,i);  
        Delay(20);  
        Circle(x, y, i*20);  
        Floodfill(x-2+i*20,y,BLUE);  
    }  
    getch();  
    closegraph();  
}
