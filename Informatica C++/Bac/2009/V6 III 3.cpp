#include <iostream>
#include <fstream>

using namespace std;

void s1(int &x, int &y)
{
    swap(x,y);
}

int s2(int a[101], int p, int q)
{
    int i;

    if(p>q)
    {
        return -1;
    }
    else
    {
        i = p;

        while(i<=q && a[i]%5!=0)
        {
            i++;
        }

        if(i==q+1)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}

int main()
{
    int n, a[101], poz1, poz2, i, x, y;

    ofstream g("bac.txt");

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    if(s2(a,1,n)==-1)  /// Nu exista elemente impare in vector.
    {
        g << 0;
    }
    else
    {
        poz1 = s2(a,1,n);
        i = n;

        while(i>=poz1 && s2(a,i,n) == -1)
        {
            i--;
        }

        poz2 = i;

        if(poz1==poz2)  /// Vectorul contine un singur numar impar.
        {
            g << 0;
        }
        else
        {
            x = a[poz1];

            y = a[poz2];

            s1(x,y);

            a[poz1] = x;

            a[poz2] = y;

            for(i=1; i<=n; i++)
            {
                g << a[i] << " ";
            }
        }
    }

    g.close();

    return 0;
}
