#include <iostream>

using namespace std;

void numar(int n, int c, int &m)
{
    int cif, k, x, z, p;

    m = 0;
    k = 0;
    x = 0;
    z = 0;
    p = 1;

    while(n>0)
    {
        cif = n%10;

        if(cif!=0)
        {
            if(cif!=c)
            {
                m = m + p * cif;

                p *= 10;

                k++;
            }
            else
            {
                x++;
            }
        }
        else
        {
            z++;
        }

        n /= 10;
    }

    if(k==0 && x>0 && z==0)
    {
        m = -1;
    }
}

int main()
{
    int n, c, m;

    cin >> n >> c;

    numar(n,c,m);

    cout << m;

    return 0;
}
