//U_KNOW_ME_AND_U_DON'T_KNOW_ME
//SAKAMOTO_JIN
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;
#define M_PI 3.14159265358979323846
void line(int x1,int x2,int y1,int y2)
{
    double m=(y2-y1)*1.0/(x2-x1);
    double c=y1-m*x1;
    for(int x=x1;x<=x2;x=x+1)
    {
        double y=m*x+c;
        int p=2*(y-int(y));
        putpixel(x,int(y+p),BLUE);
    }
}
void fill_main(int x,int y )
{
    if(x>0&&y>0)
    {
    int c=getpixel(x,y);
   if(c!=BLUE&&c!=RED)
   {
        putpixel(x,y,RED);
        //delay(0.1);
        fill_main(x,y-1);
        fill_main(x,y+1);
    }
}
}
void fill(int x1,int x2,int y)
{
    for(int i=x1;i<=x2;i++)
     fill_main(i,y);
}
void saka_g(int g)
{
    for(double z=100;z<=540;z=z+1)
    {
    	int y=100-int(g*abs(sin((M_PI*(z-100)/220))));
    	putpixel(int(z),y,BLUE);
    }
}
void val()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(100,100,320,400);
    line(320,540,400,100);
    line(103,323,100,400);
    line(323,543,400,100);
    line(104,324,100,400);
    line(324,544,400,100);
    line(101,321,101,401);
    line(100,320,103,403);
    line(321,541,401,101);
    line(102,322,102,402);
    line(322,542,402,102);
    for(int i=0;i<220;i++)
    {
        putpixel(130,250+i,BLUE);
        putpixel(131,250+i,BLUE);
        putpixel(132,250+i,BLUE);
        putpixel(133,250+i,BLUE);
        putpixel(134,250+i,BLUE);
        putpixel(135,250+i,BLUE);
        putpixel(480,250+i,BLUE);
        putpixel(481,250+i,BLUE);
        putpixel(482,250+i,BLUE);
        putpixel(483,250+i,BLUE);
        putpixel(484,250+i,BLUE);
        putpixel(485,250+i,BLUE);
        putpixel(590,250+i,BLUE);
        putpixel(591,250+i,BLUE);
        putpixel(592,250+i,BLUE);
        putpixel(593,250+i,BLUE);
        putpixel(594,250+i,BLUE);
        putpixel(595,250+i,BLUE);
    }
    for(int i=0;i<115;i++)
    {
        putpixel(480+i,470,BLUE);
        putpixel(480+i,469,BLUE);
        putpixel(480+i,468,BLUE);
        putpixel(480+i,471,BLUE);
        putpixel(480+i,467,BLUE);
        putpixel(480+i,472,BLUE);


    }
    saka_g(90);
    saka_g(91);
    saka_g(92);
    saka_g(93);
    saka_g(94);
    saka_g(95);
   fill(100,319,100);
   fill(320,320,101);
}

int main()
{
    int gd = DETECT, gm;
static char ans='N';
do{
val();

   if(ans!='Y'||ans!='y')
   {
       closegraph();
   cout<<"\nWILL U BE THE OTHER SIDE OF MY HEART\tY/N\n";
   cin>>ans;
   initgraph(&gd, &gm, NULL);
   if(ans=='y')
   val();

    }
    if(ans=='y')
   {fill(321,540,100);
   //settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(200,430,"U_KNOW_ME_AND_U_DON'T_KNOW_ME");
   outtextxy(280,460,"SAKAMOTO");
    delay(500000);
    closegraph();
}
closegraph();
}while(ans!='y'||ans!='Y');
    return 0;
    }
