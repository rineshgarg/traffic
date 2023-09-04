#include<stdio.h>
int main()
{
int x,y;
printf("enter the value of x");
scanf("%d", &x);
if (x<=10&&x>=0)
{
y=x*x+2;
printf("value of eq. is %d",y);
}
else if(x>10&&x<=20)
{
y=x*x+2*x;
printf("value of eq. is %d",y);
}
else if(x>20&&x<=30)
{
y=x*x*x+2*x*x;
printf("value of eq. is %d",y);
}
else
{
y=0;
printf("value of eq. is %d",y);
}
return 0;
}
