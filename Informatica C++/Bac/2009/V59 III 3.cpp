#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, v[101], x, j, p;

    n = 0;

    ifstream f("bac.txt");

    while(f>>x)
    {
        n++;

        v[n] = x;
    }

    f.close();

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; i<=n; i++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }

    p = v[n-1]*v[n];

    cout << p%10;

    return 0;
}
