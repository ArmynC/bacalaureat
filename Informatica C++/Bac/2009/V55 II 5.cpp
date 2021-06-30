#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i;
	char s[101];

    cin.get(s,101);
    cin.get();

    n = strlen(s);

    for(i=0; i<n; i++)
    {
        if(!(s[i]>='0' && s[i]<='9'))
        {
            strcpy(s+i,s+i+1); /// Stergerea elementului s[i].
            i--;
            n--;
        }
    }

    if(n==0)
    {
        cout << "sir vid";
    }
    else
    {
        cout << s;
    }

    return 0;
}
