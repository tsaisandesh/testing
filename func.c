#include<stdio.h>
#include<conio.h>
//#define pi 3.14
//float area(float);
//float circumference(float);
static float pi=3.14;
float area(float k)
{
  float a;
  a= pi*k*k;
 return a;
}

float circumference(float j)
{
 float c;
c = 2*pi*j;
return c;
}
int main()
{
float r;
float a,c;
printf("enter r value ");
scanf("%f",&r);
a = area(r);
c = circumference(r);
printf(" area of circle is %f\n",a);
printf("circumference of circle is %f",c);

}

