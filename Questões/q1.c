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

    printf("Escreva o número: ");
    scanf("%d", &n);

    int resp = prime(n, n/2);

    if(resp == 0)
    {
        printf("É primo!\n");
    }
    else
    {
        printf("Ih rapaz, não é primo.\n");
    }
    
    return 0;
}