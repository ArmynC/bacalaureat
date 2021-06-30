#include <iostream>

using namespace std;

int suma(int n)
{
    int d, s, div, ok;

    s = 0;

    for(d=1; d<=n; d++)
    {
        if(n%d==0)
        {
            if(d==1)
            {
                s += d;
            }
            else if(d<4) ;
            else
            {
                if(d%2==0)
                {
                    s += d;
                }
                else
                {
                    div = 3;
                    ok = 1;

                    while(div*div<=d && ok==1)
                    {
                        if(d%div==0)
                        {
                            ok = 0;
                        }
                        else
                        {
                            div += 2;
                        }
                    }

                    if(ok==0)
                    {
                        s += d;
                    }
                }
            }
        }
    }

    return s;
}

int main()
{
    int n;

    cin >> n;

    cout << suma(n);

    return 0;
}
