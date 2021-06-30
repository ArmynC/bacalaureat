#include <iostream>
#include <fstream>

using namespace std;

void pal(int a, int &b)
{
    int ca = a, ogl, ok, pal1, pal2;

    ogl = 0;

    while(ca)
    {
        ogl = ogl*10 + ca%10;

        ca /= 10;
    }

    if(ogl==a)
    {
        b = a;
    }
    else
    {
        pal1 = a - 1;
        pal2 = a + 1;

        ok = 0;

        while(ok==0)
        {
            ogl = 0;
            ca =  pal1;

            while(ca)
            {
                ogl = ogl*10 + ca%10;

                ca /= 10;
            }
            if(ogl==pal1)
            {
                ok = 1;
            }
            else
            {
                pal1--;
            }
        }

        ok = 0;

        while(ok==0)
        {
            ogl = 0;
            ca =  pal2;

            while(ca)
            {
                ogl = ogl*10 + ca%10;

                ca /= 10;
            }
            if(ogl==pal2)
            {
                ok = 1;
            }
            else
            {
                pal2++;
            }
        }
        if(a-pal1<pal2-a)
        {
            b = pal1;
        }
        else if(a-pal1>pal2-a)
        {
            b = pal2;
        }
        else
        {
            b = pal1;
        }
    }
}

int main()
{
    int n, i, x, y;

    ifstream f("date.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        pal(x,y);

        cout << y << " ";
    }

    f.close();

    return 0;
}
