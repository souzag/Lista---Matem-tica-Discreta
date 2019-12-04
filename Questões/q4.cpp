#include <bits/stdc++.h>

using namespace std;

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

void insert(int n, vector<int> x)
{
    int i;
    int i = 2;

    while(n != 1)
    {
        if(prime(i, i/2) == 0)
        {
            if(n%i == 0)
            {
                //coloca no vector
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

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    vector<int> v_n1;
    vector<int> v_n2;

    insert(n1, v_n1);
    insert(n2, v_n2);

}