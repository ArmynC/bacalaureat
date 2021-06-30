#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, z, l, lmax;

    ifstream f("bac.txt");

    lmax = 2;

    f >> x;

    l = 2;

    while(f>>y)
    {
        if(y==x)
        {
            x = y;
        }
        else
        {
            break;
        }
    }
    while(f>>z)
    {
        if(z!=x && z!=y)
        {
            l++;

            x = y;
            y = z;
        }
        else
        {
            if(lmax<l)
            {
                lmax = l;
            }

            if(z==x)
            {
                l = 2;
                x = y;
                y = z;
            }
            else
            {
                x = z;
                l = 1;

                while(f>>y)
                {
                    if(y==x)
                    {
                        x = y;
                    }
                    else
                    {
                        break;
                    }
                }
                if (y!=x)
                {
                    l = 2;
                }

            }
        }
    }

    f.close();

    cout << lmax;

    return 0;
}
