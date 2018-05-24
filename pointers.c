#include<stdio.h>

int main()
{
int p[3],*ptr;
int i;

printf("enter three p values ");
for(i=0;i<3;i++)
scanf("%d",&p[i]);

ptr=p;

for(i=0;i<3;i++)
{
 printf("address of pointer for %d is %x ---- value of pointer is %d\n",i,ptr,*ptr);
ptr++;
}
}
