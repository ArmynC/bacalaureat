#include <iostream>
#include <cstring>

using namespace std;

int fr[26];

int main()
{
    int i, n, poz;
	char s[256], v[256];

    cin.get(s,256);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        v[i] = '0';
    }

    v[n] = NULL;

    for(i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            poz = s[i] - 'a';
            fr[poz]++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            poz = s[i] - 'a';

            if(fr[poz]>0)
            {
                v[i] = s[i];
                fr[poz] = 0;
            }
        }
    }

    v[n] = NULL;

    for(i=0; i<n; i++)
    {
        if(v[i]>='a' && v[i]<='z')
        {
            cout << v[i] << " ";
        }
    }

    cout << endl;


    return 0;
}
