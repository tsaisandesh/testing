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
 
 
 
/*read the random values for cordinates (x1,y1) and (x2,y2)*/
x1=rand()%30;
x2=rand()%30;
y1=rand()%30;
y2=rand()%30;

z1=x1-x2;
z2=y1-y2;

distance=sqrt((z1*z2)+(z2*z2));
x=distance/period;
speed=x%100;
if(speed>10)
{
printf("Speed limit is %0.2f \n",speed);
printf("\t slowdown to 10mphs\n");
}
else{ printf("Perfect!!! ur under 10mph speed\n");}
 }


void task2()
{

int i,n ,sum=0,count=0,average,max=0,min=50;
for (i=1;i<=24;i++)
{
n=rand()%31+20;
printf("\nno.of students in %d hour is %d\n",i,n);
sum=sum+n;
average=sum/i;
if(n>max) max=n;
if(min>n) min=n; 
}
printf("max number is %d and min number is %d\n ",max,min);
printf("\nsum of the class for 24hrs is %d\n",sum);
printf("\n average of the class for one day is %d",average);
}

void task3()
{
int i,power,energy,sum=0,t=1,average;


for (i=1;i<=60;i++)
{
power=rand()%191+10;
printf("\n power reading for every second is %d\n",power);
energy=power*t;
sum=sum+energy;
average=sum/i;
if(power>5*average)
printf("spikes found when the power %d",power);

}
printf("Total energy consumption %d\n",sum);
printf("\n average energy consumed per minute is  %d",average);

}

int main(){

time_t t;

srand((unsigned) time(&t));
task1();
task2();
task3();

}
#dummy changes