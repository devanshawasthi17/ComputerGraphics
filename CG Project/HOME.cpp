#include<iostream>
#include<graphics.h>

int main()
{
int q,z,l,r,a,s,i,f,k,j,m,h,g,t,b,d,c,w,p,u,v;

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");




//home
line(100,1,500,1);
line(0,100,600,100);
line(100,1,0,100);
line(500,1,600,100);
line(200,90,400,90);
line(200,90,210,100);
line(400,90,390,100);
line(210,100,210,250);
line(390,100,390,250);
line(210,250,390,250);
circle(300,60,20);
floodfill(310,61,WHITE);
line(390,185,210,185);
m=0;
for(i=0;i<18;i++)
{
line(220+m,185,220+m,250);
m=m+10;
}
line(270,115,270,185);
line(330,115,330,185);
line(270,115,330,115);
circle(320,175,2);

line(200,90,300,1);
line(400,90,300,1);
line(30,100,30,260);
line(30,260,570,260);
line(570,100,570,260);

//window
m=0;
for(i=0;i<2;i++)
{
rectangle(90+m,140,140+m,210);
line(80+m,135,150+m,135);
line(80+m,135,90+m,140);
line(150+m,135,140+m,140);
line(115+m,140,115+m,210);
rectangle(80+m,210,150+m,217);
m=m+350;
}
line(30,260,30,450);
line(570,260,570,430);
line(30,265,570,265);
line(30,280,570,280);
line(60,280,60,450);
line(100,430,570,430);

line(100,280,100,430);
line(300,280,300,430);
line(300,380,570,380);

m=0;
for(i=0;i<8;i++)
{
line(320+m,380,320+m,430);
line(330+m,380,330+m,430);
s=0;
for(j=0;j<17;j++)
{
line(320+m,380+s,330+m,380+s);
s=s+3;
}
s=0;
m=m+30;

}
line(480,300,480,380);
line(480,300,540,300);
line(540,300,540,380);

rectangle(170,310,220,360);
rectangle(30,110,210,115);
rectangle(390,110,570,115);
rectangle(290,280,300,430);
rectangle(32,282,58,448);
floodfill(40,300,WHITE);
floodfill(180,200,WHITE);
floodfill(180,300,WHITE);
floodfill(120,30,WHITE);
floodfill(500,30,WHITE);
floodfill(450,350,WHITE);


getch();
}
