#include <iostream>

using namespace std;

int joc(int n)
{
    int i, k;

    k = 0;

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            k += 1;
        }
    }

    return k;
}

int main()
{
    int n;

    cin >> n;

    cout << joc(n);

    return 0;
}
