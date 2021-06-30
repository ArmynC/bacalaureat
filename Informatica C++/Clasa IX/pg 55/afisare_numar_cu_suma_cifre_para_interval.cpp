#include <iostream>
using namespace std;

int main()
{
    int a, b, i, s, n, cif;

    cin >> a >> b;

    for(i=a; i<=b; i++)
    {
        n = i;
        s = 0;

        while(n!=0)
        {
            cif = n%10;
            s = s + cif;
            n = n/10;
        }

        if(s%2==0)
        {
            cout << i;
        }
    }
}
