#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n;
    char s[251], c1, c2;

    cin >> c1;
    cin.get();

    cin >> c2;
    cin.get();

    cin.get(s,251);
    cin.get();

    n = strlen(s);

    cout << s << endl;

    for(i=0; i<=n; i++)
    {
        if(s[i]==c1)
        {
            s[i] = c2;
        }
        else
        {
            if(s[i]==c2)
            {
                s[i] = c1;
            }
        }
    }

    f.close();

    cout << s;

    return 0;
}
