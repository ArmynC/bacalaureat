#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256], s2[256], voc[]="aeiou", *p, sep[]=" ", revcuv[256];

    cin.get(s,256);
    cin.get();

    cout << endl;
    cout << s << endl;

    s2[0] = NULL;

    p = strtok(s, sep);

    while(p)
    {
        if(strchr(voc,p[0])==NULL)  /// Adica p[0] nu e vocala.
        {
            strcat(s2,p);

            strcat(s2," ");
        }
        else
        {
            strcpy(revcuv,p);

            strrev(revcuv);

            strcat(s2,revcuv);

            strcat(s2," ");
        }

        p = strtok(NULL,sep);
    }

    strcpy(s2+strlen(s2)-1,s2+strlen(s2)); /// Am sters ultimul caracter spatiu din sirul s2.

    cout << s2;

    return 0;
}
