#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, t, tx;
    bool ok;

    cin >> n;
    ok = false;

    for(t=n-1; t>=2 && ok==false; t--)
    {
        tx = t;
        if(tx==2) ok = true;
        else if(tx%2==0)
        {
            ok = false;
        }
        else
        {
            i = 3;
            ok = true;
            while(i<=sqrt(tx) && ok==true)
            {
                if(tx%i==0)
                {
                    ok = false;
                }
                else
                {
                    i = i+2;
                }
            }
        }
        if(ok==true)
            cout << tx;
    }
    return 0;
}
