#include<stdio.h>

float average(int a[],int size)
{
 int i,sum=0 ;
 float average;
  
for( i=0;i<size;i++)
{ 
  sum= sum+a[i];

}
average =sum/size;
return average;
}

float percentage(int total)
{

 float iavg,p;

iavg=total/3;
 p=iavg;
return p;
}
 

void main()
{
 char students[5][100];
 int i,m[5],s[5],t[5],total[5];
 float ma,sa,ta;
printf("enter five student names\n");
for(i=0;i<5;i++)
{  
	scanf("%s",&students[i]);
	
}
printf("enter math values\t");
for(i=0;i<5;i++)
{ 
scanf("%d",&m[i]);
}

printf(" enter science marks \t");
for(i=0;i<5;i++)
{ 
scanf("%d",&s[i]);
}

printf(" enter telugu marks\t");
for(i=0;i<5;i++)
{ 
scanf("%d",&t[i]);
}


for(i=0;i<5;i++)
{ 
total[i]=m[i]+s[i]+t[i];
}


ma=average(m,5);
sa=average(s,5);
ta=average(t,5);


printf("Names	maths	science	telugu	total  percentage\n");

for(i=0;i<5;i++)
{
  printf("%s	%d	  %d	  %d	  %d  %f",students[i],m[i],s[i],t[i],total[i],percentage(total[i]));
  printf("\n");

}


printf(" maths average for all students :%f\n",ma);
printf(" science average for all students :%f\n",sa);
printf(" telugu average for all students :%f\n",ta);


}