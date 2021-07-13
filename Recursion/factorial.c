#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 1)
        return (1);
    else
    {
        return (n * factorial(n - 1));
    }
}

int main(int ac, char **av)
{
    int n;
    long int result;

    if (ac != 2)
    {
        printf("Enter only one number.\n");
        return (0);
    }
    else
    {
        n = atoi(av[1]);
        if (n <= 0)
        {
            printf("Should be positive integer.\n");
            return (0);
        }
        result = factorial(n);
        printf("Factorial of %i is: %li\n", n, result);
    }
    return (0);
}
