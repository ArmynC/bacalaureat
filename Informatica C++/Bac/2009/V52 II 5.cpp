#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int lg;
    char s[101], s2[52], sep[2]=" ", *p;

    cin.get(s, 101);
    cin.get();

    lg = 0;
    p = strtok(s,sep);

    while(p)
    {
        s2[lg] = p[0];
        lg++;

        p = strtok(NULL, sep);
    }

    s2[lg] = NULL;

    cout << s2;

    return 0;
}
