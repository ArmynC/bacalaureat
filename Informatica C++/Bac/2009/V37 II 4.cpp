#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int n, i;
    char s[256];

    cin.get(s,256);
    cin.get();

    n = strlen(s);

    s[0] = toupper(s[0]);

    for(i=0; i<n; i++)
    {
        if(i>0 && isspace(s[i]) && (s[i+1]>='a' && s[i+1]<='z'))
        {
            s[i+1] = toupper(s[i+1]);
        }
    }

    s[n-1] = toupper(s[n-1]);

    for(i=0; i<n; i++)
    {
        if(isspace(s[i+1]) && (s[i]>='a' && s[i]<='z'))
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s;

    return 0;
}
