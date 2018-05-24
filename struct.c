#include<stdio.h>

struct classes{

char subject[20];
int time;
char book[20];
};

void printclass( struct classes class);
main()

{

struct classes class1;
struct classes class2;
struct classes class3;

printf(" enter subject name ,time,book required of a class1\n");
scanf("%s %d %s",&class1.subject,&class1.time,&class1.book);


printf(" enter subject name ,time,book required of a class2\n");
scanf("%s %d %s",&class2.subject,&class2.time,&class2.book);

printf(" enter subject name ,time,book required of a class3\n");
scanf("%s %d %s",&class3.subject,&class3.time,&class3.book);

printclass(class1);

printclass(class2);

printclass(class3);

}

void printclass( struct classes class)
{
printf(" subjectname of class is: %s \n",class.subject);
printf(" duration of class is : %d \n" ,class.time);
printf(" book of class is : %s \n", class.book);
}