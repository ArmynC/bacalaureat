#include <iostream>

using namespace std;

int p1(int n)
{
    int s;

    s = 0;

    while(n>0)
    {
        s += n%10;
        n /= 10;
    }

    return s;
}

int p2(int n)
{
    n /= 10;

    return n;
}

int main()
{
    int n, k;

    k = 0;

    cin >> n;

    while(n>0)
    {
        if(p1(n)==p1(p2(n)))  /// Inseamna ca ultima cifra a lui n este 0.
        {
            k++;
        }

        n /= 10;
    }

    cout << k;

    return 0;
}
