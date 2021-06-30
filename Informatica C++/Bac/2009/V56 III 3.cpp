#include <fstream>

using namespace std;

int main()
{
    int k, x;

    k = 0;

    ifstream f("numere.txt");
    ofstream g("pare.txt");

    while(f>>x)
    {
        if(x%2==0)
        {
            g << x << " ";

            k++;
        }
    }

    f.close();

    if(k==0)
    {
        g << "nu exista";
    }

    g.close();

    return 0;
}
