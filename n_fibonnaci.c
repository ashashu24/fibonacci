#include<stdio.h>
int fibo(int);
int main()
{
    int n, i = 0;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("Fibonacci series terms are:\n");
    for (i= 0; i < n; i++)
    {
        printf("%d\n", fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibo(n-1) + fibo(n-2));
}
