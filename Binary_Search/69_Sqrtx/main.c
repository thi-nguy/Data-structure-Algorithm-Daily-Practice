#include <stdio.h>

int mySqrt(int x)
{
    long int left;
    long int right;
    long int mid;
    long int sqr;

    if(x < 0)
        return (-1);
    if (x == 0)
        return (0);
    left = 0;
    if (x < 6)
        right = x;
    else
        right = x / 2;
    while (left <= right)
    {
        mid = (right + left) / 2;
        sqr = mid * mid;
        if (sqr > x)
            right = mid - 1;
        else if(sqr < x)
            left = mid + 1;
        else
            return (mid);
    }
    if (sqr > x)
        return (mid - 1);
    else
        return (mid);
}

int     main(void)
{
    int ret;
    
    int min = 0;
    ret = mySqrt(min);
    printf("0\n");
    printf("%i\n", ret);

    int max = 2147483647;
    ret = mySqrt(max);
    printf("46340\n");
    printf("%i\n", ret);

    int x = 4;
    ret = mySqrt(x);
    printf("2\n");
    printf("%i\n", ret);

    int a = 9;
    ret = mySqrt(a);
    printf("3\n");
    printf("%i\n", ret);

    int b = 16;
    ret = mySqrt(b);
    printf("4\n");
    printf("%i\n", ret);

    int y = 10;
    ret = mySqrt(y);
    printf("3\n");
    printf("%i\n", ret);

    int z = 1000;
    ret = mySqrt(z);
    printf("31\n");
    printf("%i\n", ret);
    
    return (0);
}