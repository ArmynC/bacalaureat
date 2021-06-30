#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, lg, lg2;
    char s[101], sep[]=" ", *p, s2[101];

    cin.get(s,101);
    cin.get();

    s2[0] = NULL;

    p = strtok(s,sep);

    while(p)
    {
        if(p[0]>='a' && p[0]<='z')
        {
            strcat(s2,p);
            strcat(s2,sep);
        }
        else
        {
            lg = strlen(p);
            i = 0;

            while(i<lg && p[i]!=',')
            {
                i++;
            }

            if(i==lg)
            {
                strcat(s2,p);
                strcat(s2,sep);
            }
            else
            {
                p[i] = NULL;
                strcat(s2,p);
                strcat(s2,sep);
            }
        }

        p = strtok(NULL,sep);

    }

    lg2 = strlen(s2);

    strcpy(s2+lg2-1,s2+lg2);
    strcpy(s,s2);

    cout << s;

    return 0;
}
