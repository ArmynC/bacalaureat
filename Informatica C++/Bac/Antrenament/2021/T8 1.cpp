#include <iostream>

using namespace std;

void nrfp(int n, int &m)
{
    int nrd, nrf, d, div, cd;

    m = 1;
    nrf = 0;

    for(d=2; d<=n; d++)
    {
        nrd = 0;
        div = 2;
        cd = d;

        while(div<=cd)
        {
            if(cd%div!=0)
            {
                div++;
            }
            else
            {
                nrd++;

                while(cd%div==0)
                {
                    cd = cd/div;
                }

                div++;
            }
        }
        if(nrf<nrd)
        {
            nrf = nrd;
            m = d;
        }
        else if(nrf==nrd)
        {
            if(m<d)
            {
                m = d;
            }
        }
    }
}

int main()
{
    int n, m;

    cin >> n;

    nrfp(n,m);

    cout << m;

    return 0;
}
