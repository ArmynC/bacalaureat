#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[201], *p, sep[]=" ", voc[]="aeiouAEIOU";
    int lg, nr;

    cin.get(s,201);
    cin.get();

    p = strtok(s,sep);
    nr = 0;

    while(p)
    {
        lg = strlen(p);

        if(strchr(voc,p[0])!=NULL && strchr(voc,p[lg-1])!=NULL)
        {
            nr++;
        }

        p = strtok(NULL,sep);
    }

    if(nr==0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << nr;
    }

    return 0;
}
