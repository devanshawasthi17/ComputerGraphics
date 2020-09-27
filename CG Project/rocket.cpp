#include <graphics.h> 

#include <iostream> 
#include <string.h> 
using namespace std;
int main() {    
	int gdriver = DETECT, gmode;    
	initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");    
	int i,style,midx,midy;    
	midx = getmaxx() / 2;    
	midy = getmaxy() / 2;    
	char s[] = "WELCOME TO INDIAN SPACE RESEARCH ORGANIZATION\nTIGHT YOUR SEAT BELT\nLAUNCHING\n";    
	for(i = 0; i < strlen(s); i++) {  
		cout << s[i];  
		delay(50);  
	 }    
	delay(1000);    
	cout << "  3  "; 
	delay(1000);    
	cout << "  2  "; 
	delay(1000);    
	cout << "  1  "; 
	delay(1000);    
	cleardevice();    
	setcolor(LIGHTGREEN);    
	settextjustify(CENTER_TEXT, CENTER_TEXT);    
	style = DEFAULT_FONT;    
	settextstyle(style, HORIZ_DIR, 8);    
	outtextxy(midx, midy,"GO");    
	delay(1800);    
	cleardevice();    
	for (i=0; i<400; i++) {     
		setcolor(WHITE);    
		line(300,300-i,350,300-i);  // upper horizon    
		line(300,300-i,300,400-i);  // left vertical    
		line(270,400-i,380,400-i);  // bottom horizon    
		line(350,300-i,350,400-i);  // right vertical    
		line(300,350-i,270,400-i);  // left slant    
		line(350,350-i,380,400-i);  // right slant    
		line(300,300-i,325,260-i);  // top left slan    
		line(325,260-i,350,300-i);  // top right slant      
	// LAUNCHING SMOKE    
		if (i==0) {      
			delay(1400); 
		 	for ( int k=0; k<70; k++) {      
				delay(100);      
				setcolor(DARKGRAY);      
				circle(250,400,k);      
				circle(270,400,k);      
				setcolor(LIGHTGRAY);     
				circle(285,400,k+10);      
				circle(318,400,k+30);      
				circle(335,400,k+30);      
				circle(370,400,k+10);      
				setcolor(DARKGRAY);      
				circle(390,400,k);      
				circle(410,400,k);     
			}    
		}      
		setcolor(BLUE);   
		circle(250,300+i,400-i);   
		circle(250,300+i,399-i);   
		circle(250,300+i,398-i);   
		circle(250,300+i,397-i);   
		circle(250,300+i,396-i);   
		circle(250,300+i,395-i);   
		circle(250,300+i,394-i);   
		circle(250,300+i,393-i);   
		circle(250,300+i,392-i);   
		circle(250,300+i,391-i);   
		circle(250,300+i,390-i);   
		circle(250,300+i,389-i);   
		circle(250,300+i,388-i);    
		if (i%2==0) {      
			for ( int v=10; v>=0; v--) {      
				setcolor(YELLOW);      
				circle(318,400-i,v);      
				circle(335,400-i,v);     
			}      
			setcolor(LIGHTRED);           
			circle(325,260-i,5);      
			circle(325,260-i,4);      
			circle(325,260-i,3);      
			circle(325,260-i,2);      
			circle(325,260-i,1); 
		} 
		else {      
			setcolor(YELLOW);      
			for ( int w=10; w>=0; w--) {      
				circle(300,400-i,w);      
				circle(325,400-i,w);      
				circle(350,400-i,w);     
			}    
		}    
		delay(5);    
		cleardevice();   
	}   
	getch();  
	closegraph();
	return 0;
} 
