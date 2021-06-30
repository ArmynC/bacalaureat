#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, v, c, nr;
    char s[101], *p, voc[]="aeiou", sep[]=" ";


    cin.get(s,101);
    cin.get();

    p = strtok(s,sep);
    nr = 0;

    while(p)
    {
        n = strlen(p);
        v = c = 0;

        for(int i=0; i<n; i++)
            if(strchr(voc,p[i])!=NULL)
            {
                v++;
            }
            else c++;

        if(v<c)
        {
            cout << p << endl;
            nr++;
        }

        p = strtok(NULL,sep);

    }

    if(nr==0)
    {
        cout << "nu exista";
    }

    return 0;
}
