#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, j, m, nr;
    char s1[21], s2[21], v[]="aeiou";

    nr = 0;

    cin.get(s1,21);
    cin.get();

    n = strlen(s1);

    for(i=0; i<5; i++)
    {
        if(strchr(s1,v[i])!=NULL)  /* Daca vocala v[i] se gaseste in sirul s1,
                                      atunci vom sterge toate aparitiile lui v[i] in s1. */
        {

            nr++;
            strcpy(s2,s1);
            m = n;

            for(j=0; j<m; j++)
            {
                if(s2[j]==v[i])
                {
                    strcpy(s2+j,s2+j+1); /// Sterge caracterul s2[j].

                    m--;
                    j--;
                }
            }
            cout << s2 << endl;
        }
    }

    if(nr==0) ;

    return 0;
}
