#include<stdio.h>

int factorial(int i)
{
    if(i==1)
    {
        return i;
    } else return i*factorial(i-1);
}

int main()
{
    int i;

    scanf("%d", &i);

    printf("%d! = %d\n", i, factorial(i));

    return 0;
}