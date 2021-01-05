#include<stdio.h> 
#include<graphics.h> 
void pointClip(int XY[][2], int n, int Xmin, int Ymin,  int Xmax, int Ymax) 
{  
    detectgraph(&gm,&gr); 
    initgraph(&gm,&gr,"c:\\TURBOC3\\BGI"); 
    for (int i=0; i<n; i++) 
    { 
    if ( (XY[i][0] >= Xmin) && (XY[i][0] <= Xmax)) 
    { 
            if ( (XY[i][1] >= Ymin) && (XY[i][1] <= Ymax)) 
        putpixel(XY[i][0],XY[i][1],3); 
    } 
    } 
    printf ("Point inside the viewing pane:\n"); 
    for (int i=0; i<n; i++) 
    { 
        if ((XY[i][0] >= Xmin) && (XY[i][0] <= Xmax)) 
        { 
            if ((XY[i][1] >= Ymin) && (XY[i][1] <= Ymax)) 
                printf ("[%d, %d] ", XY[i][0], XY[i][1]); 
        } 
    }
    printf ("\nPoint outside the viewing pane:\n"); 
    for (int i=0; i<n; i++) 
    { 
        if ((XY[i][0] < Xmin) || (XY[i][0] > Xmax)) 
            printf ("[%d, %d] ", XY[i][0], XY[i][1]); 
        if ((XY[i][1] < Ymin) || (XY[i][1] > Ymax)) 
            printf ("[%d, %d] ", XY[i][0], XY[i][1]); 
    } 
} 
int main() 
{ 
    int XY[6][2] = {{10,10}, {-10,10}, {400,100}, 
                    {100,400}, {400,400}, {100,40}}; 
    int Xmin = 0; 
    int Xmax = 350; 
    int Ymin = 0; 
    int Ymax = 350; 
    pointClip(XY, 6,  Xmin, Ymin, Xmax, Ymax); 
    return 0; 
}
