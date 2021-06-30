#include <iostream>

using namespace std;

int f(int a)
{
    int d, ok;

    d = 2;
    ok = 0;

    while(d<=a && ok==0)
    {
        if(a%d!=0)
        {
            d++;
        }
        else
        {
            ok = 1;
        }
    }

    return d;
}

int main()
{
    int n, i, p, k;

    k = 0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> p;

        if(f(p)==p)
        {
            cout << p << " ";

            k++;
        }
    }

    if(k==0)
    {
        cout << "NU EXISTA";
    }

    return 0;
}
