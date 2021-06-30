#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int lg, lgs2;
    char s[101], s2[101], *p, sep[2]=" ", aux;

    cin.get(s,101);
    cin.get();

    s2[0] = NULL;

    p = strtok(s,sep);

    while(p)
    {
        lg = strlen(p);

        if(lg<3)
        {
            strcat(s2,p);
            strcat(s2,sep);
        }
        else
        {
            /// Rotirea spre stanga.
            aux = p[0];
            strcpy(p,p+1);
            lg--;

            p[lg] = aux;
            p[lg+1] = NULL;
            lg++;

            strcat(s2,p);
            strcat(s2,sep);
        }

        p = strtok(NULL,sep);
    }

    lgs2 = strlen(s2);

    strcpy(s2+lgs2-1,s2+lgs2);
    strcpy(s,s2);

    cout << s;

    return 0;
}
