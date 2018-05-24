#include<stdio.h>

/*void main()
{
int n,i,j;
int a[100] ;

printf("enter array size n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
 a[i]=i;
printf ("array elements are a[%d]=%d \n",i,i);
}
}*/

/*sum of matrices*/

void main()
{
 int i,j,a,b,m2[10][10],m3[10][10];
 int m1[2][2]={{1,2},{2,3}};
printf("enter a and b values as size of matrices A,B :");
scanf("%d %d",&a,&b);


/*printf(" enter matrix 1 values");
for(i=0;i<a;i++),
{
  for(j=0;j<b;j++)
   {
     
	scanf("%d",&m1[i][j]);
   }
}*/

printf("enter matrix 2 values");

for(i=0;i<a;i++)
{
  for(j=0;j<b;j++)
   {
    	scanf("%d",&m2[i][j]);
   }

}

printf (" printing the two matrices\n");

for(i=0;i<a;i++)
{
  for(j=0;j<b-1;j++)
   {
    	printf("%d   %d |  %d    %d",m1[i][j],m1[i][j+1],m2[i][j],m2[i][j+1]);
	
		
printf("\t");
   }

printf("\n");
}



for(i=0;i<a;i++)
{
  for(j=0;j<b;j++)
   {
     m3[i][j]=m1[i][j] + m2[i][j];  
printf(" %d",m3[i][j]);
printf("\t");
	
   }
printf("\n");

}
}