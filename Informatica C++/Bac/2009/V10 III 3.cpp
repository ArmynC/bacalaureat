#include <iostream>

using namespace std;

int main()
{
    int a[101], s[101], n, k;

    cin >> n;

    for(k=1; k<=n; k++)
    {
        cin >> a[k];
    }

    s[1] = a[1];

    for(k=1; k<=n-1; k++)
    {
        s[k+1] = s[k] + a[k+1]; /// Sumele partiale.
    }

    for(k=n; k>=1; k--)
    {
        cout << s[k] << endl;
    }

    return 0;
}
