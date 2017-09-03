#include<stdio.h>
void main()
{
int n1,n2,i,g;
printf("enter the values");
scanf("%d",&n1,&n2");
for(i=1;i<=n1&&i<=n2;i++)
{
if(n1%i==0&&n2%i==0)
g=i;
printf("the gcd of "%d"and"%d"is"%d",n1,n2,g);
}
}}
