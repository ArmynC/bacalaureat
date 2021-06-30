#include <iostream>
#include <fstream>

using namespace std;

int fr[100];

int main()
{
    int min2, max2, x;

    ifstream f("bac.txt");

    while(f>>x)
    {
        if(x>=10 && x<=99)
        {
            fr[x]++;
        }
    }

    f.close();

    min2 = 10;

    while(min2<=99 && fr[min2]==0)
    {
        min2++;
    }

    if(min2==100)
    {
        cout << "nu exista";
    }
    else
    {
        max2 = 99;

        while(max2>=min2 && fr[max2]==0)
        {
            max2--;
        }

        cout << min2-1 << " " << max2+1;
    }

    return 0;
}
