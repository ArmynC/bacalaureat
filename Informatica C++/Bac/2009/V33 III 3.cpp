#include <iostream>

using namespace std;

void impar(int x[101], int n)
{
    int i, nr;

    nr = 0;

    for(i=1; i<=n; i++)
    {
        if(x[i]%2!=0)
        {
            nr++;
        }
    }

    if(nr==0)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }
}

int main()
{
    int n, i, x[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> x[i];
    }

    impar(x,n);

    return 0;
}
