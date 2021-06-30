#include <iostream>

using namespace std;

int count(float v[101], int n)
{
    int i, nr;

    nr = 0;

    for(i=1; i<=n; i++)
    {
        if(v[i]>=(v[1]+v[n])/2.0)
        {
            nr++;
        }
    }

    return nr;
}

int main()
{
    float v[101];
    int n, i;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    if(count(v,n)>=n-1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
