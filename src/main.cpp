# include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include "mousef.c"
main () 
{
int gd = DETECT, gm; 
initgraph (&gd, &gm, "");
initMouse ();
showMouse ();
x_range (100,400);
 y_range (100,400);
getch();


getch();
}