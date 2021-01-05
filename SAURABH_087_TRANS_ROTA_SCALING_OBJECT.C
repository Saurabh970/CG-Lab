#include<stdio.h>
#include<math.h>
#include<graphics.h>

char s[100];

void translation(int x1, int y1, int x2, int y2,int factor)
{
       int x,y;
       x = y = factor;
       setcolor(GREEN);
       rectangle(x1+x,y1+y,x2+x,y2+y);
       return;
}

void rotation(int x1, int y1, int x2, int y2,int t)
{
       int mx,my,rx1,ry1,rx2,ry2,rx3,ry3,rx4,ry4;
       float a;
       setcolor(YELLOW);
       while(t>90)
       {
	     t = t - 90;
       }
       a = (float)t*3.14/180;
       mx = (x1+x2)/2;
       my = (y1+y2)/2;
       rx1 =  (x1 - mx)*cos(a) - (y1 - my)*sin(a);
       ry1 =  (x1 - mx)*sin(a) + (y1 - my)*cos(a);
       rx2 =  (x2 - mx)*cos(a) - (y2 - my)*sin(a);
       ry2 =  (x2 - mx)*sin(a) + (y2 - my)*cos(a);
       rx3 =  (x2 - mx)*cos(a) - (y1 - my)*sin(a);
       ry3 =  (x2 - mx)*sin(a) + (y1 - my)*cos(a);
       rx4 =  (x1 - mx)*cos(a) - (y2 - my)*sin(a);
       ry4 =  (x1 - mx)*sin(a) + (y2 - my)*cos(a);
       rx1 = rx1 + mx;
       rx2 = rx2 + mx;
       rx3 = rx3 + mx;
       rx4 = rx4 + mx;

       ry1 = ry1 + my;
       ry2 = ry2 + my;
       ry3 = ry3 + my;
       ry4 = ry4 + my;
       line(rx1,ry1,rx3,ry3);
       line(rx2,ry2,rx4,ry4);
       line(rx3,ry3,rx2,ry2);
       line(rx4,ry4,rx1,ry1);

       return;
}

void scaling(int x1, int y1, int x2, int y2,int sx,int sy)
{
       int mx,my;
       setcolor(GREEN);
       mx = abs(x2 - x1)*sx/4;
       my = abs(y2 - y1)*sy/4;
       rectangle(x1-mx,y1-my,x2+mx,y2+my);
       return;
}


int main()
{
       int x1,x2,y1,y2,gd=DETECT,gm,choice,factor,sx,sy,angle;
       initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
       setcolor(RED);
       printf("Enter co-ordinates of rectangle: ");
       scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
       printf("1.Translation\n");
       printf("2.Scaling\n");
       printf("3.Rotation\n");
       scanf("%d",&choice);
       switch(choice)
       {
	case 1: printf("Enter Translation factor: ");
		scanf("%d",&factor);
		rectangle(x1,y1,x2,y2);
		translation(x1,y1,x2,y2,factor);
		break;
	case 2: printf("Enter scaling x and y values: ");
		scanf("%d %d",&sx,&sy);
		rectangle(x1,y1,x2,y2);
		scaling(x1,y1,x2,y2,sx,sy);
		break;
	case 3: printf("Enter Rotaion angle: ");
		scanf("%d",&angle);
		rectangle(x1,y1,x2,y2);
		rotation(x1,y1,x2,y2,angle);
		break;
       default: printf("Wrong Choice!...");
		break;
       }


       getch();
       return 0;
}
