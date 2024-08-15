#include <stdio.h>
int recursiveFactorial(int n)
{
    if (n == 1)
    return 1;
    else
    return n * recursiveFactorial(n - 1);
}
int nonRecursiveFactorial(int n)
{int i, fact = 1;
for (i = 1; i <= n; i++)
    {
    fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    int result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = recursiveFactorial(n);
    printf("Factorial of %d (recursive): %d\n", n, result);
    result = nonRecursiveFactorial(n);
    printf("Factorial of %d (non-recursive): %d\n", n, result);
    return 0;
}