#include <iostream>

using namespace std;

int cif(int a, int b)
{
    int k;

    k = 0;

    while(a>0)
    {
        if(a%10==b)
        {
            k++;
        }

        a /= 10;
    }

    return k;
}

int main()
{
    int n, i, m, c;

    m = 0;

    cin >> n;

    for(c=9; c>=1; c-=2)
    {
        for(i=1; i<=cif(n,c); i++)
        {
            m *= 10+c;
        }
    }

    cout << m;

    return 0;
}
