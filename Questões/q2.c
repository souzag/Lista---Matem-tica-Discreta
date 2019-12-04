#include <stdio.h>
#include <math.h>
#include <time.h>

int prime(int n, int x)
{
    if(x == 1)
    {
        return 0;
    }
    else
    {
        if(n%x == 0)
        {
            return 1;
        }
        else
        {
            return prime(n, x - 1);
        }
    }
}

int main()
{
    time_t start, end;
    double elapsed;  // seconds
    start = time(NULL);
    int kill = 1;
    long long int i = 2;

    while(kill)
    {
        int x = prime(i, i/2);

        if(x == 0)
        {
            printf("%lld\n", i);
        }

        x = 0;
        i++;

        end = time(NULL);
        elapsed = difftime(end, start);

        if (elapsed >= 60.0)
        {
            kill = 0;
        }
    }

    return 0;
}