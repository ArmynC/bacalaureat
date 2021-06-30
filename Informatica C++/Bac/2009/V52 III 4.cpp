#include <iostream>

using namespace std;

int main()
{
    int v[101], n, i, j, ok;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    ok = 1;

    for(i=1; i<=n-1 && ok==1; i++)
    {
        for(j=i+1; j<=n && ok==1; j++)
        {
            if(v[i]==v[j])
            {
                ok = 0;
            }
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

    return 0;
}
