#include <fstream>

using namespace std;

int fr[100];

int main()
{
    ifstream f("date.in");
    ofstream g("date.out");

    int x;

    while(f>>x)
    {
        fr[x]++;
    }

    f.close();

    for(x=1; x<=99; x+=2)
    {
        if(fr[x]>0)
        {
            g << x << " ";
        }
    }

    g << endl;

    for(x=98; x>=0; x-=2)
    {
        if(fr[x]>0)
        {
            g << x << " ";
        }
    }

    g.close();

    return 0;
}
