#include <iostream>

using namespace std;

int nz(int n)
{
    int x, exp, nr, cx;

    nr = 0;

    if(n<5)
    {
        return 0;
    }
    else
    {
        for(x=2; x<=n; x++)
        {
            cx = x;

            exp = 0;

            while(cx%5==0)
            {
                cx /= 5;

                exp++;
            }

            nr += exp;
        }

        return nr;
    }

}
int main()
{
    int n, k;

    cin >> k;

    n = 5;

    while(nz(n)<k)
    {
        n++;
    }

    cout << n;

    return 0;
}
