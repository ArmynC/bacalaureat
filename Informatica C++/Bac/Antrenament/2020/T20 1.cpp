#include <iostream>

using namespace std;

long long transformareBaza10(int b, int n)
{
    int c, k, s, p;

    k = 0;
    s = 0;
    p = 1;

    while(n)
    {
        c = n%10;

        s = s+c*p;
        p = p*b;
        k++;

        n = n/10;
    }

    return s;
}

int main()
{
    int b, n;

    cin >> b >> n;

    cout << transformareBaza10(b,n);

    return 0;
}
