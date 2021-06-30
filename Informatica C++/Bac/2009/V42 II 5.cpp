#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n, nr;
    char s[41], voc[]="aeiou";

    nr = 0;

    cin.get(s,41);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        if(strchr(voc,s[i])!=NULL)
        {
            nr++;

            cout << s[i] << " ";
        }
    }

    if(nr==0)
    {
        cout << "fara vocale";
    }

    return 0;
}
