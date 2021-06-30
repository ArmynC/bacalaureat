#include <iostream>

using namespace std;

void prime(int x, int y)
{
    int d, ok, n;

    if(x>y)
    {
        swap(x,y);
    }

    for(n=x; n<=y; n++)
    {
        if(n<2)
        {
            ok =0;
        }
        else if(n==2)
        {
            ok = 1;
        }
        else if(n%2==0)
        {
            ok = 0;
        }
        else
        {
            d = 3;
            ok = 1;

            while(ok==1 && d*d<=n)
            {
                if(n%d==0)
                {
                    ok = 0;
                }
                else
                {
                    d += 2;
                }
            }
        }

        if(ok==1)
        {
            cout << n << " ";
        }
    }
}

int main()
{
    int x, y;

    cin >> x >> y;

    prime(x,y);

    return 0;
}
