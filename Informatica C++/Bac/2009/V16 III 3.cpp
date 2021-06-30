#include <iostream>

using namespace std;

int main()
{
    int v[11], i, nr, poz[11];

    nr = 0;

    for(i=1; i<=10; i++)
    {
        cin >> v[i];
    }

    for(i=1; i<=10; i++)
    {
        if(v[i]%13==0)
        {
            nr++;

            poz[nr] = i;
        }
    }

    cout << nr << " ";

    for(i=1; i<=nr; i++)
    {
        cout << poz[i] << " ";
    }

    return 0;
}
