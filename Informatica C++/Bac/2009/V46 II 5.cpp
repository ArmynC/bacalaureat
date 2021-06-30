#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i,n;
    char s[101], voc[]="aeiou", s2[101];

    cin.get(s,101);
    cin.get();

    n = strlen(s);

    s2[0] = NULL;

    for(i=0; i<n; i++)
    {
        if(strchr(voc,s[i])!=NULL)
        {
            s2[i] = s[i]+1;
        }
        else
        {
            s2[i] = s[i];
        }
    }

    s2[n] = NULL;

    strcpy(s,s2);

    cout << s;

    return 0;
}
