#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, L, l, alt;
	char s[51];

    cin.get(s,51);
    cin.get();

    n = strlen(s);

    L = l = alt = 0;

    for(i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            L++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
        else
        {
            alt++;
        }
    }

    cout << L << " " << l << " " << alt;

    return 0;
}
