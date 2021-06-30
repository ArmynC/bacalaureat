#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int i, n, nrs;
    char s[256], ch, voc[]="AEIOU";

    nrs = 0;

    cin.get(s,256);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        if(isspace(s[i]))
        {
            nrs++;
        }
    }

    cout << nrs+1 << endl;

    for(ch='A'; ch<='Z'; ch++)
    {
        if(!(isspace(ch)) && strchr(voc,ch)==NULL)  /// Am verificat daca ch este consoana.
        {
            if(strchr(s,ch)!=NULL)  /// Am verificat daca ch se gaseste in s.
            {
                cout << ch << " ";
            }
        }
    }

    return 0;
}
