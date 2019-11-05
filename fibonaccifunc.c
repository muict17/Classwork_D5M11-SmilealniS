#include<stdio.h>

int n, f0=0, f1=1;

void fibonacci(int f2)
{
    f2=f0+f1;

    if(f2<=n)
    {
        printf("%d ", f2);
        f0=f1;
        f1=f2;
        fibonacci(f2);
    }
}

int main()
{
    scanf("%d", &n);

    printf("%d %d ", f0, f1);
    
    fibonacci(n);

    return 0;
}