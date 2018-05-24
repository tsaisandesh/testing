#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <conio.h>




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
printf("Task3 is running\n");
task3();

}