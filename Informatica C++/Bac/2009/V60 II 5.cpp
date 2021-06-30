#include <iostream>
#include <cstring>

using namespace std;

int fr[26];

int main()
{

    int n, i, max, k;
    char s[51], ch;

    cin.get(s,51);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            k = s[i]-'a';
            fr[k]++;
        }
    }

    max = 0;

    for(k=0; k<26; k++)
    {
        if(max<fr[k])
        {
            max = fr[k];
        }
    }

    if(max==0)
    {
        cout << "NU";
    }
    else
    {
        k = 0;

        while(fr[k]!=max)
        {
            k++;
        }

        ch = 'a'+k;

        cout << ch;
    }

    return 0;
}
