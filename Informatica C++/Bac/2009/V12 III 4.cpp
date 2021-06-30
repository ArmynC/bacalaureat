#include <iostream>

using namespace std;

int nr(int n, int c)
{
    int cif, z;

    z = 0;

    while(n>0)
    {
        cif = n%10;

        if(cif==c)
        {
            z++;
        }

        n /= 10;
    }

    return z;
}

int main()
{
    int n, c, k;

    k = 0;

    cin >> n;

    for(c=0; c<=9; c++)
    {
        if(nr(n,c)>=1)  /// Cifra c apare in n cel putin o data.
        {
            k++;
        }
    }

    cout << k;

    return 0;
}
