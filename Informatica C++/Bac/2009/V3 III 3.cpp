#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, k, v[1000], i;

    k = 0;

    ifstream f("nr.txt");

    for(i=100; i<=999; i++) /// Vector de frecventa (de aparitie in fisier) a numerelor de la 100 la 999.
    {
        v[i] = 0;
    }

    while(f>>x)
    {
        if(x>=100 && x<=999)
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
        for(i=100; i<=999; i++)
        {
            if(v[i]>=1)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
