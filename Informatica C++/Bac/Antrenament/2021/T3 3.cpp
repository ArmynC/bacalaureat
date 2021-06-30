#include <iostream>
#include <fstream>

using namespace std;

int fr[10], maxim, poz[500001], k, nr, v[1000000];

int main()
{
    int x, c, i, j, a;

    ifstream f("bac.in");

    while(f>>x)
    {
        c = (x/10)%10;

        nr++;

        v[nr] = c;
    }

    f.close();

    for(i=1; i<=nr; i++)
    {
        fr[v[i]]++;
    }

    for(c=0; c<=9; c++)
    {
        if(fr[c]>=2 && maxim<fr[c])
        {
            maxim = fr[c];
        }
    }

    cout << maxim << endl;

    i = 1;

    while(i<=nr)
    {
        if(fr[v[i]]==maxim)
        {
            j = nr;

            while(j>=1 && v[j]!=v[i])
            {
                j--;
            }

            k++;

            poz[k] = j;

            a = v[i];

            for(j=1; j<=nr; j++)
            {
                if(v[j]==a)
                {
                    v[j] = -1;
                }
            }

            i++;
        }

        i++;
    }

    cout << k << endl;

    for(i=1; i<=k; i++)
    {
        cout << poz[i] << " ";
    }

    return 0;
}
