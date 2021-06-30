#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int lg, nr, lgs2;
    char s[101], s2[101], *p, copiep[101], sep[2]=" ";

    cin.get(s,101);
    cin.get();

    s2[0] = NULL;
    p = strtok(s,sep);
    nr = 0;

    while(p)
    {
        lg = strlen(p);

        if(lg%2==0)
        {
            strcat(s2,p);
            strcat(s2,sep);
        }
        else
        {
            strcpy(copiep,p);
            strrev(copiep);

            if(strcmp(p,copiep)!=0)
            {
                strcat(s2,copiep);
                strcat(s2,sep);

                nr++;
            }
            else
            {
                strcat(s2,p);
                strcat(s2,sep);
            }
        }

        p = strtok(NULL,sep);
    }

    if(nr==0)
    {
        cout << "nu exista";
    }
    else
    {
        lgs2 = strlen(s2);
        strcpy(s2+lgs2-1,s2+lgs2);
        strcpy(s,s2);

        cout << s;
    }

    return 0;
}
