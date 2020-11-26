#include<graphics.h>
#include<iostream>
int main()
{
int gdriver = DETECT,gmode;
int x,y,i,j=0,s,m=0,n=0;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

	for(s=0;s<350;s++){

	for(i=0;i<70;i++){
	setcolor(14);

       arc(85+m,360-n,0,360,i);

	}
	for(i=0;i<100;i++){
	line(35+(i)+m,410-n,60+(i/2)+m,440-n);

	}
	line(60+m,440-n,65+m,460-n);
	line(110+m,440-n,105+m,460-n);
	rectangle(65+m,460-n,105+m,475-n);
	j=0;
	for(i=0;i<5;i++){
	circle(70+j+m,450-n,3);
	rectangle(68+j+m,452-n,72+j+m,460-n);
	j=j+8;
	      }
	      delay(50);
	      cleardevice();
	       if(s<60){
	       m=m+1;
	       n=n+3;    }
	       else if(s<120){
	       m=m+2;
	       n=n-0;
	       }
	       else if(s<180){
	       m=m+1;
	       n=n-1;
	       }
	       else if(s<230){
	       m=m+1;
	       n=n-0;
	       }
	       else if(s<350){
		m=m+3;
		n=n+3;
	       }




	      }
getch();
}
