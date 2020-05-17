#include<stdio.h>
#include<string.h>
int main()
{
char a[82],b[82];
int e,f,l,la,lb,m,count;
printf("Enter a string : ");
fgets(a,82,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';

printf("Enter another string : ");
fgets(b,82,stdin);
fflush(stdin);
b[strlen(b)-1]='\0';
la=strlen(a);
lb=strlen(b);

e=0;
count=0;
while(a[e]!='\0')
{
m=e;
l=0;
f=0;
while(b[f]!='\0' && m<la)
{
if(b[f]>=65 && b[f]<=90)
{
b[f]+=32;
}
if(a[m]>=65 && a[m]<=90)
{
a[m]+=32;
}
if(b[f]==a[m])
{
l++;
}
m++;
f++;
}
if(l==lb)
{
count++;
}
e++;
}
if(count==0)
{
printf("Not found\n");
}
else
{
printf("%s found in %s is %d times\n",b,a,count);
}
return 0;
}