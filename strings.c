#include<stdio.h>
#include<string.h>

main()
{
int i,j,k,m,n;
char s[5][13];

printf("enter three string values");
for(n=0;n<3;n++)
scanf("%s",&s[n]);

i=strlen(s[0]);
j=strlen(s[1]);
k=strlen(s[2]);
printf(" length of strings for s[0] is %d\n",i);
printf(" length of strings for s[1] is %d\n",j);
printf(" length of strings for s[2] is %d\n",k);

m=strcmp(s[2],s[1]);

printf("strings compared and value is found :%d\n",m);
strcat(s[1],s[2]);
printf("string concatnated is :%s\n",s[1]);
strcpy(s[2],s[1]);
printf("string copied is :%s\n",s[0]);


}