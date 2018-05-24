#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <conio.h>


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





	int main(){

	time_t t;

	srand((unsigned) time(&t));
	printf("Task2 is running\n");
	task2();

	}