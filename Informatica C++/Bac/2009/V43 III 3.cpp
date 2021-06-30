#include <iostream>

using namespace std;

int p(int n, int a[101])
{
    int s, i;

    s = 0;

    for(i=1; i<=n; i++)
    {
        if(a[i]%2!=0 && i%2==0)
        {
            s += a[i];
        }
    }

    return s;
}

int main()
{
    int n, i, a[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    cout << p(n,a);

    return 0;
}
