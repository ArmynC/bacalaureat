#include <iostream>

using namespace std;

void suma(int n, int &s)
{
    int cif, i, fr[10];

    for(i=2; i<=8; i+=2)
    {
        fr[i] = 0;
    }

    s = 0;

    while(n)
    {
        cif = n%10;

        if(cif%2==0)
        {
            fr[cif]++;
        }

        n /= 10;
    }

    for(i=2; i<=8; i+=2)
    {
        if(fr[i]>=1)
        {
            s += i;
        }
    }
}

int main()
{
    int n, s;

    cin >> n;

    suma(n,s);

    cout << s;

    return 0;
}
