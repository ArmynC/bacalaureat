#include <iostream>
using namespace std;

int main()
{
    int n, k, a, b, cmmdc, r, ax, bx;

    cin >> n >> k;

    for(a=0; a<=n-1; a++)
    {
        for(b=0; b<=n-1; b++)
        {
            if(a!=0 && b!=0)
            {
                ax = a;
                bx = b;

                while(bx!=0)
                {
                    r = ax%bx;
                    ax = bx;
                    bx = r;
                }
                cmmdc = ax;
                if(cmmdc==k)
                {
                    cout << "(" << a << ", " << b << ")" << endl;
                }
            }
            else if(a==0 && b==0);
            else
            {
                if(a==0 && b!=0)
                {
                    if(b==k)
                        cout << "(" << a << ", " << b << ")" << endl;
                }
                else
                {
                    if(a!=0 && b==0)
                    {
                        if(a==k)
                            cout << "(" << a << ", " << b << ")" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
