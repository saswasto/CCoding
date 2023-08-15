// Write the code to find the Fibonacci series up to the nth term
#include <stdio.h>
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n = 8;
    printf("%d", fib(n));
    getchar();
    return 0;
}
