#include <iostream>

using namespace std;

int sub(int v[101], int n, int a)
{
    int i, k;

    k = 0;

    for(i=1; i<=n; i++)
    {
        if(v[i]==a)
        {
            k++;
        }
    }

    return k;
}

int main()
{
    int n, v[101], ok, i;

    ok = 1; /// Presupunem ca in vectorul v toate elementele sunt distincte 2 cate 2.

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    for(i=1; i<=n && ok==1; i++)
    {
        if(sub(v,n,v[i])>=2)
        {
            ok = 0;
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
