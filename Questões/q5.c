#include <stdio.h>
 
int mdc(int a, int d)
{
    if(d == 0)
    {
        return a;
    }
    else
    {
        return mdc(d, a % d);
    }
}
 
int loop(int i, int n)
{
    if(i == n)
    {
        return 0;
    }
    int a, d;
    scanf("%d %d", &a, &d);
    printf("MDC(%d,%d) = %d\n",a, d, mdc(a,d));
    loop(i + 1, n);
}
 
int main()
{
    int n;
    scanf("%d", &n);
    loop(0, n);
    return 0;
}