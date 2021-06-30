#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, b, i, j, k, nr, m;

    b = 0;
    nr = 0;

    ifstream f("bac.in");

    while(f>>x)
    {
        b++;

        if(x<0)
        {
            nr++;

            if(nr==1)
            {
                i = b;
            }
            else if(nr==2)
            {
                j = b;
            }
            else
            {
                k = b;
            }
        }
    }

    f.close();

    m = j-1;

    if(m<k-i-1)
    {
        m = k-i-1;
    }

    if(m<b-j)
    {
        m = b - j;
    }

    cout << m;

    return 0;
}
