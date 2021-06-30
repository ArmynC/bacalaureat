#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, k, i, fr[10000];

    ifstream f("bac.txt");

    k = 0;

    for(i=1; i<=9999; i++)
    {
        fr[i] = 0;
    }

    while(f>>x)
    {
        fr[x]++;
    }

    f.close();

    for(i=1; i<=9999 && k!=2; i++)
    {
        if(fr[i]>0)
        {
            cout << i << " ";
            k++;
        }
    }

    return 0;
}