#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <conio.h>



void task1()
{
/*Process for implementing task1*/

int x1,x2,y1,y2,z1,z2,period=1;
int distance,x;
 float speed;
 
 for(;;)
 {
/*read the random values for cordinates (x1,y1) and (x2,y2)*/
x1=rand()%100;
x2=rand()%100;
y1=rand()%100;
y2=rand()%100;

z1=x1-x2;
z2=y1-y2;

distance=sqrt((z1*z2)+(z2*z2));
x=distance/period;
speed=x%100;
if(speed>10)
{
printf("Speed limit is %0.2f \n",speed);
printf("\t slowdown to 10mphs");
}
else{ printf("Perfect!!! ur under 10mph speed\n");}
 }
}


int main(){

time_t t;

srand((unsigned) time(&t));
printf("Task1 is running\n");
task1();

}