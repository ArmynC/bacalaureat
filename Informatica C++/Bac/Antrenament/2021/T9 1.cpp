#include <iostream>

using namespace std;

void divizor(int a, int b, int k, int &nr)
{
    int x;

    nr = 0;

    for(x=a; x<=b; x++)
    {
        if(x%k==0 && x%10==k)
        {
            nr++;
        }
    }
}

int main()
{
    int a, b, k, nr;

    cin >> a >> b >> k;

    divizor(a,b,k,nr);

    cout << nr;

    return 0;
}
