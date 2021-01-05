#include<graphics.h>  
#include<conio.h>  
Int main()  
{  
    Intgd=DETECT,gm, I, maxx, cy;  
    Initgraph(&gd, &gm, “C:\\TC\\BGI”);  
    Setbkcolor(WHITE);  
    Setcolor(RED);  
    Maxx = getmaxx();  
    Cy = getmaxy()/2;  
    For(i=0;i<maxx-140;i++)  
        {  
        Cleardevice();  
        Line(0+I,cy-20, 0+I, cy+15);  
        Line(0+I, cy-20, 25+I, cy-20);  
        Line(25+I, cy-20, 40+I, cy-70);  
        Line(40+I, cy-70, 100+I, cy-70);  
        Line(100+I, cy-70, 115+I, cy-20);  
        Line(115+I, cy-20, 140+I, cy-20);  
        Line(0+I, cy+15, 18+I, cy+15);  
        Circle(28+I, cy+15, 10);  
        Line(38+I, cy+15, 102+I, cy+15);  
        Circle(112+I, cy+15,10);  
        Line(122+I, cy+15 ,140+I,cy+15);  
        Line(140+I, cy+15, 140+I, cy-20);  
        Rectangle(50+I, cy-62, 90+I, cy-30);  
        Setfillstyle(1,BLUE);  
        Floodfill(5+I, cy-15, RED);  
        Setfillstyle(1, LIGHTBLUE);  
        Floodfill(52+I, cy-60, RED);  
        Delay(10);  
         }  
    Getch();  
    Closegraph();  
    Return 0;  
}  
