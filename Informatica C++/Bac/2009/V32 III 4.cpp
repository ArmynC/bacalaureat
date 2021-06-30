#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, k, v[101], i, j;

    k = 0;

    ifstream f("numere.txt");

    while(f>>x)
    {
        if(x%2==0)
        {
            k++;

            v[k] = x;
        }
    }

    f.close();

    if(k<2)
    {
        cout << "0";
    }
    else
    {
        for(i=1; i<=k-1; i++)
        {
            for(j=i+1; j<=k; j++)
            {
                if(v[i]>v[j])
                {
                    swap(v[i],v[j]);
                }
            }
        }

        cout << v[k-1] << " " << v[k];
    }

    return 0;
}
