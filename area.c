#include<stdio.h>
#include<conio.h>
#include<math.h>

#define length 200
int perimeter (int,int);

int main()
{
    int area,breadth,p;
    printf ("enter breadth values :\t ");
    scanf("%d",&breadth);
    area=length * breadth;
    p = perimeter(length,breadth);
    printf("area of rectangle is  %d",area);
    printf ("perimeter of rectangle is %d",p);
}

int perimeter(int a, int b)
{
    int c;
    
    c= 2*(a+b);
return c;
}

#adding a line to check the difference from local repository