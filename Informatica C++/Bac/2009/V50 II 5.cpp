#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, j;
	char s[21], voc[]="aeiou";

    cin.get(s,21);
    cin.get();

    n = strlen(s);

    i = 0;
    while(i<n && strchr(voc,s[i])==NULL)
    {
        i++;
    }

    j = n-1;
    while(j>i && strchr(voc,s[j])==NULL)
    {
        j--;
    }

    strcpy(s+j,s+j+1);
    n--;

    strcpy(s+i,s+i+1);
    n--;

    cout << s;

    return 0;
}
