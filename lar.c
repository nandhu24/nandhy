#include<stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is largest number");
    }
    else if(b>a && b>c)
    {
        printf("b is largest number");
    }
    else
    {
        printf("c is the largest number");
    }

    return ;
}
