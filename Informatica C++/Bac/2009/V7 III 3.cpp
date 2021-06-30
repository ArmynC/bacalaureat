#include <iostream>

using namespace std;

int main()
{
    int v[301], n, i;

    cin >> n;

    for(i=1; i<=3*n; i++)
    {
        cin >> v[i];
    }

    for(i=1; i<=n; i++)
    {
        swap(v[i],v[2*n+i]);
    }

    for(i=1; i<=3*n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
