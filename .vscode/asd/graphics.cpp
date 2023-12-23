#include<graphics.h>
#include<iostream>
int main(){
    int gdriver=DETECT,gmode;

    char data[]="C:\\TURBOC3\\BGI";

    initgraph(&gdriver,&gmode,data);
    circle(300,250,50);
    rectangle()
    closegraph();
    return 0;
}