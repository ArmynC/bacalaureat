#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, x, y;
    char s[31];

    x = 0;
    y = 0;

    cin.get(s,31);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            x++;
        }
        else if(s[i]==' ')
        {
            y++;
        }
    }

    if(x+y==n)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
