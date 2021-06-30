#include <iostream>

using namespace std;

int f(int a)
{
    int s, d, exp;

    s = 0;
    d = 2;

    while(d<=a)
    {
        if(a%d!=0)
        {
            d++;
        }
        else
        {
            exp = 0;

            while(a%d==0)
            {
                a /= d;

                exp++;
            }

            s += exp;

            d++;
        }
    }

    return s;
}

int main()
{
    int n, m;

    cin >> n;

    if(n<=9)
    {
        if(f(n)==1)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }
    else
    {
        m = (n%10)*10+n/10;

        if(f(n)==1 && (m>1 && f(m)==1))
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }

    return 0;
}
