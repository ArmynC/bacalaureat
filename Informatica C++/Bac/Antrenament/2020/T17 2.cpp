#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, lg, i, nr, car[100], nrz;
    char s[201], s1[201], *p, voc[]="aeiou";

    cin.get(s,101);
    cin.get();

    nr = 0;

    p = strtok(s," ");

    s1[0] = 0;

    while(p)
    {
        lg = strlen(p);

        for(i=0; i<lg; i++)
        {
            car[i] = 0;
        }

        for(i=0; i<lg; i++)
        {
            if(strchr(voc,p[i])!=0)  /// Test daca p[i] este vocala.
            {
                car[i] = 1;
            }
        }

        nrz = 0;

        for(i=0; i<lg; i++)
        {
            if(car[i]==0)
            {
                nrz++;
            }
        }

        if(nrz==0)
        {
            nr++;
            strcat(s1,p);
            strcat(s1," ");
            strcat(s1,p);
            strcat(s1," ");
        }

        else
        {
            strcat(s1,p);
            strcat(s1," ");
        }

        p = strtok(0," ");

    }

    if(nr==0)
    {
        cout << "nu exista";
    }
    else
    {
        n = strlen(s1);

        strcpy(s1+n-1,s1+n);
        n--;

        s[0] = 0;
        strcpy(s,s1);

        cout << s;
    }

    return 0;
}
