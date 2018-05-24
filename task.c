#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

void task1()
{
int x1,x2,y1,y2,z1,z2,time;
float d,speed;

printf("enter time ");
scanf("%d",&time);

x1=rand();
x2=rand();
y1=rand();
y2=rand();

z1= x1-x2;
z2= y1-y2;

d = sqrt((z1*z1)+(z2*z2));
speed=d/time;
if (speed>10)
{
printf("entered speed is more than 10mphs i.e is %f",speed);


}
else 
printf("on safe speed");

}

void task2()
{

int i,z,students=0;
float avg;
for(i=1;i<=24;i++)
{
z=rand();
if(z>20 && z<50)
{
students =students+z;
}
}
avg=students/24;
printf("average no. of students for 24 hrs are %f",avg);
}

int main()
{
int priority ;

{printf("enter priorty for task1 ");
scanf("%d%",&priority);

if(priority==1)
{
	task1();
}
else task2();
}

}