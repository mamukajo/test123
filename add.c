#include<stdio.h>
int fun(int,int);

int main()
{
int a,b;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("sum is %d",fun(a,b));

}

int fun(int x,int y)
{
return x+y;


}
