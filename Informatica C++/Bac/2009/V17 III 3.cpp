#include <iostream>

using namespace std;

int interval(int v[100], int n)
{
    int a, b, i, nr;

    nr = 0;
    a = v[0];
    b = v[n-1];

    if(a>b)
    {
        swap(a,b);
    }

    for(i=0; i<n; i++)
    {
        if(v[i]>=a && v[i]<=b)
        {
            nr++;
        }
    }

    return nr;
}
int main()
{
    int v[100], n, i;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> v[i];
    }

    if(v[0]<=v[n-1] && interval(v,n)==n)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
