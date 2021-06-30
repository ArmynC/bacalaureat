#include <iostream>
using namespace std;

int main()
{
    int n, x, cn, cx, r, cmmdc;

    cin >> n;
    for(x=1; x<=n-1; x++)
    {
        cx = x;
        cn = n;

        while(cn!=0)
        {
            r = cx%cn;
            cx = cn;
            cn = r;
        }
        cmmdc = cx;
        if(cmmdc==1)
        {
            cout << x << endl;
        }
    }
    return 0;
}
