#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n, k, max, fr[10];
	char s[51], ch;

    cin.get(s,51);
    cin.get();

    n = strlen(s);

    for(i=0; i<=9; i++)
    {
        fr[i] = 0;
    }

    for(i=0; i<n; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            k = 0;
            ch = '0';

            while(ch!=s[i])
            {
                k++;
                ch++;
            }

            fr[k]++;
        }
    }

    max = 0;

    for(i=0; i<=9; i++)
    {
        if(max<fr[i])
        {
            max = fr[i];
        }
    }

    if(max==0)
    {
        cout << "NU";
    }
    else
    {
        i = 0;

        while(i<=9 && fr[i]!=max)
        {
            i++;
        }

        cout << i;
    }

    return 0;
}
