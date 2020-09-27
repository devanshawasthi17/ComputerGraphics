

#include<graphics.h>
#include<iostream>
int q,z,l,r,a,s,i,f,k,j,m,h,g,t,b,d,c,w,p,u,v;

void background();
void bird();
void car();
void maninrain();
void birdroad();
void background2();

int main()
{

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");


background();
bird();
car();
maninrain();
delay(2000);


//aiming 1
//outbox
rectangle(55,130,120,175);
//bird
circle(90,150,5);
circle(89,148,1);
line(90,150,80,150);
line(80,150,88,147);
line(88,157,88,161);
line(91,157,91,161);
rectangle(85,160,93,170);
floodfill(92,169,WHITE);
circle(88,162,3);
floodfill(90,162,WHITE);
circle(92,163,3);
circle(90,163,3);
circle(92,165,3);
circle(92,166,3);
q=0;
h=0;
for(f=0;f<125;f++)
{
if(f<40)
{
//lens
circle(70+q,148,12);
line(55+q,148,85+q,148);
line(70+q,133,70+q,163);
circle(70+q,148,2);
delay(15);
cleardevice();
q=q+1;
 }
else if(f>39&&f<60)
{
//lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(20);
cleardevice();
h=h+1;
}
else if(f>59&&f<95)
{
//lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(25);
cleardevice();
q=q-1;
}
else if(f>94&&f<110)
{
  //lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(30);
cleardevice();
h=h-1;

}
else
{
   //lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(50);
cleardevice();
q=q+1;
}



//outbox
rectangle(55,130,120,175);
//bird
circle(90,150,5);
circle(89,148,1);
line(90,150,80,150);
line(80,150,88,147);
line(88,157,88,161);
line(91,157,91,161);
rectangle(85,160,93,170);
floodfill(92,169,WHITE);
circle(88,162,3);
floodfill(90,162,WHITE);
circle(92,163,3);
circle(90,163,3);
circle(92,165,3);
circle(92,166,3);

maninrain();
car();
bird();
background();
}

   //lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(600);



//bullet firing

//bullet//
h=0;
delay(2000);
for(g=0;g<225;g++)
{
rectangle(120+h,204,123+h,206);
floodfill(121+h,205,WHITE);
line(123+h,204,125+h,205);
delay(10);
cleardevice();
h=h+2;

bird();
car();
background();
maninrain();

}
delay(50);


//bird falling
b=0;
for(t=0;t<130;t++)
{
//bird
circle(595,230+b,5);
line(595,230+b,598,220+b);
line(595,230+b,592,220+b);
circle(597,228+b,1);
circle(590,230+b,3);
circle(590,231+b,3);
circle(591,230+b,3);
circle(591,231+b,3);
circle(580,230+b,3);
circle(580,231+b,3);
circle(582,230+b,3);
circle(582,231+b,3);
circle(584,230+b,3);
circle(584,231+b,3);
circle(586,230+b,3);
circle(586,231+b,3);
circle(586,232+b,3);
circle(586,233+b,3);
line(580,230+b,570,239+b);
line(580,230+b,570,238+b);
line(579,230+b,569,237+b);
line(579,230+b,568,236+b);
line(579,230+b,567,235+b);
line(579,230+b,566,234+b);
//hand
line(585,232+b,587,218+b);
line(585,232+b,583,218+b);
b=b+1;
delay(20);
cleardevice();
background();
maninrain();
car();

//bird after fall//
circle(595,230+b,5);
line(595,230+b,598,220+b);
line(595,230+b,592,220+b);
circle(597,228+b,1);
circle(590,230+b,3);
circle(590,231+b,3);
circle(591,230+b,3);
circle(591,231+b,3);
circle(580,230+b,3);
circle(580,231+b,3);
circle(582,230+b,3);
circle(582,231+b,3);
circle(584,230+b,3);
circle(584,231+b,3);
circle(586,230+b,3);
circle(586,231+b,3);
circle(586,232+b,3);
circle(586,233+b,3);
line(580,230+b,570,239+b);
line(580,230+b,570,238+b);
line(579,230+b,569,237+b);
line(579,230+b,568,236+b);
line(579,230+b,567,235+b);
line(579,230+b,566,234+b);
//hand
line(585,232+b,587,218+b);
line(585,232+b,583,218+b);



}


//car moving
d=0;
delay(1000);
for(c=0;c<480;c++)

{
//car moving//
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
floodfill(201+d,361,WHITE);
floodfill(199+d,359,WHITE);
circle(130+d,360,9);
floodfill(131+d,361,WHITE);
floodfill(129+d,359,WHITE);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);

delay(10);
cleardevice();
d=d+1;
background();
if(d<=365)
{
//bird after fall//
circle(595,230+b,5);
line(595,230+b,598,220+b);
line(595,230+b,592,220+b);
circle(597,228+b,1);
circle(590,230+b,3);
circle(590,231+b,3);
circle(591,230+b,3);
circle(591,231+b,3);
circle(580,230+b,3);
circle(580,231+b,3);
circle(582,230+b,3);
circle(582,231+b,3);
circle(584,230+b,3);
circle(584,231+b,3);
circle(586,230+b,3);
circle(586,231+b,3);
circle(586,232+b,3);
circle(586,233+b,3);
line(580,230+b,570,239+b);
line(580,230+b,570,238+b);
line(579,230+b,569,237+b);
line(579,230+b,568,236+b);
line(579,230+b,567,235+b);
line(579,230+b,566,234+b);
//hand
line(585,232+b,587,218+b);
line(585,232+b,583,218+b);
 }

else if(d>365)
{
birdroad();
}



if(d<=280)
{
maninrain();


circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);

line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);

if(d==280)
{
delay(2000);
}
 }

//car last
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
if(d>282)
{
circle(142+d,338,3);
floodfill(143+d,339,WHITE);
}
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);

}


delay(1500);
cleardevice();

background();

birdroad();


//car last
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);


//man in rain//
w=190;
circle(440+w,300,5);
line(439+w,299,440+w,300);
line(436+w,302,438+w,302);
line(438+w,308,438+w,305);
line(441+w,305,441+w,308);
rectangle(435+w,308,442+w,325);
line(442+w,335,442+w,325);
line(442+w,333,440+w,333);
line(437+w,335,442+w,335);
line(437+w,335,440+w,333);
line(440+w,333,435+w,325);
line(438+w,310,435+w,317);
line(440+w,310,436+w,317);

line(435+w,320,432+w,310);
line(436+w,320,432+w,310);
line(617,300,620,310);
line(616,300,619,310);
line(608,307,642,309);
line(608,305,642,307);

//missile
line(604,301,610,304);
line(610,308,604,311);
line(604,311,597,308);
line(604,301,597,308);

line(610,303,610,310);
line(612,301,612,312);
line(612,312,610,310);
line(612,301,610,303);
circle(606,306,3);
floodfill(607,307,WHITE);
circle(604,306,3);
floodfill(603,307,WHITE);
circle(602,306,2);

delay(1500);
//aiming
//outbox
rectangle(490,90,570,150);

//lens
line(500,100,504,100);
line(500,100,500,104);
line(520,100,524,100);
line(524,100,524,104);
line(524,115,524,119);
line(524,119,520,119);
line(500,119,504,119);
line(500,119,500,115);
line(510,110,514,110);
line(512,108,512,112);

//home
line(560,105,560,145);
line(560,105,520,105);
line(560,103,520,103);
line(560,105,560,98);
rectangle(540,120,550,128);
v=0;
for(c=0;c<5;c++)
{
line(542+v,120,542+v,128);
line(540,120+v,550,120+v);
v=v+2;
 }
rectangle(527,128,538,145);
circle(536,138,1);

p=0;
q=0;
for(z=0;z<112;z++)
{
if(z<15)
{
//lens
line(500+p,100+q,504+p,100+q);
line(500+p,100+q,500+p,104+q);
line(520+p,100+q,524+p,100+q);
line(524+p,100+q,524+p,104+q);
line(524+p,115+q,524+p,119+q);
line(524+p,119+q,520+p,119+q);
line(500+p,119+q,504+p,119+q);
line(500+p,119+q,500+p,115+q);
line(510+p,110+q,514+p,110+q);
line(512+p,108+q,512+p,112+q);
delay(15);
cleardevice();
p=p+1;

}
else if(z>14&&z<40)
{
 //lens
line(500+p,100+q,504+p,100+q);
line(500+p,100+q,500+p,104+q);
line(520+p,100+q,524+p,100+q);
line(524+p,100+q,524+p,104+q);
line(524+p,115+q,524+p,119+q);
line(524+p,119+q,520+p,119+q);
line(500+p,119+q,504+p,119+q);
line(500+p,119+q,500+p,115+q);
line(510+p,110+q,514+p,110+q);
line(512+p,108+q,512+p,112+q);
delay(20);
cleardevice();
q=q+1;
}
else if(z>39&&z<80)
{
//lens
line(500+p,100+q,504+p,100+q);
line(500+p,100+q,500+p,104+q);
line(520+p,100+q,524+p,100+q);
line(524+p,100+q,524+p,104+q);
line(524+p,115+q,524+p,119+q);
line(524+p,119+q,520+p,119+q);
line(500+p,119+q,504+p,119+q);
line(500+p,119+q,500+p,115+q);
line(510+p,110+q,514+p,110+q);
line(512+p,108+q,512+p,112+q);
delay(30);
cleardevice();
p=p+1;

}
 else if(z>79&&z<90)
{
//lens
line(500+p,100+q,504+p,100+q);
line(500+p,100+q,500+p,104+q);
line(520+p,100+q,524+p,100+q);
line(524+p,100+q,524+p,104+q);
line(524+p,115+q,524+p,119+q);
line(524+p,119+q,520+p,119+q);
line(500+p,119+q,504+p,119+q);
line(500+p,119+q,500+p,115+q);
line(510+p,110+q,514+p,110+q);
line(512+p,108+q,512+p,112+q);
delay(35);
cleardevice();
q=q-1;
}
else if(z>89&&z<112)
{
//lens
line(500+p,100+q,504+p,100+q);
line(500+p,100+q,500+p,104+q);
line(520+p,100+q,524+p,100+q);
line(524+p,100+q,524+p,104+q);
line(524+p,115+q,524+p,119+q);
line(524+p,119+q,520+p,119+q);
line(500+p,119+q,504+p,119+q);
line(500+p,119+q,500+p,115+q);
line(510+p,110+q,514+p,110+q);
line(512+p,108+q,512+p,112+q);
delay(45);
cleardevice();
p=p-1;

}


//aiming
//outbox
rectangle(490,90,570,150);

//home
line(560,105,560,145);
line(560,105,520,105);
line(560,103,520,103);
line(560,105,560,98);
rectangle(540,120,550,128);
v=0;
for(c=0;c<5;c++)
{
line(542+v,120,542+v,128);
line(540,120+v,550,120+v);
v=v+2;
 }
rectangle(527,128,538,145);
circle(536,138,1);


background();
//birdroad

line(575,350,590,357);
line(575,350,590,365);
line(590,365,590,357);
floodfill(588,359,WHITE);
line(570,365,590,365);
line(590,365,590,360);
line(570,365,590,360);
line(570,365,590,363);
line(575,365,560,360);
line(560,360,580,358);
line(560,360,580,359);
line(560,361,580,361);
circle(595,360,3);
floodfill(596,361,WHITE);

//missile
line(604,301,610,304);
line(610,308,604,311);
line(604,311,597,308);
line(604,301,597,308);

line(610,303,610,310);
line(612,301,612,312);
line(612,312,610,310);
line(612,301,610,303);
circle(606,306,3);
floodfill(607,307,WHITE);
circle(604,306,3);
floodfill(603,307,WHITE);
circle(602,306,2);

//man in rain//
w=190;
circle(440+w,300,5);
line(439+w,299,440+w,300);
line(436+w,302,438+w,302);
line(438+w,308,438+w,305);
line(441+w,305,441+w,308);
rectangle(435+w,308,442+w,325);
line(442+w,335,442+w,325);
line(442+w,333,440+w,333);
line(437+w,335,442+w,335);
line(437+w,335,440+w,333);
line(440+w,333,435+w,325);
line(438+w,310,435+w,317);
line(440+w,310,436+w,317);

line(435+w,320,432+w,310);
line(436+w,320,432+w,310);
line(617,300,620,310);
line(616,300,619,310);
line(608,307,642,309);
line(608,305,642,307);

//car
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);


}

//lens
line(500+p,100+q,504+p,100+q);
line(500+p,100+q,500+p,104+q);
line(520+p,100+q,524+p,100+q);
line(524+p,100+q,524+p,104+q);
line(524+p,115+q,524+p,119+q);
line(524+p,119+q,520+p,119+q);
line(500+p,119+q,504+p,119+q);
line(500+p,119+q,500+p,115+q);
line(510+p,110+q,514+p,110+q);
line(512+p,108+q,512+p,112+q);

delay(1000);
//missile firing
h=0;
for(g=0;g<180;g++)
{
//missile
line(604-h,301,610-h,304);
line(610-h,308,604-h,311);
line(604-h,311,597-h,308);
line(604-h,301,597-h,308);

line(610-h,303,610-h,310);
line(612-h,301,612-h,312);
line(612-h,312,610-h,310);
line(612-h,301,610-h,303);
circle(606-h,306,3);
floodfill(607-h,307,WHITE);
circle(604-h,306,3);
floodfill(603-h,307,WHITE);
circle(602-h,306,2);
delay(20);
cleardevice();
h=h+3;

background();
birdroad();


//man in rain//
w=190;
circle(440+w,300,5);
line(439+w,299,440+w,300);
line(436+w,302,438+w,302);
line(438+w,308,438+w,305);
line(441+w,305,441+w,308);
rectangle(435+w,308,442+w,325);
line(442+w,335,442+w,325);
line(442+w,333,440+w,333);
line(437+w,335,442+w,335);
line(437+w,335,440+w,333);
line(440+w,333,435+w,325);
line(438+w,310,435+w,317);
line(440+w,310,436+w,317);

line(435+w,320,432+w,310);
line(436+w,320,432+w,310);
line(617,300,620,310);
line(616,300,619,310);
line(608,307,642,309);
line(608,305,642,307);

//car
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);






}
delay(100);
cleardevice();


background2();

//man in rain//
w=190;
circle(440+w,300,5);
line(439+w,299,440+w,300);
line(436+w,302,438+w,302);
line(438+w,308,438+w,305);
line(441+w,305,441+w,308);
rectangle(435+w,308,442+w,325);
line(442+w,335,442+w,325);
line(442+w,333,440+w,333);
line(437+w,335,442+w,335);
line(437+w,335,440+w,333);
line(440+w,333,435+w,325);
line(438+w,310,435+w,317);
line(440+w,310,436+w,317);

line(435+w,320,432+w,310);
line(436+w,320,432+w,310);
line(617,300,620,310);
line(616,300,619,310);
line(608,307,642,309);
line(608,305,642,307);
//car
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
floodfill(201+d,361,WHITE);
floodfill(199+d,359,WHITE);
circle(130+d,360,9);
floodfill(131+d,361,WHITE);
floodfill(129+d,359,WHITE);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);


//explosion

for(i=0;i<15;i++)
{
//explosion
circle(100,300,60);
floodfill(110,302,WHITE);
delay(200);
circle(100,250,60+i);
floodfill(102,232,WHITE);
delay(100);
circle(100,350,60+i);
floodfill(102,385,WHITE);
delay(100);
circle(50,300,60+i);
floodfill(10,302,WHITE);
delay(100);
circle(150,300,60+i);
floodfill(185,300,WHITE);
floodfill(209,300,WHITE);
floodfill(198,300,WHITE);


  }

delay(1000);
cleardevice();
birdroad();
background2();

//car
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);

  //man in rain//
w=190;
circle(440+w,300,5);
line(439+w,299,440+w,300);
line(436+w,302,438+w,302);
line(438+w,308,438+w,305);
line(441+w,305,441+w,308);
rectangle(435+w,308,442+w,325);
line(442+w,335,442+w,325);
line(442+w,333,440+w,333);
line(437+w,335,442+w,335);
line(437+w,335,440+w,333);
line(440+w,333,435+w,325);
line(438+w,310,435+w,317);
line(440+w,310,436+w,317);
line(435+w,320,432+w,310);
line(436+w,320,432+w,310);
line(617,300,620,310);
line(616,300,619,310);
line(608,307,642,309);
line(608,305,642,307);

delay(2000);
cleardevice();

birdroad();
background2();
//car
circle(200+d,360,9);
circle(170+d,352,2);
circle(168+d,352,2);
circle(144+d,352,2);
circle(146+d,352,2);
circle(130+d,360,9);
line(119+d,360,105+d,360);
line(105+d,360,105+d,345);
line(105+d,345,115+d,345);
line(115+d,345,235+d,345);
line(200+d,340,180+d,345);
line(115+d,345,135+d,330);
line(135+d,330,180+d,330);
line(160+d,330,160+d,345);
rectangle(135+d,333,157+d,342);
rectangle(165+d,333,181+d,341);
circle(170+d,338,3);
floodfill(169+d,339,WHITE);
line(197+d,341,232+d,342);
line(133+d,342,125+d,342);
line(180+d,330,200+d,340);
line(235+d,340,235+d,355);
line(235+d,358,213+d,358);
circle(235+d,345,3);
circle(235+d,345,2);
line(190+d,360,140+d,360);


delay(650);

//car final moving
p=0;
for(i=0;i<50;i++)
{

//car
circle(200+d+p,360,9);
circle(170+d+p,352,2);
circle(168+d+p,352,2);
circle(144+d+p,352,2);
circle(146+d+p,352,2);
floodfill(201+d+p,361,WHITE);
floodfill(199+d+p,359,WHITE);
circle(130+d+p,360,9);
floodfill(131+d+p,361,WHITE);
floodfill(129+d+p,359,WHITE);
line(119+d+p,360,105+d+p,360);
line(105+d+p,360,105+d+p,345);
line(105+d+p,345,115+d+p,345);
line(115+d+p,345,235+d+p,345);
line(200+d+p,340,180+d+p,345);
line(115+d+p,345,135+d+p,330);
line(135+d+p,330,180+d+p,330);
line(160+d+p,330,160+d+p,345);
rectangle(135+d+p,333,157+d+p,342);
rectangle(165+d+p,333,181+d+p,341);
circle(170+d+p,338,3);
floodfill(169+d+p,339,WHITE);
circle(142+d+p,338,3);
floodfill(143+d+p,339,WHITE);
line(197+d+p,341,232+d+p,342);
line(133+d+p,342,125+d+p,342);
line(180+d+p,330,200+d+p,340);
line(235+d+p,340,235+d+p,355);
line(235+d+p,358,213+d+p,358);
circle(235+d+p,345,3);
circle(235+d+p,345,2);
line(190+(d+p),360,140+d+p,360);

 p=p+1;
 delay(800);
 cleardevice();


birdroad();
background2();

}

//second screen

//car initial movement
p=0;
d=-200;

for(i=0;i<125;i++)
{
circle(200+d+p,360,9);
circle(170+d+p,352,2);
circle(168+d+p,352,2);
circle(144+d+p,352,2);
circle(146+d+p,352,2);
floodfill(201+d+p,361,WHITE);
floodfill(199+d+p,359,WHITE);
circle(130+d+p,360,9);
floodfill(131+d+p,361,WHITE);
floodfill(129+d+p,359,WHITE);
line(119+d+p,360,105+d+p,360);
line(105+d+p,360,105+d+p,345);
line(105+d+p,345,115+d+p,345);
line(115+d+p,345,235+d+p,345);
line(200+d+p,340,180+d+p,345);
line(115+d+p,345,135+d+p,330);
line(135+d+p,330,180+d+p,330);
line(160+d+p,330,160+d+p,345);
rectangle(135+d+p,333,157+d+p,342);
rectangle(165+d+p,333,181+d+p,341);
circle(170+d+p,338,3);
floodfill(169+d+p,339,WHITE);
circle(142+d+p,338,3);
floodfill(143+d+p,339,WHITE);

line(197+d+p,341,232+d+p,342);
line(133+d+p,342,125+d+p,342);
line(180+d+p,330,200+d+p,340);
line(235+d+p,340,235+d+p,355);
line(235+d+p,358,213+d+p,358);
circle(235+d+p,345,3);
circle(235+d+p,345,2);
line(190+(d+p),360,140+d+p,360);
if(i<=125)
{

rectangle(300,300,330,400);
line(300,300,315,260);
line(330,300,315,260);
line(330,400,335,395);
line(335,395,335,420);
line(335,420,315,450);
line(300,400,295,395);
line(295,395,295,420);
line(295,420,315,450);



}
 p=p+2;
delay(50);
cleardevice();
 }
u=0;
s=0;
for(g=0;g<300;g++)
{

if(g==0)
{

rectangle(300,300,330,400);
line(300,300,315,260);
line(330,300,315,260);
line(330,400,335,395);
line(335,395,335,420);
line(335,420,315,450);
line(300,400,295,395);
line(295,395,295,420);
line(295,420,315,450);

for(i=0;i<7;i++)
{
circle(301,415,9+i);
circle(329,415,9+i);
circle(315,415,15+i);
circle(315,425,15+i);
circle(302,405,8+i);
circle(328,405,8+i);
}
circle(200+d+p,360,9);
circle(170+d+p,352,2);
circle(168+d+p,352,2);
circle(144+d+p,352,2);
circle(146+d+p,352,2);
circle(130+d+p,360,9);
line(119+d+p,360,105+d+p,360);
line(105+d+p,360,105+d+p,345);
line(105+d+p,345,115+d+p,345);
line(115+d+p,345,235+d+p,345);
line(200+d+p,340,180+d+p,345);
line(115+d+p,345,135+d+p,330);
line(135+d+p,330,180+d+p,330);
line(160+d+p,330,160+d+p,345);
rectangle(135+d+p,333,157+d+p,342);
rectangle(165+d+p,333,181+d+p,341);
circle(170+d+p,338,3);
floodfill(169+d+p,339,WHITE);
circle(142+d+p,338,3);
floodfill(143+d+p,339,WHITE);
line(197+d+p,341,232+d+p,342);
line(133+d+p,342,125+d+p,342);
line(180+d+p,330,200+d+p,340);
line(235+d+p,340,235+d+p,355);
line(235+d+p,358,213+d+p,358);
circle(235+d+p,345,3);
circle(235+d+p,345,2);
line(190+(d+p),360,140+d+p,360);

}

if(g>0&&g<5)
{
rectangle(300,300-s,330,400-s);
line(300,300-s,315,260-s);
line(330,300-s,315,260-s);
line(330,400-s,335,395-s);
line(335,395-s,335,420-s);
line(335,420-s,315,450-s);
line(300,400-s,295,395-s);
line(295,395-s,295,420-s);
line(295,420-s,315,450-s);
for(i=0;i<7;i++)
{
circle(301,415-s,9+i);
circle(329,415-s,9+i);
circle(315,415-s,15+i);
circle(315,425-s,15+i);
circle(302,405-s,8+i);
circle(328,405-s,8+i);
 }
circle(200+d+p,360,9);
circle(170+d+p,352,2);
circle(168+d+p,352,2);
circle(144+d+p,352,2);
circle(146+d+p,352,2);
circle(130+d+p,360,9);
line(119+d+p,360,105+d+p,360);
line(105+d+p,360,105+d+p,345);
line(105+d+p,345,115+d+p,345);
line(115+d+p,345,235+d+p,345);
line(200+d+p,340,180+d+p,345);
line(115+d+p,345,135+d+p,330);
line(135+d+p,330,180+d+p,330);
line(160+d+p,330,160+d+p,345);
rectangle(135+d+p,333,157+d+p,342);
rectangle(165+d+p,333,181+d+p,341);
circle(170+d+p,338,3);
floodfill(169+d+p,339,WHITE);
circle(142+d+p,338,3);
floodfill(143+d+p,339,WHITE);
line(197+d+p,341,232+d+p,342);
line(133+d+p,342,125+d+p,342);
line(180+d+p,330,200+d+p,340);
line(235+d+p,340,235+d+p,355);
line(235+d+p,358,213+d+p,358);
circle(235+d+p,345,3);
circle(235+d+p,345,2);
line(190+(d+p),360,140+d+p,360);

 delay(400);

}
if(g>5&&g<20)
{

rectangle(300,300-s,330,400-s);
line(300,300-s,315,260-s);
line(330,300-s,315,260-s);
line(330,400-s,335,395-s);
line(335,395-s,335,420-s);
line(335,420-s,315,450-s);
line(300,400-s,295,395-s);
line(295,395-s,295,420-s);
line(295,420-s,315,450-s);
for(i=0;i<7;i++)
{
circle(301,415-s,9+i);
circle(329,415-s,9+i);
circle(315,415-s,15+i);
circle(315,425-s,15+i);
circle(302,405-s,8+i);
circle(328,405-s,8+i);
 }
 circle(200+d+p,360,9);
circle(170+d+p,352,2);
circle(168+d+p,352,2);
circle(144+d+p,352,2);
circle(146+d+p,352,2);
circle(130+d+p,360,9);
line(119+d+p,360,105+d+p,360);
line(105+d+p,360,105+d+p,345);
line(105+d+p,345,115+d+p,345);
line(115+d+p,345,235+d+p,345);
line(200+d+p,340,180+d+p,345);
line(115+d+p,345,135+d+p,330);
line(135+d+p,330,180+d+p,330);
line(160+d+p,330,160+d+p,345);
rectangle(135+d+p,333,157+d+p,342);
rectangle(165+d+p,333,181+d+p,341);
circle(170+d+p,338,3);
floodfill(169+d+p,339,WHITE);
circle(142+d+p,338,3);
floodfill(143+d+p,339,WHITE);
line(197+d+p,341,232+d+p,342);
line(133+d+p,342,125+d+p,342);
line(180+d+p,330,200+d+p,340);
line(235+d+p,340,235+d+p,355);
line(235+d+p,358,213+d+p,358);
circle(235+d+p,345,3);
circle(235+d+p,345,2);
line(190+(d+p),360,140+d+p,360);

 delay(200);
}
if(g>20&&g<65)
{
rectangle(300,300-s,330,400-s);
line(300,300-s,315,260-s);
line(330,300-s,315,260-s);
line(330,400-s,335,395-s);
line(335,395-s,335,420-s);
line(335,420-s,315,450-s);
line(300,400-s,295,395-s);
line(295,395-s,295,420-s);
line(295,420-s,315,450-s);
for(i=0;i<7;i++)
{
circle(301,415-s,9+i);
circle(329,415-s,9+i);
circle(315,415-s,15+i);
circle(315,425-s,15+i);
circle(302,405-s,8+i);
circle(328,405-s,8+i);
 }
 circle(200+d+p,360,9);
circle(170+d+p,352,2);
circle(168+d+p,352,2);
circle(144+d+p,352,2);
circle(146+d+p,352,2);
circle(130+d+p,360,9);
line(119+d+p,360,105+d+p,360);
line(105+d+p,360,105+d+p,345);
line(105+d+p,345,115+d+p,345);
line(115+d+p,345,235+d+p,345);
line(200+d+p,340,180+d+p,345);
line(115+d+p,345,135+d+p,330);
line(135+d+p,330,180+d+p,330);
line(160+d+p,330,160+d+p,345);
rectangle(135+d+p,333,157+d+p,342);
rectangle(165+d+p,333,181+d+p,341);
circle(170+d+p,338,3);
floodfill(169+d+p,339,WHITE);
circle(142+d+p,338,3);
floodfill(143+d+p,339,WHITE);
line(197+d+p,341,232+d+p,342);
line(133+d+p,342,125+d+p,342);
line(180+d+p,330,200+d+p,340);
line(235+d+p,340,235+d+p,355);
line(235+d+p,358,213+d+p,358);
circle(235+d+p,345,3);
circle(235+d+p,345,2);
line(190+(d+p),360,140+d+p,360);

 delay(50);
}

if(g>65)
{

rectangle(300,300-s,330,400-s);
line(300,300-s,315,260-s);
line(330,300-s,315,260-s);
line(330,400-s,335,395-s);
line(335,395-s,335,420-s);
line(335,420-s,315,450-s);
line(300,400-s,295,395-s);
line(295,395-s,295,420-s);
line(295,420-s,315,450-s);

for(i=0;i<7;i++)
{
circle(301,415-s,9+i);
circle(329,415-s,9+i);
circle(315,415-s,15+i);
circle(315,425-s,15+i);
circle(302,405-s,8+i);
circle(328,405-s,8+i);
}

circle(200+d+p+u,360,9);
circle(170+d+p+u,352,2);
circle(168+d+p+u,352,2);
circle(144+d+p+u,352,2);
circle(146+d+p+u,352,2);
floodfill(201+d+p+u,361,WHITE);
floodfill(199+d+p+u,359,WHITE);
circle(130+d+p+u,360,9);
floodfill(131+d+p+u,361,WHITE);
floodfill(129+d+p+u,359,WHITE);
line(119+d+p+u,360,105+d+p+u,360);
line(105+d+p+u,360,105+d+p+u,345);
line(105+d+p+u,345,115+d+p+u,345);
line(115+d+p+u,345,235+d+p+u,345);
line(200+d+p+u,340,180+d+p+u,345);
line(115+d+p+u,345,135+d+p+u,330);
line(135+d+p+u,330,180+d+p+u,330);
line(160+d+p+u,330,160+d+p+u,345);
rectangle(135+d+p+u,333,157+d+p+u,342);
rectangle(165+d+p+u,333,181+d+p+u,341);
circle(170+d+p+u,338,3);
floodfill(169+d+p+u,339,WHITE);
circle(142+d+p+u,338,3);
floodfill(143+d+p+u,339,WHITE);
line(197+d+p+u,341,232+d+p+u,342);
line(133+d+p+u,342,125+d+p+u,342);
line(180+d+p+u,330,200+d+p+u,340);
line(235+d+p+u,340,235+d+p+u,355);
line(235+d+p+u,358,213+d+p+u,358);
circle(235+d+p+u,345,3);
circle(235+d+p+u,345,2);
line(190+(d+p+u),360,140+d+p+u,360);
u=u+2;

 }

s=s+2;
delay(20);
cleardevice();
 }


a=1;
for(z=0;z<160;z++)
{
if(z<90)
{
 //rocket
rectangle(300,300-a,310,340-a);
line(300,300-a,305,285-a);
line(305,285-a,310,300-a);

for(c=1;c<6;c++)
{
circle(305,340-a,c);
circle(302,340-a,c);
circle(307,340-a,c);
circle(305,343-a,c);
}
}

else if(z>90)
{

line(300,300-a,310,300-a);
line(300,300-a,305,285-a);
line(305,285-a,310,300-a);
for(c=1;c<4;c++)
{
circle(304,302-a,c);
circle(301,302-a,c);
circle(308,302-a,c);
circle(306,302-a,c);
}
rectangle(300,210,310,250);

delay(20);

}
delay(30);
cleardevice();

a=a+1;

//earth
circle(250,550,230);
line(62,479,437,479);
floodfill(260,460,WHITE);
}

cleardevice();


s=0;
for(i=1;i<7;i++)
{
circle(310,250,30+s);
floodfill(311,251,WHITE);
s=s+80;
}
circle(419,250,15);
circle(310,60,25);
circle(580,250,30);
 floodfill(578,250,WHITE);
 floodfill(582,250,WHITE);

i=0;
 for(c=0;c<12;c++)
 {
line(545-i,245,545-i,255);
line(537-i,250,545-i,245);
line(537-i,250,545-i,255);
i=i+1;
delay(200);
cleardevice();

circle(419,250,15);
circle(310,60,25);
circle(580,250,30);
 floodfill(578,250,WHITE);
 floodfill(582,250,WHITE);
s=0;
for(a=1;a<7;a++)
{
circle(310,250,30+s);
floodfill(311,251,WHITE);
s=s+80;
}
}
line(545-i,245,545-i,255);
line(537-i,250,545-i,245);
line(537-i,250,545-i,255);

delay(1000);
cleardevice();


circle(419,250,15);
circle(310,60,25);
circle(580,250,30);
 floodfill(578,250,WHITE);
 floodfill(582,250,WHITE);
s=0;
for(a=1;a<7;a++)
{
circle(310,250,30+s);
floodfill(311,251,WHITE);
s=s+80;
}

rectangle(530,250,534,255);
line(527,253,537,253);
rectangle(518,252,527,254);
rectangle(537,252,546,254);
floodfill(519,253,WHITE);
floodfill(538,253,WHITE);
delay(1000);

for(j=0;j<3;j++)
{
p=0;
q=0;
for(i=0;i<8;i++)
{
if(i==0)
{
rectangle(530+p,250+q,534+p,255+q);
line(527+p,253+q,537+p,253+q);
rectangle(518+p,252+q,527+p,254+q);
rectangle(537+p,252+q,546+p,254+q);
floodfill(519,253,WHITE);
floodfill(538,253,WHITE);
delay(100);

}

else if(i==1)
{
h=10;
r=30;
rectangle(530+h,250-r,534+h,255-r);
line(527+h,253-r,537+h,253-r);
rectangle(518+h,252-r,527+h,254-r);
rectangle(537+h,252-r,546+h,254-r);
floodfill(519+h,253-r,WHITE);
floodfill(538+h,253-r,WHITE);
delay(100);

}



else if(i==2)
{
p=p+48;
q=q+48;

rectangle(530+p,250-q,534+p,255-q);
line(527+p,253-q,537+p,253-q);
rectangle(518+p,252-q,527+p,254-q);
rectangle(537+p,252-q,546+p,254-q);
floodfill(519+p,253-q,WHITE);
floodfill(538+p,253-q,WHITE);

delay(100);

}

else if(i==3)
{
h=87;
r=30;
rectangle(530+h,250-r,534+h,255-r);
line(527+h,253-r,537+h,253-r);
rectangle(518+h,252-r,527+h,254-r);
rectangle(537+h,252-r,546+h,254-r);
floodfill(519+h,253-r,WHITE);
floodfill(538+h,253-r,WHITE);
delay(100);

}


else if(i==4)
{
p=p+48;
q=q-48;

rectangle(530+p,250-q,534+p,255-q);
line(527+p,253-q,537+p,253-q);
rectangle(518+p,252-q,527+p,254-q);
rectangle(537+p,252-q,546+p,254-q);
floodfill(519+p,253-q,WHITE);
floodfill(538+p,253-q,WHITE);

delay(100);

}

else if(i==5)
{

h=87;
r=-25;
rectangle(530+h,250-r,534+h,255-r);
line(527+h,253-r,537+h,253-r);
rectangle(518+h,252-r,527+h,254-r);
rectangle(537+h,252-r,546+h,254-r);
floodfill(519+h,253-r,WHITE);
floodfill(538+h,253-r,WHITE);
delay(100);

}

else if(i==6)
{
p=p-48;
q=q-48;
rectangle(530+p,250-q,534+p,255-q);
line(527+p,253-q,537+p,253-q);
rectangle(518+p,252-q,527+p,254-q);
rectangle(537+p,252-q,546+p,254-q);
floodfill(519+p,253-q,WHITE);
floodfill(538+p,253-q,WHITE);

delay(100);
}

else if(i==7)
{
h=10;
r=-25;
rectangle(530+h,250-r,534+h,255-r);
line(527+h,253-r,537+h,253-r);
rectangle(518+h,252-r,527+h,254-r);
rectangle(537+h,252-r,546+h,254-r);
floodfill(519+h,253-r,WHITE);
floodfill(538+h,253-r,WHITE);
delay(100);
}

s=0;
for(b=1;b<7;b++)
{
circle(310,250,30+s);
floodfill(311,251,WHITE);
s=s+80;
}
circle(419,250,15);
circle(310,60,25);
circle(580,250,30);
floodfill(578,250,WHITE);
floodfill(582,250,WHITE);

delay(300);
cleardevice();


s=0;
for(b=1;b<7;b++)
{
circle(310,250,30+s);
floodfill(311,251,WHITE);
s=s+80;
}
circle(419,250,15);
circle(310,60,25);
circle(580,250,30);
 floodfill(578,250,WHITE);
 floodfill(582,250,WHITE);
}
}

cleardevice();
delay(500);


l=140;
m=1;
j=479;
h=1;
g=640;
for(i=0;i<30;i++)
{
line(1,m,900,m);
line(1,j,900,j);
line(h,1,h,479);
line(g,1,g,479);
circle(300,250,l);
l=l+3;
m=m+6;
j=j-6;
h=h+6;
g=g-6;
delay(35);
 }

 h=0;
for(i=0;i<50;i++)
{
 line(200,200+h,210,200+h);
 line(230,200+h,240,200+h);
 line(260,200+h,270,200+h);
 line(290,200+h,300,200+h);
 line(310,200+h,320,200+h);
 line(340,200+(h/2),350,200+(h/2));
 line(372,200+h,382,200+h);
h=h+1;
delay(50);
}

h=0;
for(i=0;i<18;i++)
{
line(212+h,222,212+h,230);
line(272+h,200,272+h,208);
line(272+h,222,272+h,230);
line(322+h,200,322+h,208);
line(322+h,222,322+h,230);
line(360+2*h,200,360+h*2,208);
line(360+h*2,242,360+h*2,250);
line(336+h/2,225,346+h/2,250);
h=h+1;
delay(50);
}

delay(400);

for(i=0;i<130;i++)
{
line(1,m,900,m);
line(1,j,900,j);
line(h,1,h,479);
line(g,1,g,479);
m=m+6;
j=j-6;
h=h+6;
g=g-6;
delay(15);
}

delay(200);

m=1;
j=479;
h=1;
g=640;
for(i=0;i<300;i++)
{
line(1,m,900,m);
line(1,j,900,j);
line(h,1,h,479);
line(g,1,g,479);
m=m+1;
j=j-1;
h=h+1;
g=g-1;
delay(10);
 }

getch();
}

void background()
{
//common place
//home//
line(90,215,100,215);
line(100,215,100,250);
line(100,250,1,250);
line(90,250,90,380);
rectangle(35,300,60,320);
rectangle(1,250,100,255);
floodfill(3,252,WHITE);
floodfill(99,254,WHITE);
rectangle(30,261,80,255);
s=300;
r=40;
for(a=0;a<5;a++)
{
line(35,s,60,s);
line(r,300,r,320);
s=s+5;
r=r+5;
}
 rectangle(1,320,30,380);
 circle(25,350,2);


//road//
line(180,380,699,380);
line(170,340,610,340);

 //post2//
line(600,200,600,400);
line(590,180,590,390);

//plus//
line(570,215,620,265);
line(570,210,620,260);
line(570,210,570,215);
line(620,265,620,260);
for(i=210;i<215;i++)
{
line(570,i,620,i+50);
}

//post1//
line(190,180,190,390);
line(200,200,200,400);

//plus//
line(170,215,220,265);
line(170,210,220,260);
line(170,210,170,215);
line(220,260,220,265);
for(i=210;i<215;i++)
{
line(170,i,220,i+50);
}



//wire//
line(200,240,400,250);
line(400,250,600,240);
line(200,245,400,260);
line(400,260,600,245);
line(600,245,699,260);
line(600,240,699,250);

 //man
circle(62,200,6);
circle(66,199,1);
line(64,202,66,202);
line(64,203,66,203);
line(67,209,67,220);
line(58,209,58,220);
line(90,215,90,220);
line(90,220,0,220);
//gun
line(92,215,95,206);
line(95,206,98,215);
line(85,206,115,206);
line(115,206,115,204);
line(85,204,115,204);
line(95,204,98,206);
line(85,204,85,206);
line(112,204,112,202);
line(112,202,88,202);
line(88,202,88,204);
line(88,202,88,200);
line(81,200,92,200);
line(81,197,92,197);
line(81,200,81,198);
line(92,200,92,198);
line(90,202,70,203);
line(94,206,94,210);
line(94,206,80,206);
line(88,204,80,204);
line(80,204,74,212);
line(74,212,70,212);
line(70,212,70,210);
line(70,208,78,208);
line(70,206,78,206);
line(70,212,65,212);
line(65,212,65,204);
line(65,204,80,204);

//man
circle(62,200,6);
circle(66,199,1);
line(64,202,66,202);
line(64,203,66,203);
line(67,209,67,220);
line(58,209,58,220);
line(90,215,90,220);
line(90,220,0,220);


}
void bird()
{
//bird//
 circle(580,200,5);
 circle(579,199,1);
 line(571,200,580,200);
 line(571,200,575,198);
 line(571,200,575,202);
 line(583,205,578,205);
 line(578,205,578,215);
 line(583,205,583,217);
 line(583,217,592,223);
  line(583,217,592,224);
  line(583,217,592,225);
  line(583,217,592,227);
  line(583,217,591,227);
  line(583,217,590,229);
  circle(583,208,2);
  circle(583,209,2);
  circle(582,210,2);
  circle(583,211,2);
  circle(582,212,2);
  circle(583,213,2);
  circle(578,208,2);
  circle(578,209,2);
  circle(579,210,2);
  circle(578,211,2);
  circle(579,212,2);
  circle(578,213,2);
  circle(579,214,2);
  circle(580,216,3);
  circle(580,217,3);


}
void car()
{
  //car//
circle(200,360,9);
circle(170,352,2);
circle(168,352,2);
circle(144,352,2);
circle(146,352,2);
circle(130,360,9);
line(119,360,105,360);
line(105,360,105,345);
line(105,345,115,345);
line(115,345,235,345);
line(200,340,180,345);
line(115,345,135,330);
line(135,330,180,330);
line(160,330,160,345);
rectangle(135,333,157,342);
rectangle(165,333,181,341);
circle(170,338,3);
floodfill(169,339,WHITE);
line(197,341,232,342);
line(133,342,125,342);
line(180,330,200,340);
line(235,340,235,355);
line(235,358,213,358);
circle(235,345,3);
circle(235,345,2);
line(190,360,140,360);

}
void maninrain()
{
//man in rain//
circle(440,300,5);
line(439,299,440,300);
line(436,302,438,302);
line(438,308,438,305);
line(441,305,441,308);
rectangle(435,308,442,325);
line(442,335,442,325);
line(442,333,440,333);
line(437,335,442,335);
line(437,335,440,333);
line(440,333,435,325);
line(438,310,435,317);
line(440,310,436,317);
line(435,317,432,310);
line(436,317,432,310);
rectangle(432,310,431,292);
line(420,292,448,292);
line(426,284,442,284);
line(426,284,420,292);
line(442,284,448,292);

}
void birdroad()
{
  //birdroad

line(575,350,590,357);
line(575,350,590,365);
line(590,365,590,357);
floodfill(588,359,WHITE);
line(570,365,590,365);
line(590,365,590,360);
line(570,365,590,360);
line(570,365,590,363);
line(575,365,560,360);
line(560,360,580,358);
line(560,360,580,359);
line(560,361,580,361);
circle(595,360,3);
floodfill(596,361,WHITE);


}
void background2()
{

    //post2//
line(600,200,600,400);
line(590,180,590,390);

//plus//
line(570,215,620,265);
line(570,210,620,260);
line(570,210,570,215);
line(620,265,620,260);
for(i=210;i<215;i++)
{
line(570,i,620,i+50);
}

//post1//
line(190,180,190,390);
line(200,200,200,400);

//plus//
line(170,215,220,265);
line(170,210,220,260);
line(170,210,170,215);
line(220,260,220,265);
for(i=210;i<215;i++)
{
line(170,i,220,i+50);
}


//road//
line(180,380,699,380);
line(170,340,610,340);

//wire//
line(200,240,400,250);
line(400,250,600,240);
line(200,245,400,260);
line(400,260,600,245);
line(600,245,699,260);
line(600,240,699,250);

}
