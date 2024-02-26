#include<stdio.h>
int j(int x,int y)
{
    x=2*x+y;
    return x;
}
int main ()
{
    int x=2,y=5;
    y=j(y,x);
    x=j(y,x);

    printf("%d",x);

    return 0;
}