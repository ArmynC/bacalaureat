#include <iostream>
using namespace std;

int main()
{
    int x, ogl, cx, d;
    bool ok;

    for(x=1000; x<=9999; x++)
    {
        cx = x;

        if(cx%2==0)
        {
            ok = false;
        }
        else
        {
            d = 3;
            ok = true;
            while(ok==true && d*d<=cx)
            {
                if(cx%d==0) ok = false;
                else d = d+2;
            }
        }
        if(ok==true)
        {
            cx = x;
            ogl = 0;
            while(cx!=0)
            {
                ogl = cx%10+ogl*10;
                cx = cx/10;
            }
            if(ogl%2==0)
            {
                ok = false;
            }
            else
            {
                d = 3;
                ok = true;
                while(ok==true && d*d<=ogl)
                {
                    if(ogl%d==0) ok = false;
                    else d = d+2;
                }
            }
            if(ok==true) cout << x << endl;
        }
    }
    return 0;
}
