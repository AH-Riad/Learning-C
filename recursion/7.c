#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms: ", n);

    for (int i = 0; i < n; i++)
    {
        fibonacci(i);
        printf("%d\t",fibonacci(i););
    }

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
