#include <iostream>
#include <fstream>

using namespace std;

int suma(int a[101], int i, int j)
{
    int k, s;

    s = 0;

    for(k=i; k<=j; k++)
    {
        s += a[k];
    }

    return s;
}
int main()
{
    int n, m, i, j, a[101], b[101], ok;

    ifstream f("numere.in");

    f >> n >> m;

    for(i=1; i<=n; i++)
    {
        f >> a[i];
    }

    for(j=1; j<=m; j++)
    {
        f >> b[j];
    }

    f.close();

    if(!(1<=m && m<=n && n<=100))
    {
        cout << "NU";
    }
    else
    {
        if(n%3!=0)
        {
            cout << "NU";
        }
        else if(3*m!=n)
        {
            cout << "NU";
        }
        else
        {
            ok = 1;

            i = 1;

            j = 3;

            while(ok==1 && j<=n)
            {
                if(suma(a,i,j)!=b[j/3])
                {
                    ok = 0;
                }
                else
                {
                    i += 3;
                    j += 3;

                }
            }

            if(ok==1)
            {
                cout << "DA";
            }
            else
            {
                cout << "NU";
            }
        }
    }

    return 0;
}
