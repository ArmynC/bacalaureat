#include <fstream>

using namespace std;

int main()
{
    char ch, ch1, ch2, sir[3], c;

    ofstream g("sir.txt");

    c = 'z'-1;
    sir[0] = NULL;

    for(ch1='a'; ch1<=c; ch1++)
    {
        ch = ch1+1;

        for(ch2=ch; ch2<='z'; ch2++)
        {
            sir[0] = ch1;
            sir[1] = ch2;
            sir[2] = NULL;

            g << sir << endl;

            sir[0] = NULL;
        }
    }

    for(ch='a'; ch<='y'; ch++)
    {
        sir[0] = 'z';
        sir[1] = ch;
        sir[2] = NULL;

        g << sir << endl;

        sir[0] = NULL;
    }

    g.close();

    return 0;
}
