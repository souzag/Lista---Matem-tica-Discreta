#include <stdio.h>

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
    int n;
    scanf("%d", &n);
    int i = 2;

    while(n != 1)
    {
        if(prime(i, i/2) == 0)
        {
            if(n%i == 0)
            {
                printf("%d\n", i);
                n = n/i;
            }
            else
            {
                i++;
            }
            
        }
        else
        {
            i++;
        }
        
    }
}