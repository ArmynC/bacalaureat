#include <iostream>
#include <cstring>

using namespace std;

int fr[25];

int main()
{
    int x, i, nr, nrn;
    char s[101], *p, sep[2]=" ", voc[]="aeiou";

    cin.get(s,101);
    cin.get();

    nr = 0;

    p = strtok(s,sep);

    while(p)
    {
        for(i=0; i<strlen(p); i++)
        {
            if(strchr(voc,p[i])!=NULL)
            {
                x = p[i]-'a';
                fr[x]++;
            }
        }

        nrn = 0;

        for(i=0; i<25; i++)
        {
            if(fr[i]!=0)
            {
                nrn++;
            }
        }

        if(nrn==1)
        {
            cout << p << endl;
            nr++;
        }

        p = strtok(NULL,sep);

        for(i=0; i<25; i++)
        {
            fr[i] = 0;
        }

    }
    if(nr==0)
    {
        cout << "NU EXISTA";
    }

    return 0;
}
