#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n;
    char s[21], voc[]="aeiou";

    cin.get(s,21);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        if(strchr(voc,s[i])!=NULL)
        {
            cout << s[i];
        }
    }

    return 0;
}
