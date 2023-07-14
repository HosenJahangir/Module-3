#include <stdio.h>

int main()
{
    int N = 20;

    for (int i = 2; i <= N; i++)
    {
        int prime = 1;
        // prime number is divided by 1 and by N(itself) and by none.
        // if number is divided by any number from 2 to (N-1), is not prime.

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}