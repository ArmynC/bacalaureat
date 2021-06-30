#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n;
    char s[256], voc[] = "aeiou";

    cin.get(s,256);
    cin.get();

    n = strlen(s);

    i = n-1;

    while(i>=0)
    {
        if(s[i]==' ' || strchr(voc,s[i]) != NULL)
        {
            i--;
        }
        else
        {
            cout << s[i];

            i = -1;
        }
    }

    return 0;
}
