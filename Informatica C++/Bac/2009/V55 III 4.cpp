#include <iostream>

using namespace std;

int main()
{
    int n, i, a[101], b[101], c[101], k, j, copie, p, contor;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    for(j=1; j<=n; j++)
    {
        cin >> b[j];
    }

    for(i=1; i<=n; i++)
    {
        if(a[i]<b[i])
        {
            copie = b[i];
            k = 0;

            while(copie>0)
            {
                k++;
                copie /= 10;
            }

            p = 1;

            for(contor=1; contor<=k; contor++)
            {
                p *= 10;

            }

            c[i] = a[i]*p+b[i];
        }
        else
        {
            copie = a[i];
            j = 0;

            while(copie>0)
            {
                j++;
                copie /= 10;
            }

            p = 1;

            for(contor=1; contor<=j; contor++)
            {
                p *= 10;

            }

            c[i] = b[i]*p+a[i];
        }

    }

    for(i=1; i<=n; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
