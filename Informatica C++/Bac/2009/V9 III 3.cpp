#include <iostream>
#include <fstream>

using namespace std;

void s1(int a[100], int &p, int &q)
{
    int i, j, aux1, aux2;

    i = p;

    while(i<=q && a[i]%2!=0)
    {
        i++;
    }

    j = q;

    while(j>=p && a[j]%2==0)
    {
        j--;
    }

    if(i>q)
    {
        aux1 = -1;
    }
    else
    {
        aux1 =i;
    }

    if(j<p)
    {
        aux2 = -1;
    }
    else
    {
        aux2 = j;
    }

    p = aux1;
    q = aux2;
}

void s2(int &a, int &b)
{
    swap(a,b);
}

int main()
{
    int a[100], i, n, p, q;

    ofstream f("bac.txt");

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    p = 0;

    q = n-1;

    s1(a,p,q);

    if(p==-1 || q==-1) ; /// Nu avem nimic de facut pentru ca vectorul are doar pare sau doar impare.
    else
    {
        if(p>q) ; /* Nu avem nimic de facut pentru ca vectorul are si pare si impare dar cele pare
                     sunt deja la dreapta celor impare. */
        else
        {
            while(p<q)
            {
                s2(a[p],a[q]);

                s1(a,p,q);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        f << a[i] << " ";
    }

    f.close();

    return 0;
}
