#include<graphics.h>
#include<iostream>

void bird();
void handup();
void handdown();
int a,b,c,d,e;


int main()
{

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

//setcolor(GREEN);
b=0;
c=0;
d=0;

for(a=1;a<220;a++)
{

bird();
if(a%2==0)
{
handup();
}
else
{
handdown();
}
delay(100);
cleardevice();
b=b+3;
}



getch();

}
void bird()
{
//bird
circle(50+b,100,5);
line(53+b,98,60+b,100);
line(53+b,102,60+b,100);
circle(50+b,98,1);
ellipse(35+b,100,0,360,10,5);
line(28+b,100,15+b,95);
line(28+b,100,14+b,96);
line(29+b,100,13+b,97);
line(29+b,101,12+b,98);
line(29+b,102,10+b,99);
line(29+b,103,12+b,100);

}

void handdown()
{
c=b;
//handdown
ellipse(35+c,106,210,360,6,15);
line(36+c,100,30+c,110);
line(39+c,107,36+c,113);
line(36+c,107,33+c,113);

}

void handup()
{
d=b;
//handup
ellipse(35+d,94,0,150,6,15);
line(36+d,100,30+d,90);
line(36+d,87,38+d,93);
line(34+d,87,36+d,93);

}
