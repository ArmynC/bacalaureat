#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, k, v[100], i;

    k = 0;

    ifstream f("nr.txt");

    for(i=99; i>=0; i--)
    {
        v[i] = 0;
    }

    while(f>>x)
    {
        if(x<=99)
        {
            v[x]++;

            k++;
        }
    }

    f.close();

    if(k==0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        for(i=99; i>=0; i--)
        {
            if(v[i]>=1)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
