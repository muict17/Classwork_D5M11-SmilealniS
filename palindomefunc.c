#include<stdio.h>

int palindome(int num, int r)
{
    while(num!=0)
    {
        r=r*10;
        r=r+(num%10);
        num=num/10;
        
        palindome(num, r);
    }

    return r;
}

int main()
{
    int n;

    scanf("%d", &n);
    
    int num=n;

    int r=palindome(num, 0);
    
    if (n == r)
    {
        printf("True\n");
    } else printf("False\n");

    return 0;
}