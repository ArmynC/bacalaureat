#include <iostream>

using namespace std;

int divxy(int x, int y)
{
    if(y%x==0 || x%y==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, a, b, x, nr;

    nr = 0;

    cin >> a >> b >> n;

    if(a>b)
    {
        swap(a,b);
    }

    for(x=a; x<=b; x++)
    {
        if(x<=n && divxy(x,n))
        {
            cout << x << " ";

            nr++;
        }
    }

    if(nr==0)
    {
        cout << "NU EXISTA";
    }

    return 0;
}
