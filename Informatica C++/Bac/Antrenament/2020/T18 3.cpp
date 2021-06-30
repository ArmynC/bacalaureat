#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int l, lmax, x, nr;

    lmax = 0;
    nr = 0;
    l = 0;

    ifstream f("bac.txt");

    while(f>>x)
    {
        if(x%10==0)
        {
            l++;
        }
        else if(l>0)
        {
            if(lmax<l)
            {
                lmax = l;
                nr = 1;
                l = 0;
            }
            else if(lmax==l)
            {
                nr++;
                l = 0;
            }
        }
    }

    f.close();

    if(l>0)
    {
        if(lmax<l)
        {
            lmax = l;
            nr = 1;
            l = 0;
        }
        else if(lmax==l)
        {
            nr++;
            l = 0;
        }
    }

    cout << lmax << " " << nr;

    return 0;
}
